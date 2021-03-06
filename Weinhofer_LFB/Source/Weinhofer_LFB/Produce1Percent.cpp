// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Produce1Percent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Machine.h"

EBTNodeResult::Type UProduce1Percent::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	AMachine* TargetMachine = Cast<AMachine>(BlackboardComponent->GetValueAsObject(TargetMachineKey.SelectedKeyName));

	if (!TargetMachine) return EBTNodeResult::Failed;

	TargetMachine->ProduceWare();

	return EBTNodeResult::Succeeded;
}
