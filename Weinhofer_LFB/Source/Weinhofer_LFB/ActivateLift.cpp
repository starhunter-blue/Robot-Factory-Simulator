// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "ActivateLift.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Robot.h"

EBTNodeResult::Type UActivateLift::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* TargetRobot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!TargetRobot) {
		return EBTNodeResult::Failed;
	}

	if (TargetRobot->IsOnLift()) {
		return EBTNodeResult::Succeeded;
	}

	TargetRobot->EnterLift();

	

	return EBTNodeResult::Succeeded;
}
