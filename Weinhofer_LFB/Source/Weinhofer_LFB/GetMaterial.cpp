// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetMaterial.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MaterialDispenser.h"
#include "Robot.h"

EBTNodeResult::Type UGetMaterial::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* Robot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));
	if (!Robot) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: No Robot Found for GetMaterial BTTask"))
	}

	Robot->RequestMaterial();
	return EBTNodeResult::Succeeded;
}
