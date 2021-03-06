// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Ware.h"

// Sets default values
AWare::AWare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WareMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MachineBodyMesh"));
	SetRootComponent(WareMesh);

}

EWareType AWare::GetWareType() const {
	return WareType;
}

// Called when the game starts or when spawned
void AWare::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

