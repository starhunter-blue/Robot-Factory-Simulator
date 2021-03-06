// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "DropOffWare.h"
#include "Robot.h"
#include "WareGrabber.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UDropOffWare::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* Robot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!Robot) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: DropOffWare - No Robot Set"))
			return EBTNodeResult::Failed;
	}

	AWareGrabber* WareGrabber = Cast<AWareGrabber>(BlackboardComponent->GetValueAsObject(WareGrabberKey.SelectedKeyName));

	if (!WareGrabber) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: DropOffWare - No WareGrabber Set"))
			return EBTNodeResult::Failed;
	}

	Robot->DropOffWare(WareGrabber);

	BlackboardComponent->ClearValue(CarriedWareKey.SelectedKeyName);

	return EBTNodeResult::Succeeded;
}
