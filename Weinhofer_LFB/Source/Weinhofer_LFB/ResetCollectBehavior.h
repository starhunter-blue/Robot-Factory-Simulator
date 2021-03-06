// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ResetCollectBehavior.generated.h"

/**
 * 
 */
UCLASS()
class WEINHOFER_LFB_API UResetCollectBehavior : public UBTTaskNode
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, Category = "Blackboard")
		struct FBlackboardKeySelector TargetMachine;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
		struct FBlackboardKeySelector TargetWaypoint;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
		struct FBlackboardKeySelector CarriedWareKey;

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
