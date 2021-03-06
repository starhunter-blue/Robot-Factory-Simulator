// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "DoorQueueSlot.h"
#include "Robot.h"

// Sets default values
ADoorQueueSlot::ADoorQueueSlot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TargetPoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("TargetPoint"));
	TargetPoint->SetChildActorClass(ATargetPoint::StaticClass());
	SetRootComponent(TargetPoint);

}

int32 ADoorQueueSlot::GetSlotNr() const {
	return SlotNr;
}

void ADoorQueueSlot::SendOccupantIntoOffice() {
	if (!Occupant) return;

	Occupant->SendIntoOffice();
	Occupant = nullptr;
}

void ADoorQueueSlot::OccupantIsLeaving() {
	Occupant = nullptr;
}

// Called when the game starts or when spawned
void ADoorQueueSlot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorQueueSlot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ATargetPoint * ADoorQueueSlot::GetTargetPoint() const {
	return Cast<ATargetPoint>(TargetPoint->GetChildActor());
}

bool ADoorQueueSlot::IsOpen() const {
	return Occupant == nullptr;
}

void ADoorQueueSlot::RegisterOccupant(ARobot * NewOccupant) {
	Occupant = NewOccupant;
}

bool ADoorQueueSlot::IsCloserToDoorThan(ADoorQueueSlot * OtherSlot) {
	if (!OtherSlot) return true;
	return SlotNr < OtherSlot->GetSlotNr();
}

