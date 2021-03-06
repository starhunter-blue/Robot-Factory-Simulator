// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "GiveWorkscreenRobotAgenda.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Robot.h"
#include "Workscreen.h"

#include "RobotAgenda.h"


EBTNodeResult::Type UGiveWorkscreenRobotAgenda::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) {
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	ARobot* TargetRobot = Cast<ARobot>(BlackboardComponent->GetValueAsObject(RobotKey.SelectedKeyName));

	if (!TargetRobot) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: GiveWorkscreenRobotAgenda - No Robot found"))
		return EBTNodeResult::Failed;
	}

	TArray<AActor*> UncastWorkscreens;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWorkscreen::StaticClass(), UncastWorkscreens);
	AWorkscreen* Workscreen = Cast<AWorkscreen>(UncastWorkscreens[0]);
	if (!Workscreen) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: GiveWorkscreenRobotAgenda - No Workscreen found"))
		return EBTNodeResult::Failed;
	}

	URobotAgenda* Agenda = TargetRobot->GetAgenda();
	if (!Agenda) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: GiveWorkscreenRobotAgenda - No Agenda found"))
		return EBTNodeResult::Failed;
	}

	Workscreen->GiveRobotAgenda(TargetRobot->GetRobotNr(), Agenda);
	
	return EBTNodeResult::Succeeded;
}
