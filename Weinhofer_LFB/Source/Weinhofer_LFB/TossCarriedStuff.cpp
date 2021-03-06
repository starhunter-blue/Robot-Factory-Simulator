// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "TossCarriedStuff.h"
#include "Robot.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UTossCarriedStuff::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* Robot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));
	if (!Robot) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: No Robot Found for SupplyMachine BTTask"))
	}

	Robot->DestroyCarriedStuff();

	return EBTNodeResult::Succeeded;
}
