// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GetMaterial.generated.h"

/**
 * 
 */
UCLASS()
class WEINHOFER_LFB_API UGetMaterial : public UBTTaskNode
{
	GENERATED_BODY()
	

protected:
	UPROPERTY(EditAnywhere, Category = "Blackboard")
		struct FBlackboardKeySelector RobotKey;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
		struct FBlackboardKeySelector MaterialDispenserKey;

public:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
