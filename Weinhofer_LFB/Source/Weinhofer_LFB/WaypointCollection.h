// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TargetPoint.h"
#include "WaypointCollection.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEINHOFER_LFB_API UWaypointCollection : public UActorComponent
{
	GENERATED_BODY()

//Static Variables
public:
	//Waypoint Tag FNames necessary to identify the desired Waypoints
	//Waypoints that are present multiple times
	static const FName DoorWaypointName;
	static const FName IdleWaypointName;
	static const FName MachineWaypointName;
	static const FName WorkstationWaypointName;
	static const FName WareCollectionWaypoint;
	static const FName MaterialDeliveryWaypointName;

	//Misc waypoints that are present only once
	static const FName MaterialDispenserWaypointName;
	static const FName WareGrabberWaypointName;
	static const FName ElevatorWaypointName;


//Member Variables

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<ATargetPoint*> DoorWaypoints;

	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<ATargetPoint*> IdleWaypoints;

	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<ATargetPoint*> MachineWaypoints;

	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<ATargetPoint*> WorkstationWaypoints;

	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<ATargetPoint*> MaterialDeliveryWaypoints;

	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<ATargetPoint*> WareCollectionWaypoints;

	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<ATargetPoint*> MiscWaypoints;

public:	
	UWaypointCollection();

	void LoadWaypoints();

	ATargetPoint* GetFirstFreeDoorWaypoint() const;

	ATargetPoint* GetRandomIdleWaypoint() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
private:
	static bool WaypointHasMiscTag(ATargetPoint* Waypoint);
};
