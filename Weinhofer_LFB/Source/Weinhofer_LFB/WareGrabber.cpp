// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "WareGrabber.h"
#include "Engine/TargetPoint.h"

// Sets default values
AWareGrabber::AWareGrabber()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WareGrabberUpperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WareGrabberUpperMesh"));
	SetRootComponent(WareGrabberUpperMesh);

	WareGrabberLowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WareGrabberLowerMesh"));
	WareGrabberLowerMesh->SetupAttachment(WareGrabberUpperMesh);

	WareGrabberWaypoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("WorkstationWaypoint"));
	WareGrabberWaypoint->SetChildActorClass(ATargetPoint::StaticClass());
	WareGrabberWaypoint->SetupAttachment(WareGrabberUpperMesh);
}

// Called when the game starts or when spawned
void AWareGrabber::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWareGrabber::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ATargetPoint* AWareGrabber::GetWaypoint() {
	return Cast<ATargetPoint>(WareGrabberWaypoint->GetChildActor());
}

