// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "MachineMaterial.h"

// Sets default values
AMachineMaterial::AMachineMaterial()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MaterialMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MaterialMesh"));
	SetRootComponent(MaterialMesh);

}

// Called when the game starts or when spawned
void AMachineMaterial::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMachineMaterial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

