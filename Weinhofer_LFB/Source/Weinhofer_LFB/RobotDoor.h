// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobotDoor.generated.h"

UCLASS()
class WEINHOFER_LFB_API ARobotDoor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* DoorFrame;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Door;

private:
	class ADoorQueue* DoorQueue;

	bool Locked = true;
	
public:	
	// Sets default values for this actor's properties
	ARobotDoor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void LetRobotIn();

	UFUNCTION(BlueprintPure)
	bool QueueHasRobot() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction")
	void OpenDoor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Interaction")
	void CloseDoor();

	//Getters + Setters
	UFUNCTION(BlueprintPure)
	bool CanOpen() const;

	UFUNCTION(BlueprintCallable)
	void LockDoor();

	UFUNCTION(BlueprintCallable)
	void UnlockDoor();
};
