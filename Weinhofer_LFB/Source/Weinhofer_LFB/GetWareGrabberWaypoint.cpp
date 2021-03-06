// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetWareGrabberWaypoint.h"
#include "Kismet/GameplayStatics.h"
#include "WareGrabber.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MaterialDispenser.h"
#include "DoorQueue.h"

EBTNodeResult::Type UGetWareGrabberWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	AWareGrabber* TargetWareGrabber = Cast<AWareGrabber>(BlackboardComponent->GetValueAsObject(WareGrabberKey.SelectedKeyName));

	if (!TargetWareGrabber) return EBTNodeResult::Failed;

	BlackboardComponent->SetValueAsObject(WaypointKey.SelectedKeyName, TargetWareGrabber->GetWaypoint());

	return EBTNodeResult::Succeeded;
}
