// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "CollectWare.h"
#include "Robot.h"
#include "Machine.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UCollectWare::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* Robot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!Robot) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: CollectWare - No Robot found"))
			EBTNodeResult::Failed;
	}

	AMachine* TargetMachine = Cast<AMachine>(BlackboardComponent->GetValueAsObject(TargetMachineKey.SelectedKeyName));

	if (!TargetMachine) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: CollectWare - No Machine found"))
			EBTNodeResult::Failed;
	}

	if (Robot->CollectWare(TargetMachine)) {
		BlackboardComponent->SetValueAsObject(CarriedWareKey.SelectedKeyName, Robot->GetCarriedWare());
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
