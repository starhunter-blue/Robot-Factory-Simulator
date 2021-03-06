// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetTargetMachine.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Robot.h"

EBTNodeResult::Type UGetTargetMachine::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* Robot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!Robot) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: GetTargetMachie - No Robot Set"))
		return EBTNodeResult::Failed;
	}

	Robot->FindMachineToCollectFrom();

	BlackboardComponent->SetValueAsObject(TargetMachineKey.SelectedKeyName, Robot->GetWorkTargetMachine());

	return EBTNodeResult::Succeeded;
}
