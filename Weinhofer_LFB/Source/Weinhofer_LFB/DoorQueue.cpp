// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "DoorQueue.h"

// Sets default values
ADoorQueue::ADoorQueue()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	FirstInLine = CreateDefaultSubobject<UChildActorComponent>(TEXT("FirstInLine"));
	FirstInLine->SetChildActorClass(ADoorQueueSlot::StaticClass());
	SetRootComponent(FirstInLine);

	SecondInLine = CreateDefaultSubobject<UChildActorComponent>(TEXT("SecondInLine"));
	SecondInLine->SetChildActorClass(ADoorQueueSlot::StaticClass());
	SecondInLine->SetupAttachment(FirstInLine);

	ThirdInLine = CreateDefaultSubobject<UChildActorComponent>(TEXT("ThirdInLine"));
	ThirdInLine->SetChildActorClass(ADoorQueueSlot::StaticClass());
	ThirdInLine->SetupAttachment(SecondInLine);

	FourthInLine = CreateDefaultSubobject<UChildActorComponent>(TEXT("FourthInLine"));
	FourthInLine->SetChildActorClass(ADoorQueueSlot::StaticClass());
	FourthInLine->SetupAttachment(ThirdInLine);

	FifthInLine = CreateDefaultSubobject<UChildActorComponent>(TEXT("FifthInLine"));
	FifthInLine->SetChildActorClass(ADoorQueueSlot::StaticClass());
	FifthInLine->SetupAttachment(FourthInLine);

}

// Called when the game starts or when spawned
void ADoorQueue::BeginPlay()
{
	Super::BeginPlay();
	
}

bool ADoorQueue::HasSlot(ADoorQueueSlot * Slot) {
	if (Slot == Cast<ADoorQueueSlot>(FirstInLine->GetChildActor())) {
		return true;
	}
	else if (Slot == Cast<ADoorQueueSlot>(SecondInLine->GetChildActor())) {
		return true;
	}
	else if (Slot == Cast<ADoorQueueSlot>(ThirdInLine->GetChildActor())) {
		return true;
	}
	else if (Slot == Cast<ADoorQueueSlot>(FourthInLine->GetChildActor())) {
		return true;
	}
	else if (Slot == Cast<ADoorQueueSlot>(FifthInLine->GetChildActor())) {
		return true;
	}
	else {
		return false;
	}
}

ADoorQueueSlot * ADoorQueue::GetFirstOpenSlot() {
	ADoorQueueSlot* FirstSlot = Cast<ADoorQueueSlot>(FirstInLine->GetChildActor());
	if (FirstSlot->IsOpen()) {
		return FirstSlot;
	}

	ADoorQueueSlot* SecondSlot = Cast<ADoorQueueSlot>(SecondInLine->GetChildActor());
	if (SecondSlot->IsOpen()) {
		return SecondSlot;
	}

	ADoorQueueSlot* ThirdSlot = Cast<ADoorQueueSlot>(ThirdInLine->GetChildActor());
	if (ThirdSlot->IsOpen()) {
		return ThirdSlot;
	}

	ADoorQueueSlot* FourthSlot = Cast<ADoorQueueSlot>(FourthInLine->GetChildActor());
	if (FourthSlot->IsOpen()) {
		return FourthSlot;
	}

	ADoorQueueSlot* FifthSlot = Cast<ADoorQueueSlot>(FifthInLine->GetChildActor());
	if (FifthSlot->IsOpen()) {
		return FifthSlot;
	}
	
	return nullptr;
}

void ADoorQueue::LetFirstRobotInQueueIn() {
	ADoorQueueSlot* FirstSlot = Cast<ADoorQueueSlot>(FirstInLine->GetChildActor());
	if (!FirstSlot->IsOpen()) {
		FirstSlot->SendOccupantIntoOffice();
		return;
	}

	ADoorQueueSlot* SecondSlot = Cast<ADoorQueueSlot>(SecondInLine->GetChildActor());
	if (!SecondSlot->IsOpen()) {
		SecondSlot->SendOccupantIntoOffice();
		return;
	}

	ADoorQueueSlot* ThirdSlot = Cast<ADoorQueueSlot>(ThirdInLine->GetChildActor());
	if (!ThirdSlot->IsOpen()) {
		ThirdSlot->SendOccupantIntoOffice();
		return;
	}

	ADoorQueueSlot* FourthSlot = Cast<ADoorQueueSlot>(FourthInLine->GetChildActor());
	if (!FourthSlot->IsOpen()) {
		FourthSlot->SendOccupantIntoOffice();
		return;
	}

	ADoorQueueSlot* FifthSlot = Cast<ADoorQueueSlot>(FifthInLine->GetChildActor());
	if (!FifthSlot->IsOpen()) {
		FifthSlot->SendOccupantIntoOffice();
		return;
	}
}

bool ADoorQueue::HasRobot() const {
	ADoorQueueSlot* FirstSlot = Cast<ADoorQueueSlot>(FirstInLine->GetChildActor());
	return !FirstSlot->IsOpen();
}

int32 ADoorQueue::GetNrOfWaitingRobots() {
	int32 Counter = 0;

	ADoorQueueSlot* FirstSlot = Cast<ADoorQueueSlot>(FirstInLine->GetChildActor());
	if (!FirstSlot->IsOpen()) {
		Counter++;
	}

	ADoorQueueSlot* SecondSlot = Cast<ADoorQueueSlot>(SecondInLine->GetChildActor());
	if (!SecondSlot->IsOpen()) {
		Counter++;
	}

	ADoorQueueSlot* ThirdSlot = Cast<ADoorQueueSlot>(ThirdInLine->GetChildActor());
	if (!ThirdSlot->IsOpen()) {
		Counter++;
	}

	ADoorQueueSlot* FourthSlot = Cast<ADoorQueueSlot>(FourthInLine->GetChildActor());
	if (!FourthSlot->IsOpen()) {
		Counter++;
	}

	ADoorQueueSlot* FifthSlot = Cast<ADoorQueueSlot>(FifthInLine->GetChildActor());
	if (!FifthSlot->IsOpen()) {
		Counter++;
	}

	return Counter;
}

// Called every frame
void ADoorQueue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorQueue::CheckInAtSlot(ADoorQueueSlot* Slot, class ARobot* Robot) {
	if (!ensure(HasSlot(Slot))) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: DoorQueue - CheckInSlot - Could not find given Slot"))
			return;
	}
	Slot->RegisterOccupant(Robot);
}

