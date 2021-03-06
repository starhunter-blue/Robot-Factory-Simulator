// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "PlayRobotWave.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Robot.h"

EBTNodeResult::Type UPlayRobotWave::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* TargetRobot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!TargetRobot) return EBTNodeResult::Failed;

	TargetRobot->PlayHappyGreeting();

	return EBTNodeResult::Succeeded;
}
