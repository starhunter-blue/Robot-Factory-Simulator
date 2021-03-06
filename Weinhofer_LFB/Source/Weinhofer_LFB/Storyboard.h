// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RobotAgenda.h"
#include "RobotAIController.h"
#include "Ware.h"
#include "Storyboard.generated.h"

/*
* Used to determine if a RobotAgenda should have a Thought, a Request or Both
*/
UENUM(BlueprintType)
enum class EAgendaHas : uint8 {
	AHE_Thought UMETA(DisplayName = "Thought"),
	AHE_Request UMETA(DisplayName = "Request"),
	AHE_Both UMETA(DisplayName = "Both")
};

USTRUCT()
struct FRequest {
	GENERATED_USTRUCT_BODY()

	FString RequestString;
	ERobotState DesiredState;
	EWareType DesiredKindOfMachine;

};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEINHOFER_LFB_API UStoryboard : public UActorComponent
{
	GENERATED_BODY()

protected:
	//Should be filled by deriving classes with the sequence in which Agendas should be equipped with Toughts, Requests or Both
	TArray<EAgendaHas> AgendaCreationSequence;

	//Should be Filled with Appropriate Thoughts and Requests
	TArray<FString> Thoughts;
	TArray<FString> Requests;

private:
	//Marks where in the AgendaCreationSequence the Storyboard is, should only be accessed with GetNextSequenceMarker where it is also incremented
	int32 AgendaCreationSequenceMarker = 0;


public:	
	// Sets default values for this component's properties
	UStoryboard();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	URobotAgenda* GetNextAgenda();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;	

	//UFUNCTION(BlueprintCallable, meta = (ShortToolTip = "This also increments the marker"))
	int32 GetNextSequenceMarker();

private:
	FString GetRandomThought();
	
	FRequest GetRandomRequest();

	EAgendaHas GetNextAgendaHas();
};
