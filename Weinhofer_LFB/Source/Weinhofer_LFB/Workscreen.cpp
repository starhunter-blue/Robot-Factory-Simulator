// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Workscreen.h"

//Handling Actors
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

//Handling Robots
#include "Robot.h"

//Handling Machines
#include "Machine.h"

//Handling Office
#include "Lift.h"
#include "RobotDoor.h"

// Sets default values
AWorkscreen::AWorkscreen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AWorkscreen::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> RobotsActorClass;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARobot::StaticClass(), RobotsActorClass);

	for (AActor* UncastRobot : RobotsActorClass) {
		if (UncastRobot) {
			Robots.Add(Cast<ARobot>(UncastRobot));
		}
	}

	TArray<AActor*> MachinesActorClass;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMachine::StaticClass(), MachinesActorClass);
		for (AActor* UncastMachine : MachinesActorClass) {
			if (UncastMachine) {
				Machines.Add(Cast<AMachine>(UncastMachine));
			}
		}

		TArray<AActor*> UncastLifts;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALift::StaticClass(), UncastLifts);
		Lift = Cast<ALift>(UncastLifts[0]);
		if (!ensure(Lift)) {
			UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Workscreen - No Lift found"))
		}

		TArray<AActor*> RobotDoors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARobotDoor::StaticClass(), RobotDoors);
		RobotDoor = Cast<ARobotDoor>(RobotDoors[0]);
		if (!ensure(RobotDoor)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Workscreen - No DoorQueue found!"))
}

void AWorkscreen::SendProductionOrder(int32 TargetRobotNr, EWareType WareType) {

	ARobot* TargetRobot = GetRobotWithNr(TargetRobotNr);
	if (!ensure(TargetRobot)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Workscreen SendProductionOrder - Robot Not Found"))
		return;
	}

	AMachine* TargetMachine = GetFirstMachineProducingWareType(WareType);
	if (!ensure(TargetMachine)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Workscreen SendProductionOrder - Machine Not Found"))
		return;
	}
	
	TargetRobot->GiveProductionWorkCommand(TargetMachine);
}

void AWorkscreen::SendSupplyOrder(int32 TargetRobotNr, AMachine* TargetMachine) {
	ARobot* TargetRobot = GetRobotWithNr(TargetRobotNr);
	if (!ensure(TargetRobot)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Workscreen SendSupplyOrder - Robot Not Found"))
			return;
	}
	TargetRobot->GiveSupplyWorkCommand(TargetMachine);
}

void AWorkscreen::SendCollectOrder(int32 TargetRobotNr) {
	ARobot* TargetRobot = GetRobotWithNr(TargetRobotNr);
	if (!ensure(TargetRobot)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Workscreen SendCollectOrder - Robot Not Found"))
			return;
	}

	TargetRobot->GiveCollectWorkCommand();
}

void AWorkscreen::SendCallToOfficeOrder(int32 TargetRobotNr) {
	ARobot* TargetRobot = GetRobotWithNr(TargetRobotNr);
	if (!ensure(TargetRobot)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Workscreen SendCallToOfficeOrder - Robot Not Found"))
			return;
	}

	TargetRobot->GiveCallToOfficeCommand();
}

void AWorkscreen::LetRobotIntoOffice() {
	RobotDoor->LetRobotIn();
}

void AWorkscreen::DismissRobotFromOffice() {
	Lift->DismissOccupant();
}

bool AWorkscreen::QueueHasRobot() const {
	return RobotDoor->QueueHasRobot();
}

ARobot * AWorkscreen::GetRobotWithNr(int32 Nr) const {
	for (ARobot* Robot : Robots) {
		if (Robot->HasNumber(Nr)) return Robot;
	}

	return nullptr;
}

AMachine * AWorkscreen::GetFirstMachineProducingWareType(EWareType WareType) const {
	for (AMachine* Machine : Machines) {
		if (Machine->ProducesWare(WareType)) return Machine;
	}

	return nullptr;
}


