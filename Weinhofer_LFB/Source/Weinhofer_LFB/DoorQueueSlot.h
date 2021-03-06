// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "DoorQueueSlot.generated.h"

UCLASS()
class WEINHOFER_LFB_API ADoorQueueSlot : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* TargetPoint;

	UPROPERTY(EditInstanceOnly)
	class ARobot* Occupant = nullptr;

	UPROPERTY(EditAnywhere)
	int32 SlotNr = 0;
	
public:	
	// Sets default values for this actor's properties
	ADoorQueueSlot();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	ATargetPoint* GetTargetPoint() const;

	UFUNCTION(BlueprintPure)
	bool IsOpen() const;

	UFUNCTION(BlueprintCallable)
	void RegisterOccupant(class ARobot* NewOccupant);

	UFUNCTION(BlueprintCallable)
	bool IsCloserToDoorThan(ADoorQueueSlot* OtherSlot);

	UFUNCTION(BlueprintPure)
	int32 GetSlotNr() const;

	UFUNCTION(BlueprintCallable)
	void SendOccupantIntoOffice();

	UFUNCTION(BlueprintCallable)
	void OccupantIsLeaving();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
