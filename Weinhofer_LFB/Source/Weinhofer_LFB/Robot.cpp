// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Robot.h"
#include "MachineMaterial.h"
#include "DoorQueue.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Lift.h"
#include "Workscreen.h"
#include "RobotAgenda.h"


// Sets default values
ARobot::ARobot()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Agenda = CreateDefaultSubobject<URobotAgenda>("Agenda");
}

void ARobot::DeliverWare(AWareGrabber * AtWareGrabber) {
	DropOffWare(AtWareGrabber);
	CarriedWare = nullptr;
}

void ARobot::NotifyDoorSlotOfLeaving() {
	if (DoorQueueSlot) {
		DoorQueueSlot->OccupantIsLeaving();
	}
}

void ARobot::RegisterWithLift() {
	if (!OnLift) {
		Lift->RegisterWithLift(this);
	}
}

void ARobot::EnterLift() {
	if (!OnLift) {
		SetOnLift();
		Lift->Activate();
	}
}

void ARobot::LeaveLift() {
	if (OnLift) {
		TArray<AActor*> UncastWorkscreens;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWorkscreen::StaticClass(), UncastWorkscreens);
		AWorkscreen* Workscreen = Cast<AWorkscreen>(UncastWorkscreens[0]);
		if (Workscreen) {
			Workscreen->InformOfRoboterLeavingOffice();
		}

		SetNotOnLift();
		Lift->Deactivate();
		Lift->DeregisterWithLift();
	}
}

// Called when the game starts or when spawned
void ARobot::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> UncastLifts;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALift::StaticClass(), UncastLifts);
	Lift = Cast<ALift>(UncastLifts[0]);
	if (!ensure(Lift)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No Lift found"))
	}
}

void ARobot::TerminateWorkCommand() {
	if (CarriedMaterial) {
		CarriedMaterial->Destroy();
	}
}

// Called every frame
void ARobot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ARobot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool ARobot::IsRequestFulfilled() const {
	if (Agenda->GetDesiredState() == ERobotState::RSE_UNSET) {
		return true;
	}

	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	if (Agenda->GetDesiredState() == ERobotState::RSE_Collecting && Controller->GetCurrentState() == ERobotState::RSE_Collecting) {
		return true;
	}

	if (Agenda->GetDesiredState() == ERobotState::RSE_Producing && Controller->GetCurrentState() == ERobotState::RSE_Producing) {
		AMachine* Machine = Cast<AMachine>(Controller->GetWorkTargetMachine());
		if (Agenda->GetDesiredKindOfMachine() == Machine->GetProducedWareType()) {
			return true;
		}
	}

	if (Agenda->GetDesiredState() == ERobotState::RSE_Supplying && Controller->GetCurrentState() == ERobotState::RSE_Supplying) {
		AMachine* Machine = Cast<AMachine>(Controller->GetWorkTargetMachine());
		if (Agenda->GetDesiredKindOfMachine() == Machine->GetProducedWareType()) {
			return true;
		}
	}

	return false;
}

int32 ARobot::GetRobotNr() const {
	return RobotNr;
}

bool ARobot::HasNumber(int32 Number) {
	return RobotNr == Number;
}

AActor * ARobot::GetCarriedMaterial() const {
	return CarriedMaterial;
}

void ARobot::DestroyCarriedStuff() {
	if (CarriedMaterial) {
		CarriedMaterial->Destroy();
	}

	if (CarriedWare) {
		CarriedWare->Destroy();
	}
}

AActor * ARobot::GetWorkTargetMachine() const{
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	return Controller->GetWorkTargetMachine();
}

AActor * ARobot::GetCarriedWare() const {
	return CarriedWare;
}

ADoorQueue * ARobot::GetDoorQueue() const {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	return Controller->GetDoorQueue();
}

ADoorQueueSlot * ARobot::GetQueueSlot() const {
	return DoorQueueSlot;
}

ALift * ARobot::GetLift() const {
	return Lift;
}

bool ARobot::IsOnLift() const {
	return OnLift;
}

void ARobot::SetNotOnLift() {
	OnLift = false;
}

void ARobot::SetOnLift() {
	OnLift = true;
}

URobotAgenda* ARobot::GetAgenda() const {
	return Agenda;
}

ERobotState ARobot::GetBehaviorState(){
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	return Controller->GetCurrentState();
}

void ARobot::GiveOverlordOrder(URobotAgenda * NewAgenda) {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	Controller->SetStateAutonomous();

	Agenda = NewAgenda;
}

bool ARobot::WasAlreadyInOffice() const {
	return HasEnteredOffice;
}

void ARobot::SetHasNotBeenInOffice() {
	HasEnteredOffice = false;
}

void ARobot::SetHasBeenInOffice() {
	HasEnteredOffice = true;
}

