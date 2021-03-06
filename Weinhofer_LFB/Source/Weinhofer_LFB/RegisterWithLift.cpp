// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "RegisterWithLift.h"
#include "Robot.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type URegisterWithLift::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* TargetRobot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!TargetRobot) {
		return EBTNodeResult::Failed;
	}

	if (TargetRobot->IsOnLift()) {
		return EBTNodeResult::Succeeded;
	}

	TargetRobot->RegisterWithLift();

	return EBTNodeResult::Succeeded;
}
