// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RobotAIController.generated.h"

/*
* State a robot can be in, ie. if he's idling, working, ect.
*/
UENUM(BlueprintType)
enum class ERobotState : uint8 {
	RSE_UNSET UMETA(DisplayName = "Unset"),
	RSE_Autonomous UMETA(DisplayName = "Autonomous"),
	RSE_Idle UMETA(DisplayName = "Idle"),
	RSE_Producing UMETA(DisplayName = "Producing"),
	RSE_Supplying UMETA(DisplayName = "Supplying"),
	RSE_Collecting UMETA(DisplayName = "Collecting"),
	RSE_CalledToOffice UMETA(DisplayName = "Called to Office")
};

/**
 * C++ Side brain of the Robot, works in conjunction with the Behavior Tree and Blackboard in Blueprint to determine behavior
 */
UCLASS()
class WEINHOFER_LFB_API ARobotAIController : public AAIController
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
		class UWaypointCollection* Waypoints;

	UPROPERTY(VisibleAnywhere)
		ERobotState RobotState;

	UPROPERTY(VisibleAnywhere)
		class AMachine* WorkTargetMachine;

	UPROPERTY(VisibleAnywhere)
		class AMaterialDispenser* MaterialDispenser;

	UPROPERTY(VisibleAnywhere)
		class AWareGrabber* WareGrabber;

	UPROPERTY(VisibleAnywhere)
		TArray<AMachine*> Machines;

	UPROPERTY(EditInstanceOnly)
		int32 NextMachineToCheckForWare = 0;

	UPROPERTY(VisibleAnywhere)
		class ADoorQueue* DoorQueue;

public:
	ARobotAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;

	UFUNCTION()
		class UWaypointCollection* GetWaypointCollection() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Character")
		void OnStateUpdated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Character")
		void PermitToEnterOffice();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Character")
		void LeaveOffice();

	//Accessor Functions

	UFUNCTION(BlueprintPure)
		ERobotState GetCurrentState();

	UFUNCTION(BlueprintPure)
		AActor* GetWorkProductionTargetWaypoint();

	UFUNCTION(BlueprintPure)
		AActor* GetWorkTargetMachine() const;

	UFUNCTION(BlueprintPure)
		AActor* GetMaterialDispenser() const;

	UFUNCTION(BlueprintPure)
		AActor* GetWareGrabber() const;

	UFUNCTION(BlueprintCallable)
		void ClearMachineToCollectFrom();

	UFUNCTION(BlueprintPure)
		ADoorQueue* GetDoorQueue() const;

	//Command Functions
	UFUNCTION(BlueprintCallable)
		void SetIdling();

	UFUNCTION(BlueprintCallable)
		void SetStateAutonomous();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveProductionWorkCommand(class AMachine* TargetMachine);

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void TerminateProductionWorkCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveSupplyWorkCommand(class AMachine* TargetMachine);

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void TerminateSupplyWorkCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveCollectWorkCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void TerminateCollectCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveCallToOfficeCommand();

	//World Interaction Functions
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void RequestMaterial();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void FindMachineToCollectFrom();

private:
	void SetStateTo(ERobotState State);

	void TerminateWorkCommand();
	
	void IncrementNextMachineToCheck();
};
