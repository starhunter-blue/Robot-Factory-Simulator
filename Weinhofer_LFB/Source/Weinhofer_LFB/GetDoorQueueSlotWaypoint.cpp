// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetDoorQueueSlotWaypoint.h"
#include "DoorQueueSlot.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UGetDoorQueueSlotWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ADoorQueueSlot* DoorQueueSlot = Cast<ADoorQueueSlot>(BlackboardComponent->GetValueAsObject(DoorQueueSlotKey.SelectedKeyName));

	if (!DoorQueueSlot) return EBTNodeResult::Failed;
	
	BlackboardComponent->SetValueAsObject(WaypointKey.SelectedKeyName, DoorQueueSlot->GetTargetPoint());

	return EBTNodeResult::Succeeded;
}