void ARobot::SetIdling() {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }
	if (Controller->GetCurrentState() == ERobotState::RSE_Autonomous && !HasEnteredOffice) {
		return;
	}

	NotifyDoorSlotOfLeaving();
	LeaveLift();

	Controller->SetIdling();
}

void ARobot::GiveProductionWorkCommand(AMachine * TargetMachine) {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	if (Controller->GetCurrentState() == ERobotState::RSE_Autonomous && !HasEnteredOffice) {
		return;
	}

	if (HasEnteredOffice) {
		TArray<AActor*> UncastWorkscreens;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWorkscreen::StaticClass(), UncastWorkscreens);
		AWorkscreen* Workscreen = Cast<AWorkscreen>(UncastWorkscreens[0]);
		if (Workscreen) {
			Workscreen->InformOfRoboterLeavingOffice();
		}
	}

	NotifyDoorSlotOfLeaving();

	Controller->GiveProductionWorkCommand(TargetMachine);
}

void ARobot::TerminateProductionWorkCommand() {
	TerminateWorkCommand();
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	Controller->TerminateProductionWorkCommand();
}

void ARobot::GiveSupplyWorkCommand(AMachine * TargetMachine) {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	if (Controller->GetCurrentState() == ERobotState::RSE_Autonomous && !HasEnteredOffice) {
		return;
	}

	if (HasEnteredOffice) {
		TArray<AActor*> UncastWorkscreens;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWorkscreen::StaticClass(), UncastWorkscreens);
		AWorkscreen* Workscreen = Cast<AWorkscreen>(UncastWorkscreens[0]);
		if (Workscreen) {
			Workscreen->InformOfRoboterLeavingOffice();
		}
	}

	NotifyDoorSlotOfLeaving();

	Controller->GiveSupplyWorkCommand(TargetMachine);
}

void ARobot::TerminateSupplyWorkCommand() {
	TerminateWorkCommand();
}

void ARobot::GiveCollectWorkCommand() {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	if (Controller->GetCurrentState() == ERobotState::RSE_Autonomous && !HasEnteredOffice) {
		return;
	}

	if (HasEnteredOffice) {
		TArray<AActor*> UncastWorkscreens;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWorkscreen::StaticClass(), UncastWorkscreens);
		AWorkscreen* Workscreen = Cast<AWorkscreen>(UncastWorkscreens[0]);
		if (Workscreen) {
			Workscreen->InformOfRoboterLeavingOffice();
		}
	}

	NotifyDoorSlotOfLeaving();

	Controller->GiveCollectWorkCommand();
}

void ARobot::GiveCallToOfficeCommand() {
	//Maybe remove this check
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	if (Controller->GetCurrentState() == ERobotState::RSE_Autonomous && !HasEnteredOffice) {
		return;
	}

	if (HasEnteredOffice) {
		TArray<AActor*> UncastWorkscreens;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWorkscreen::StaticClass(), UncastWorkscreens);
		AWorkscreen* Workscreen = Cast<AWorkscreen>(UncastWorkscreens[0]);
		if (Workscreen) {
			Workscreen->InformOfRoboterLeavingOffice();
		}
	}
	Controller->GiveCallToOfficeCommand();
}

void ARobot::CheckInAtSlot(ADoorQueueSlot* Slot) {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	if (DoorQueueSlot) {
		DoorQueueSlot->OccupantIsLeaving();
	}
	Controller->GetDoorQueue()->CheckInAtSlot(Slot, this);
	DoorQueueSlot = Slot;
}

void ARobot::SendIntoOffice() {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	Controller->PermitToEnterOffice();

	DoorQueueSlot = nullptr;
}

void ARobot::RequestMaterial() {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	Controller->RequestMaterial();
}

void ARobot::CollectMaterial(AMachineMaterial * MaterialToCollect) {
	CarriedMaterial = MaterialToCollect;

	CarriedMaterial->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepWorldTransform, "CarrySocket");
	DropMaterialDown();
}

void ARobot::SupplyMachine(AMachine * TargetMachine) {
	if (CarriedMaterial) {
		TargetMachine->GetSupplied();
		CarriedMaterial->Destroy();
	}
}

void ARobot::FindMachineToCollectFrom() {
	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }

	Controller->FindMachineToCollectFrom();
}

bool ARobot::CollectWare(AMachine * TargetMachine) {
	CarriedWare = TargetMachine->CollectWare(this);
	if (CarriedWare) {
		ThrowWareOnHead();
	}

	ARobotAIController* Controller = Cast<ARobotAIController>(GetController());
	if (!ensure(Controller)) { UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot - No RobotAIController found")) }
	Controller->ClearMachineToCollectFrom();
	
	
	return CarriedWare != nullptr;
}

