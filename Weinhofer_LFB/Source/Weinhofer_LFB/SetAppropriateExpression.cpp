// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "SetAppropriateExpression.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Robot.h"

EBTNodeResult::Type USetAppropriateExpression::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* TargetRobot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!TargetRobot) return EBTNodeResult::Failed;

	TargetRobot->PlaySettingAppropriateExpression();

	return EBTNodeResult::Succeeded;
}
