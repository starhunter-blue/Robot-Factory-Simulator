// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "RobotDoor.h"
#include "Kismet/GameplayStatics.h"
#include "DoorQueue.h"
#include "Engine/World.h"

// Sets default values
ARobotDoor::ARobotDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
	SetRootComponent(DoorFrame);

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Door->SetupAttachment(DoorFrame);

}

// Called when the game starts or when spawned
void ARobotDoor::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> UncastDoorQueues;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADoorQueue::StaticClass(), UncastDoorQueues);
	DoorQueue = Cast<ADoorQueue>(UncastDoorQueues[0]);
	if (!ensure(DoorQueue)) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotDoor could not find DoorQueue"))
	}
	
}

bool ARobotDoor::CanOpen() const {
	return !Locked;
}

void ARobotDoor::LockDoor() {
	Locked = true;
}

void ARobotDoor::UnlockDoor() {
	Locked = false;
}

// Called every frame
void ARobotDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARobotDoor::LetRobotIn() {
	UnlockDoor();
	DoorQueue->LetFirstRobotInQueueIn();
}

bool ARobotDoor::QueueHasRobot() const {
	return DoorQueue->HasRobot();
}

