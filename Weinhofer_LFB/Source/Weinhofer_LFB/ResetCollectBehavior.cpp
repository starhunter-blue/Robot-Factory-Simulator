// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "ResetCollectBehavior.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UResetCollectBehavior::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();

	BlackboardComponent->ClearValue(TargetMachine.SelectedKeyName);
	BlackboardComponent->ClearValue(TargetWaypoint.SelectedKeyName);
	BlackboardComponent->ClearValue(CarriedWareKey.SelectedKeyName);

	return EBTNodeResult::Succeeded;
}
