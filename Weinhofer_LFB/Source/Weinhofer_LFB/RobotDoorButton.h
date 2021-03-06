// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Robot.h"
#include "DoorQueue.h"
#include "RobotDoorButton.generated.h"

UCLASS()
class WEINHOFER_LFB_API ARobotDoorButton : public AActor
{
	GENERATED_BODY()

protected:


public:	
	// Sets default values for this actor's properties
	ARobotDoorButton();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
