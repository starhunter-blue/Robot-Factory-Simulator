// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorQueueSlot.h"
#include "DoorQueue.generated.h"

UCLASS()
class WEINHOFER_LFB_API ADoorQueue : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* FirstInLine;

	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* SecondInLine;

	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* ThirdInLine;

	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* FourthInLine;

	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* FifthInLine;

	
public:	
	// Sets default values for this actor's properties
	ADoorQueue();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void CheckInAtSlot(ADoorQueueSlot* Slot, class ARobot* Robot);

	UFUNCTION(BlueprintCallable)
	ADoorQueueSlot* GetFirstOpenSlot();

	UFUNCTION(BlueprintCallable)
	void LetFirstRobotInQueueIn();

	UFUNCTION(BlueprintPure)
	bool HasRobot() const;

	UFUNCTION(BlueprintPure)
	int32 GetNrOfWaitingRobots();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool HasSlot(ADoorQueueSlot* Slot);


};
