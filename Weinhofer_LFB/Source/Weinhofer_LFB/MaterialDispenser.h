// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "MaterialDispenser.generated.h"

UCLASS()
class WEINHOFER_LFB_API AMaterialDispenser : public AActor
{
	GENERATED_BODY()

protected:
	//Setup
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DispenserBodyMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* PlatformMesh;

private:
	//Setup
	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* MaterialPickupWaypoint;

	//Config
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AMachineMaterial> MaterialClass;

	
public:	
	// Sets default values for this actor's properties
	AMaterialDispenser();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	ATargetPoint* GetWaypoint();

	//Robot Communication
	UFUNCTION(BlueprintCallable)
		void DispenseMaterial(class ARobot* TargetRobot);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
