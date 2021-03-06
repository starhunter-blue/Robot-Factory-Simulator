// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "RobotAIController.h"
#include "WaypointCollection.h"
#include "Machine.h"
#include "Robot.h"
#include "MaterialDispenser.h"
#include "WareGrabber.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "DoorQueue.h"

ARobotAIController::ARobotAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer){
	Waypoints = CreateDefaultSubobject<UWaypointCollection>(TEXT("Waypoints"));

	RobotState = ERobotState::RSE_Idle;
}

void ARobotAIController::BeginPlay() {
	Super::BeginPlay();

	Waypoints->LoadWaypoints();

	TArray<AActor*> MaterialDispensers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMaterialDispenser::StaticClass(), MaterialDispensers);
	MaterialDispenser = Cast<AMaterialDispenser>(MaterialDispensers[0]);
	if(!ensure(MaterialDispenser)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAIController - No MaterialDispenser found!"))

	TArray<AActor*> WareGrabbers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWareGrabber::StaticClass(), WareGrabbers);
	WareGrabber = Cast<AWareGrabber>(WareGrabbers[0]);
	if (!ensure(WareGrabber)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAIController - No WareGrabber found!"))

	TArray<AActor*> UncastMachines;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMachine::StaticClass(), UncastMachines);
	for (AActor* UncastMachine : UncastMachines) {
		Machines.Add(Cast<AMachine>(UncastMachine));
	}
	if (Machines.Num() < 1) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAIController - No Machines found!"))
	}

	TArray<AActor*> DoorQueues;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADoorQueue::StaticClass(), DoorQueues);
	DoorQueue = Cast<ADoorQueue>(DoorQueues[0]);
	if (!ensure(DoorQueue)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAIController - No DoorQueue found!"))


	this->OnStateUpdated();
}

UWaypointCollection* ARobotAIController::GetWaypointCollection() const{
	return Waypoints;
}

ERobotState ARobotAIController::GetCurrentState() {
	return RobotState;
}

AActor * ARobotAIController::GetWorkProductionTargetWaypoint() {
	if (!WorkTargetMachine) return nullptr;
	return WorkTargetMachine->GetWorkstationWaypoint();
}

AActor * ARobotAIController::GetWorkTargetMachine() const {
	return WorkTargetMachine;
}

AActor * ARobotAIController::GetMaterialDispenser() const {
	return MaterialDispenser;
}

AActor * ARobotAIController::GetWareGrabber() const {
	return WareGrabber;
}

void ARobotAIController::ClearMachineToCollectFrom() {
	WorkTargetMachine = nullptr;
}

ADoorQueue* ARobotAIController::GetDoorQueue() const {
	return DoorQueue;
}

void ARobotAIController::SetIdling() {
	SetStateTo(ERobotState::RSE_Idle);
	LeaveOffice();
}

void ARobotAIController::SetStateAutonomous() {
	SetStateTo(ERobotState::RSE_Autonomous);
}

void ARobotAIController::GiveProductionWorkCommand(AMachine * TargetMachine) {
	WorkTargetMachine = TargetMachine;
	ARobot* Robot = Cast<ARobot>(GetCharacter());
	if(!ensure(Robot)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAiController - GiveProductionWorkCommand - No Robot Pawn found"))
	
	WorkTargetMachine->RegisterNewProductionWorkerRobot(Robot);

	SetStateTo(ERobotState::RSE_Producing);
	LeaveOffice();
}

void ARobotAIController::TerminateProductionWorkCommand() {
	TerminateWorkCommand();
}

void ARobotAIController::GiveSupplyWorkCommand(AMachine * TargetMachine) {
	WorkTargetMachine = TargetMachine;
	ARobot* Robot = Cast<ARobot>(GetCharacter());
	if (!ensure(Robot)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAiController - GiveSupplyWorkCommand - No Robot Pawn found"))

	WorkTargetMachine->RegisterNewSupplyWorkerRobot(Robot);
	SetStateTo(ERobotState::RSE_Supplying);
	LeaveOffice();
}

void ARobotAIController::TerminateSupplyWorkCommand() {
	TerminateWorkCommand();
}

void ARobotAIController::GiveCollectWorkCommand() {
	SetStateTo(ERobotState::RSE_Collecting);
	LeaveOffice();
}

void ARobotAIController::TerminateCollectCommand() {
	if (WorkTargetMachine) {
		ARobot* Robot = Cast<ARobot>(GetCharacter());
		if (!ensure(Robot)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAiController - TerminateCollectCommand - No Robot Pawn found"))

		WorkTargetMachine->CancelCollection(Robot);
	}
}

void ARobotAIController::GiveCallToOfficeCommand() {
	SetStateTo(ERobotState::RSE_CalledToOffice);
	LeaveOffice();
}

void ARobotAIController::RequestMaterial() {
	ARobot* Robot = Cast<ARobot>(GetCharacter());
	if (!ensure(Robot)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAiController - RequestMaterial - No Robot Pawn found"))
	}

	MaterialDispenser->DispenseMaterial(Robot);
}

void ARobotAIController::FindMachineToCollectFrom() {
	if (Machines[NextMachineToCheckForWare]->HasWareOpenForCollection()) {
		ARobot* Robot = Cast<ARobot>(GetCharacter());
		if (!ensure(Robot)) {
			UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotAiController - FindMachineToCollectFrom - No Robot Pawn found"))
		}

		Machines[NextMachineToCheckForWare]->RegisterCollectionWorkerRobot(Robot);

		WorkTargetMachine = Machines[NextMachineToCheckForWare];
		
	}
	IncrementNextMachineToCheck();
}

void ARobotAIController::SetStateTo(ERobotState State) {
	RobotState = State;
	this->OnStateUpdated();
}

void ARobotAIController::TerminateWorkCommand() {
	WorkTargetMachine = nullptr;
	SetStateTo(ERobotState::RSE_Idle);
}

void ARobotAIController::IncrementNextMachineToCheck() {
	NextMachineToCheckForWare++;
	if (NextMachineToCheckForWare >= 3) {
		NextMachineToCheckForWare = 0;
	}
}
