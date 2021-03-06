// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "MaterialDispenser.h"
#include "Robot.h"
#include "Engine/World.h"
#include "MachineMaterial.h"

// Sets default values
AMaterialDispenser::AMaterialDispenser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DispenserBodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DispenserBodyMesh"));
	SetRootComponent(DispenserBodyMesh);

	MaterialPickupWaypoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("WorkstationWaypoint"));
	MaterialPickupWaypoint->SetChildActorClass(ATargetPoint::StaticClass());
	MaterialPickupWaypoint->SetupAttachment(DispenserBodyMesh, "MaterialSpawn");

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	PlatformMesh->SetupAttachment(MaterialPickupWaypoint);
}

// Called when the game starts or when spawned
void AMaterialDispenser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMaterialDispenser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ATargetPoint* AMaterialDispenser::GetWaypoint() {
	return Cast<ATargetPoint>(MaterialPickupWaypoint->GetChildActor());
}

void AMaterialDispenser::DispenseMaterial(ARobot* TargetRobot) {
	AMachineMaterial* Material = GetWorld()->SpawnActor<AMachineMaterial>(MaterialClass);
	Material->AttachToComponent(DispenserBodyMesh, FAttachmentTransformRules::KeepRelativeTransform, "MaterialSpawn");
	TargetRobot->CollectMaterial(Material);
}

