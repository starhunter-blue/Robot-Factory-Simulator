// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GetFirstOpenSpotInQueue.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Robot.h"
#include "DoorQueueSlot.h"
#include "DoorQueue.h"

EBTNodeResult::Type UGetFirstOpenSpotInQueue::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* TargetRobot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!TargetRobot) return EBTNodeResult::Failed;

	ADoorQueue* DoorQueue = TargetRobot->GetDoorQueue();
	ADoorQueueSlot* OpenSlot = DoorQueue->GetFirstOpenSlot();

	ADoorQueueSlot* SlotAlreadySet = Cast<ADoorQueueSlot>(BlackboardComponent->GetValueAsObject(DoorQueueSlotKey.SelectedKeyName));
	if (SlotAlreadySet && SlotAlreadySet->IsCloserToDoorThan(OpenSlot)) {
		return EBTNodeResult::Succeeded;
	}

	TargetRobot->CheckInAtSlot(OpenSlot);
	BlackboardComponent->SetValueAsObject(DoorQueueSlotKey.SelectedKeyName, OpenSlot);
	
	return EBTNodeResult::Succeeded;
}
