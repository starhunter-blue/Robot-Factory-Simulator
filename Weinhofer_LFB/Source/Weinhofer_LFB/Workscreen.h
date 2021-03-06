// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ware.h"
#include "Workscreen.generated.h"

UCLASS()
class WEINHOFER_LFB_API AWorkscreen : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<class ARobot*> Robots;

	UPROPERTY(VisibleDefaultsOnly, Category = "Waypoints")
		TArray<class AMachine*> Machines;

	class ALift* Lift;

	class ARobotDoor* RobotDoor;
	
public:	
	// Sets default values for this actor's properties
	AWorkscreen();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InformOfRoboterLeavingOffice();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void GiveRobotAgenda(int32 RobotNr, class URobotAgenda* RobotAgenda);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void SendProductionOrder(int32 TargetRobotNr, EWareType WareType);

	UFUNCTION(BlueprintCallable)
		void SendSupplyOrder(int32 TargetRobotNr, class AMachine* TargetMachine);

	UFUNCTION(BlueprintCallable)
		void SendCollectOrder(int32 TargetRobotNr);

	UFUNCTION(BlueprintCallable)
		void SendCallToOfficeOrder(int32 TargetRobotNr);

	UFUNCTION(BlueprintCallable)
		void LetRobotIntoOffice();

	UFUNCTION(BlueprintCallable)
		void DismissRobotFromOffice();

	UFUNCTION(BlueprintPure)
		bool QueueHasRobot() const;

private:
	ARobot* GetRobotWithNr(int32 Nr) const;

	AMachine* GetFirstMachineProducingWareType(EWareType WareType) const;
};
