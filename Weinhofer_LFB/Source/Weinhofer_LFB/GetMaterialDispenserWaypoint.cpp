// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetMaterialDispenserWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MaterialDispenser.h"

EBTNodeResult::Type UGetMaterialDispenserWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	AMaterialDispenser* TargetDispenser = Cast<AMaterialDispenser>(BlackboardComponent->GetValueAsObject(MaterialDispenserKey.SelectedKeyName));

	if (!TargetDispenser) return EBTNodeResult::Failed;

	BlackboardComponent->SetValueAsObject(WaypointKey.SelectedKeyName, TargetDispenser->GetWaypoint());

	return EBTNodeResult::Succeeded;

}
