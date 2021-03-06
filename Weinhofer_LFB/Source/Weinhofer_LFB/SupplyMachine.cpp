// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "SupplyMachine.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Machine.h"
#include "Robot.h"

EBTNodeResult::Type USupplyMachine::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* Robot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));
	if (!Robot) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: No Robot Found for SupplyMachine BTTask"))
	}

	AMachine* TargetMachine = Cast<AMachine>(BlackboardComponent->GetValueAsObject(TargetMachineKey.SelectedKeyName));
	if (!TargetMachine) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: No Machine Found for SupplyMachine BTTask"))
		return EBTNodeResult::Failed;
	}

	Robot->SupplyMachine(TargetMachine);

	return EBTNodeResult::Succeeded;
}
