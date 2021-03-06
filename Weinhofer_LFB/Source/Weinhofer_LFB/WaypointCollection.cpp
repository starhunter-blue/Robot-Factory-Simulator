// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "WaypointCollection.h"

//Load Waypoints Includes
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

//Get Waypoitns Includes
#include "Math/UnrealMathUtility.h"

const FName UWaypointCollection::DoorWaypointName = "DoorWaypoint";
const FName UWaypointCollection::IdleWaypointName = "IdleWaypoint";
const FName UWaypointCollection::MachineWaypointName = "MachineWaypoint";
const FName UWaypointCollection::WorkstationWaypointName = "WorkstationWaypoint";
const FName UWaypointCollection::WareCollectionWaypoint = "WareCollectionWaypoint";
const FName UWaypointCollection::MaterialDeliveryWaypointName = "MaterialDeliveryWaypoint";
const FName UWaypointCollection::MaterialDispenserWaypointName = "MaterialDispenserWaypoint";
const FName UWaypointCollection::WareGrabberWaypointName = "WareGrabberWaypoint";
const FName UWaypointCollection::ElevatorWaypointName = "ElevatorWaypoint";


UWaypointCollection::UWaypointCollection()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UWaypointCollection::BeginPlay()
{
	Super::BeginPlay();
	
}

//Collects all TargetPoint Actors and sorts them into the correct arrays for later use
void UWaypointCollection::LoadWaypoints() {
	TArray<AActor*> AllWaypoints;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), AllWaypoints);

	for (AActor* Waypoint : AllWaypoints) {
		if (Waypoint->ActorHasTag(DoorWaypointName)) {
			DoorWaypoints.Add(Cast<ATargetPoint>(Waypoint));
		}

		if (Waypoint->ActorHasTag(IdleWaypointName)) {
			IdleWaypoints.Add(Cast<ATargetPoint>(Waypoint));
		}

		if (Waypoint->ActorHasTag(MachineWaypointName)) {
			MachineWaypoints.Add(Cast<ATargetPoint>(Waypoint));
		}

		if (Waypoint->ActorHasTag(WorkstationWaypointName)) {
			WorkstationWaypoints.Add(Cast<ATargetPoint>(Waypoint));
		}

		if (Waypoint->ActorHasTag(WareCollectionWaypoint)) {
			WareCollectionWaypoints.Add(Cast<ATargetPoint>(Waypoint));
		}

		if (Waypoint->ActorHasTag(MaterialDeliveryWaypointName)) {
			MaterialDeliveryWaypoints.Add(Cast<ATargetPoint>(Waypoint));
		}

		if (WaypointHasMiscTag(Cast<ATargetPoint>(Waypoint))) {
			MiscWaypoints.Add(Cast<ATargetPoint>(Waypoint));
		}
	}

}

ATargetPoint * UWaypointCollection::GetFirstFreeDoorWaypoint() const {
	//TODO Make it return actual first free point
	for (ATargetPoint* Waypoint : DoorWaypoints) {
		if (Waypoint->ActorHasTag("DoorWaypoint1")) return Waypoint;
	}
	return DoorWaypoints[0];
}

ATargetPoint * UWaypointCollection::GetRandomIdleWaypoint() const {
	int32 RandomIdleWaypointIndex = FMath::RandRange(0, IdleWaypoints.Num() - 1);

	return IdleWaypoints[RandomIdleWaypointIndex];
}

bool UWaypointCollection::WaypointHasMiscTag(ATargetPoint * Waypoint) {
	if (Waypoint->ActorHasTag(MaterialDispenserWaypointName)) return true;
	else if (Waypoint->ActorHasTag(WareGrabberWaypointName)) return true;
	else if (Waypoint->ActorHasTag(ElevatorWaypointName)) return true;
	else return false;
}



