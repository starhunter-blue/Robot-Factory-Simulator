// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerBase.generated.h"

UCLASS()
class WEINHOFER_LFB_API AControllerBase : public AActor
{
	GENERATED_BODY()
	
//VARIABLES
private:
	//Components
	UPROPERTY(VisibleAnywhere)
	class UMotionControllerComponent* MotionController;

	UPROPERTY(VisibleAnywhere)
	class UWidgetInteractionComponent* Pointer;

// FUNCTIONS
public:	
	AControllerBase();
	virtual void Tick(float DeltaTime) override;

	//Setup
	void SetControllerHand(EControllerHand ControllerHand);
	void SetIndex(float Index);

	//Input
	virtual void TriggerPressed();
	virtual void TriggerReleased();

	virtual void GripPressed();
	virtual void GripReleased();

	virtual void FaceButton1Pressed();
	virtual void FaceButton1Released();

protected:
	virtual void BeginPlay() override;

};
