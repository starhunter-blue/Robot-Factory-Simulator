// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobotOverlord.generated.h"

/*
* Determines autonomous behavior set by the Overlord
*/
UENUM(BlueprintType)
enum class EBehaviorType : uint8 {
	BTE_Unset UMETA(DisplayName = "Unset"),
	BTE_Emotion UMETA(DisplayName = "Emotion"),
	BTE_Blocking UMETA(DisplayName = "Blocking")
};

USTRUCT()
struct FRobotAndAgenda {
	GENERATED_USTRUCT_BODY()

	class ARobot* Robot;
	class URobotAgenda* Agenda;

};

UCLASS()
class WEINHOFER_LFB_API ARobotOverlord : public AActor
{
	GENERATED_BODY()

private:
	EBehaviorType BehaviorType = EBehaviorType::BTE_Unset;

	UPROPERTY(VisibleDefaultsOnly)
		TArray<class ARobot*> Robots;

	int32 NextRobotToCallNr = 0;
	
protected:
	UPROPERTY(EditAnywhere)
		float TimeIntervall = 30.0f;

	UPROPERTY(EditAnywhere)
		float IntervallVariation = 5.0f;

	UPROPERTY(VisibleAnywhere)
		class UStoryboard* Storyboard;

public:
	// Sets default values for this component's properties
	ARobotOverlord();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void Start();

	UFUNCTION(BlueprintPure)
		float GetTimeIntervall() const;

	UFUNCTION(BlueprintPure)
		float GetIntervallVariation() const;

	UFUNCTION(BlueprintCallable, meta = (ShortToolTip = "Will only work of BehaviorType is unset"))
		void SetBehaviorTypeToEmotion();

	UFUNCTION(BlueprintCallable, meta = (ShortToolTip = "Will only work of BehaviorType is unset"))
		void SetBehaviorTypeToBlocking();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void GiveNextOrder();

	UFUNCTION(BlueprintCallable)
	void CheckIfRobotRequestsAreFulfilled();

private:
	void GenerateStoryboard();

	int32 GetNextRobotNrAndIncrement();

	ARobot* GetNextRobot();

};
