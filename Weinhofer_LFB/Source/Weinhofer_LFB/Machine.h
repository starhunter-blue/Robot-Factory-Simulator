// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ware.h"
#include "Engine/TargetPoint.h"
#include "Machine.generated.h"

UCLASS()
class WEINHOFER_LFB_API AMachine : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* MachineBodyMesh;

private:
	UPROPERTY(EditInstanceOnly)
		int32 MachineNr = 0;

	UPROPERTY(EditInstanceOnly)
		EWareType ProducedWareType = EWareType::WTE_UNSET;

	UPROPERTY(VisibleAnywhere)
		UChildActorComponent* WorkstationWaypoint;

	UPROPERTY(VisibleAnywhere)
		UChildActorComponent* MaterialDeliveryWaypoint;

	UPROPERTY(VisibleAnywhere)
		UChildActorComponent* WareCollectionWaypoint;

	//RobotTasks
	//Production
	UPROPERTY(VisibleAnywhere)
		class ARobot* ProductionWorkerRobot;

	UPROPERTY(EditInstanceOnly)
		float ProductionProgress;

	UPROPERTY(EditInstanceOnly)
		bool WareToCollect = false;

	UPROPERTY(EditInstanceOnly)
		int NrOfStoredMaterial = 0;

	UPROPERTY(VisibleAnywhere)
		class AWare* CurrentWare = nullptr;

	//Material Supply
	UPROPERTY(VisibleAnywhere)
		class ARobot* SupplyWorkerRobot;

	//Ware Collection
	UPROPERTY(VisibleAnywhere)
		class ARobot* WareCollector = nullptr;

	//Config
	UPROPERTY(EditInstanceOnly)
		TSubclassOf<class AWare> WareClass;

	
public:	
	// Sets default values for this actor's properties
	AMachine();

	// Called every frame
	//TODO delete?
	virtual void Tick(float DeltaTime) override;

	//Accessor Functions
	UFUNCTION(BlueprintPure)
	int32 GetMachineNr() const;

	UFUNCTION(BlueprintPure)
	EWareType GetProducedWareType() const;

	UFUNCTION(BlueprintPure)
	bool ProducesWare(EWareType WareType) const;

	UFUNCTION(BlueprintPure)
	ATargetPoint* GetWorkstationWaypoint();

	UFUNCTION(BlueprintPure)
	ATargetPoint* GetMaterialDeliveryWaypoint();

	UFUNCTION(BlueprintPure)
	ATargetPoint* GetWareCollectionWaypoint() const;

	UFUNCTION(BlueprintPure)
	float GetProductionProgress() const;

	UFUNCTION(BlueprintPure)
	TSubclassOf<class AWare> GetWareClass() const;

	UFUNCTION(BlueprintPure)
	bool IsWareToCollect() const;

	UFUNCTION(BlueprintPure)
	bool HasMaterial() const;

	UFUNCTION(BlueprintPure)
	int GetNrOfMaterial() const;

	UFUNCTION(BlueprintCallable)
	void UseOneMaterial();

	UFUNCTION(BlueprintCallable)
	void SetWareToCollect(bool WareState);

	//Robot Interaction/Work Functions
	UFUNCTION(BlueprintCallable)
	void RegisterNewProductionWorkerRobot(class ARobot* NewProductionWorkerRobot);

	void ProduceWare();

	UFUNCTION(BlueprintCallable)
	void RegisterNewSupplyWorkerRobot(class ARobot* NewSupplyWorkerRobot);

	UFUNCTION(BlueprintCallable)
	void GetSupplied();

	//Collection
	UFUNCTION(BlueprintCallable)
	bool HasWareOpenForCollection();

	UFUNCTION(BlueprintCallable)
	void RegisterCollectionWorkerRobot(class ARobot* NewCollectionWorkerRobot);

	UFUNCTION(BlueprintCallable)
	class AWare* CollectWare(class ARobot* Collector);

	UFUNCTION(BlueprintCallable)
	void CancelCollection(class ARobot* ExCollector);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Progress Visualization
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Machine")
		void SetProgressBar();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Machine")
		void NoMaterialAvailable();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Machine")
		void SpawnWare();

	//Accessors
	UFUNCTION(BlueprintCallable)
		void SetCurrentWare(class AWare* NewWare);

	UFUNCTION(BlueprintPure)
		class AWare* GetCurrentWare() const;

private:
	//Adds 0.01f to ProductionProgress, rolls over to 0 when >= 1
	void Make5PercentProgress();

};
