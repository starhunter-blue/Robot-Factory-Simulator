// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "RobotAIController.h"
#include "WaypointCollection.h"

//Adapted from https://github.com/UnrealCourse/05_TestingGrounds
EBTNodeResult::Type UGetWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	//Get Patrol Points
	UWaypointCollection* Waypoints = Cast<ARobotAIController>(OwnerComp.GetAIOwner())->GetWaypointCollection();

	if (!ensure(Waypoints)) {
		UE_LOG(LogTemp, Warning, TEXT("%s: No Waypoints"), *GetName())
		return EBTNodeResult::Failed;
	}
	
	//Set new Waypoint
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	BlackboardComponent->SetValueAsObject(WaypointKey.SelectedKeyName, Waypoints->GetFirstFreeDoorWaypoint());

	return EBTNodeResult::Succeeded;
}