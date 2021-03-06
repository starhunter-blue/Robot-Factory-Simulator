// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Machine.h"
#include "RobotAIController.h"
#include "Robot.generated.h"

UCLASS()
class WEINHOFER_LFB_API ARobot : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditInstanceOnly)
	int32 RobotNr  = 0;

	UPROPERTY(VisibleAnywhere)
	class AMachineMaterial* CarriedMaterial;

	UPROPERTY(VisibleAnywhere)
	class AWare* CarriedWare;

	UPROPERTY(VisibleAnywhere)
	class ADoorQueueSlot* DoorQueueSlot  = nullptr;

	UPROPERTY(VisibleAnywhere)
	class ALift* Lift;

	UPROPERTY(VisibleAnywhere)
	bool OnLift = false;

	UPROPERTY(VisibleAnywhere)
	class URobotAgenda* Agenda;

	bool HasEnteredOffice = false;

public:
	// Sets default values for this character's properties
	ARobot();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintPure)
	bool IsRequestFulfilled() const;

	//Accessors
	UFUNCTION(BlueprintPure)
	int32 GetRobotNr() const;

	UFUNCTION(BlueprintPure)
	bool HasNumber(int32 Number);

	UFUNCTION(BlueprintPure)
	AActor* GetCarriedMaterial() const;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void DestroyCarriedStuff();

	UFUNCTION(BlueprintPure)
	class AActor* GetWorkTargetMachine() const;

	UFUNCTION(BlueprintPure)
	AActor* GetCarriedWare() const;

	UFUNCTION(BlueprintPure)
	class ADoorQueue* GetDoorQueue() const;

	UFUNCTION(BlueprintPure)
	class ADoorQueueSlot* GetQueueSlot() const;

	UFUNCTION(BlueprintPure)
	class ALift* GetLift() const;

	UFUNCTION(BlueprintPure)
	bool IsOnLift() const;

	UFUNCTION(BlueprintCallable)
	void SetNotOnLift();

	UFUNCTION(BlueprintCallable)
	void SetOnLift();

	UFUNCTION(BlueprintPure)
	class URobotAgenda* GetAgenda() const;

	UFUNCTION(BlueprintPure)
	ERobotState GetBehaviorState();

	UFUNCTION(BlueprintCallable)
	void GiveOverlordOrder(URobotAgenda* NewAgenda);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ActivateDisobedience();

	UFUNCTION(BlueprintPure)
	bool WasAlreadyInOffice() const;

	UFUNCTION(BlueprintCallable)
	void SetHasNotBeenInOffice();

	UFUNCTION(BlueprintCallable)
	void SetHasBeenInOffice();

	//Command Behavior
	UFUNCTION(BlueprintCallable, Category = "Commands")
		void SetIdling();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveProductionWorkCommand(AMachine* TargetMachine);

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void TerminateProductionWorkCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveSupplyWorkCommand(AMachine* TargetMachine);

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void TerminateSupplyWorkCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveCollectWorkCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
		void GiveCallToOfficeCommand();

	UFUNCTION(BlueprintCallable, Category = "Commands")
	void CheckInAtSlot(class ADoorQueueSlot* Slot);

	UFUNCTION(BlueprintCallable, Category = "Commands")
	void SendIntoOffice();

	//World Interaction Functions
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void RequestMaterial();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void CollectMaterial(class AMachineMaterial* MaterialToCollect);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SupplyMachine(AMachine* TargetMachine);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void FindMachineToCollectFrom();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	bool CollectWare(AMachine* TargetMachine);

	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void DropOffWare(class AWareGrabber* WareGrabber);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void DeliverWare(class AWareGrabber* AtWareGrabber);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void NotifyDoorSlotOfLeaving();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void RegisterWithLift();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void EnterLift();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void LeaveLift();

	//Expressions and Animations
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Expressions and Animations")
	void PlayHappyGreeting();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Expressions and Animations")
	void PlaySettingAppropriateExpression();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void DropMaterialDown();

	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction")
	void ThrowWareOnHead();

private:
	void TerminateWorkCommand();

};
