// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Lift.h"
#include "Engine/TargetPoint.h"
#include "Robot.h"


// Sets default values
ALift::ALift()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	LiftMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LiftMesh"));
	SetRootComponent(LiftMesh);

	LiftWaypoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("LiftWaypoint"));
	LiftWaypoint->SetChildActorClass(ATargetPoint::StaticClass());
	LiftWaypoint->SetupAttachment(LiftMesh, TEXT("TopSocket"));

}

// Called when the game starts or when spawned
void ALift::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALift::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ATargetPoint * ALift::GetLiftWaypoint() const {
	return Cast<ATargetPoint>(LiftWaypoint->GetChildActor());
}

void ALift::RegisterWithLift(ARobot * NewRobot) {
	Robot = NewRobot;
}

void ALift::DeregisterWithLift() {
	Robot = nullptr;
}

void ALift::Activate() {
	Unfold();
}

void ALift::Deactivate() {
	Robot = nullptr;
	if (!IsFolded()) {
		Fold();
	}
}

bool ALift::IsFolded() {
	return FoldState;
}

void ALift::SetIsFolded() {
	FoldState = true;
}

void ALift::SetIsUnfolded() {
	FoldState = false;
}

void ALift::DismissOccupant() {
	Robot->SetIdling();
}

bool ALift::HasOccupant() const {
	return Robot != nullptr;
}

