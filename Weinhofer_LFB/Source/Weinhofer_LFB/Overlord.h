// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Overlord.generated.h"


UCLASS( ClassGroup=(Custom), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent) )
class WEINHOFER_LFB_API UOverlord : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float TimeIntervall = 30.0f;

	UPROPERTY(EditAnywhere)
	float IntervallVariation = 5.0f;

public:	
	// Sets default values for this component's properties
	UOverlord();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Start();
	
	UFUNCTION(BlueprintPure)
	float GetTimeIntervall() const;

	UFUNCTION(BlueprintPure)
	float GetIntervallVariation() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		


};
