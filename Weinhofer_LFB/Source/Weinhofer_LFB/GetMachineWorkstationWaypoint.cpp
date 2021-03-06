// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetMachineWorkstationWaypoint.h"
#include "Machine.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UGetMachineWorkstationWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	AMachine* TargetMachine = Cast<AMachine>(BlackboardComponent->GetValueAsObject(TargetMachineKey.SelectedKeyName));

	if (!TargetMachine) {
		return EBTNodeResult::Failed;
	}

	BlackboardComponent->SetValueAsObject(WaypointKey.SelectedKeyName, TargetMachine->GetWorkstationWaypoint());
	return EBTNodeResult::Succeeded;

}