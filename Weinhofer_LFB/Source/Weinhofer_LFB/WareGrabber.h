// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WareGrabber.generated.h"

UCLASS()
class WEINHOFER_LFB_API AWareGrabber : public AActor
{
	GENERATED_BODY()

protected:
	//Setup
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* WareGrabberUpperMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* WareGrabberLowerMesh;

private:
	UPROPERTY(VisibleAnywhere)
		UChildActorComponent* WareGrabberWaypoint;
	
public:	
	// Sets default values for this actor's properties
	AWareGrabber();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Accessors
	UFUNCTION(BlueprintPure)
		ATargetPoint* GetWaypoint();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction")
		void MoveLowerPartUpAndDown(AActor* WareToDropOff);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
