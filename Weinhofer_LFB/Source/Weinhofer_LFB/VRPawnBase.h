// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VRPawnBase.generated.h"

UCLASS()
class WEINHOFER_LFB_API AVRPawnBase : public APawn
{
	GENERATED_BODY()

public:
	//Config
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AControllerBase> RightHandControllerClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AControllerBase> LeftHandControllerClass;

	//Components
	UPROPERTY(VisibleAnywhere)
		USceneComponent* VRRoot;

	UPROPERTY(VisibleAnywhere)
		class UCameraComponent* Camera;

	//References
	UPROPERTY()
		class AControllerBase* RightHandController;

	UPROPERTY()
		class AControllerBase* LeftHandController;

protected:

private:


	//FUNCTIONS
public:
	// Sets default values for this pawn's properties
	AVRPawnBase();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//Player Input
	virtual void RightTriggerPressed();
	virtual void RightTriggerReleased();

	virtual void RightGripPressed();
	virtual void RightGripReleased();

	virtual void RightFaceButton1Pressed();
	virtual void RightFaceButton1Released();

	virtual void LeftTriggerPressed();
	virtual void LeftTriggerReleased();

	virtual void LeftGripPressed();
	virtual void LeftGripReleased();

	virtual void LeftFaceButton1Pressed();
	virtual void LeftFaceButton1Released();

};
