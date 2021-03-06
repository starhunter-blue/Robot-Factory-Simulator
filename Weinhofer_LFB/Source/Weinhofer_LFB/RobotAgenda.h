// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RobotAIController.h"
#include "Ware.h"
#include "RobotAgenda.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEINHOFER_LFB_API URobotAgenda : public UActorComponent
{
	GENERATED_BODY()

private:
	//Static Wants
	static const FString RequestsNothing;

	//Static Thoughts
	static const FString ThinksNothing;

	FString Request;
	FString Thought;

	ERobotState DesiredState;
	EWareType DesiredKindOfMachine;

public:	
	// Sets default values for this component's properties
	URobotAgenda();

	void InitWithThoughtAndRequest(FString RequestString, FString ThoughtString, ERobotState NewDesiredState, EWareType NewDesiredKindOfMachine);

	void InitWithRequest(FString RequestString, ERobotState NewDesiredState, EWareType NewDesiredKindOfMachine);

	void InitWithThought(FString ThoughtString);

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintPure)
	FString GetRequest() const;

	UFUNCTION(BlueprintPure)
	FString GetThought() const;

	UFUNCTION(BlueprintPure)
	ERobotState GetDesiredState() const;

	UFUNCTION(BlueprintPure)
	EWareType GetDesiredKindOfMachine() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

		
};
