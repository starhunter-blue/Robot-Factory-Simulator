// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lift.generated.h"

UCLASS()
class WEINHOFER_LFB_API ALift : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* LiftMesh;
	
	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* LiftWaypoint;

	UPROPERTY(VisibleAnywhere)
	class ARobot* Robot = nullptr;

private:
	bool FoldState = true;

public:	
	// Sets default values for this actor's properties
	ALift();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	class ATargetPoint* GetLiftWaypoint() const;

	UFUNCTION(BlueprintCallable)
	void RegisterWithLift(class ARobot* NewRobot);

	UFUNCTION(BlueprintCallable)
	void DeregisterWithLift();

	UFUNCTION(BlueprintCallable)
	void Activate();

	UFUNCTION(BlueprintCallable)
	void Deactivate();

	UFUNCTION(BlueprintPure)
	bool IsFolded();

	UFUNCTION(BlueprintCallable)
	void SetIsFolded();

	UFUNCTION(BlueprintCallable)
	void SetIsUnfolded();

	UFUNCTION(BlueprintCallable)
	void DismissOccupant();

	UFUNCTION(BlueprintPure)
	bool HasOccupant() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Unfold();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Fold();


};
