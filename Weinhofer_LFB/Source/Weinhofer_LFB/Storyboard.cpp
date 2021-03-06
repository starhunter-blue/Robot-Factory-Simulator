// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Storyboard.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UStoryboard::UStoryboard()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UStoryboard::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

int32 UStoryboard::GetNextSequenceMarker() {
	int32 ReturnMarker = AgendaCreationSequenceMarker;
	AgendaCreationSequenceMarker++;
	if (AgendaCreationSequenceMarker >= AgendaCreationSequence.Num()) {
		AgendaCreationSequenceMarker = 0;
	}

	return ReturnMarker;
}

FString UStoryboard::GetRandomThought() {
	return Thoughts[FMath::RandRange(0, Thoughts.Num() - 1)];
}

FRequest UStoryboard::GetRandomRequest() {
	int32 RandomEnumNr = FMath::RandRange(0, 2);
	ERobotState DesiredState;
	switch (RandomEnumNr) {
	case 0:
		DesiredState = ERobotState::RSE_Producing;
		break;
	case 1: 
		DesiredState = ERobotState::RSE_Supplying;
		break;
	case 2:
		DesiredState = ERobotState::RSE_Collecting;
		break;
	default: 
		DesiredState = ERobotState::RSE_Idle;
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Storyboard -  Unknown number, can't identify desired state, set to idle"))
	}

	EWareType DesiredTypeMachine;
	int32 RandomTypeNr = FMath::RandRange(0, 2);
	switch (RandomTypeNr) {
	case 0:
		DesiredTypeMachine = EWareType::WTE_Pyramid;
		break;
	case 1:
		DesiredTypeMachine = EWareType::WTE_Cube;
		break;
	case 2:
		DesiredTypeMachine = EWareType::WTE_Dodecahedron;
		break;
	default:
		DesiredTypeMachine = EWareType::WTE_UNSET;
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Storyboard -  Unknown number, can't identify desired Ware, set to UNSET"))
	}

	FString RequestString = "";
	RequestString += "Will ";
	switch (DesiredState) {
		case ERobotState::RSE_Producing:
			switch (DesiredTypeMachine) {
				case EWareType::WTE_Pyramid: RequestString += "Pyramiden ";
					break;
				case EWareType::WTE_Cube: RequestString += "Wuerfel ";
					break;
				case EWareType::WTE_Dodecahedron: 
					RequestString += "Dodekaeder ";
					break;
				default:
					UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Storyboard - GetRandomRequest - WareType not found, writing UNKNOWN to Request String"))
					RequestString += "UNKNOWN ";
			}
			RequestString += "herstellen.";
			break;

		case ERobotState::RSE_Supplying:
			RequestString += "die ";
			switch (DesiredTypeMachine) {
			case EWareType::WTE_Pyramid: RequestString += "Pyramiden ";
				break;
			case EWareType::WTE_Cube: RequestString += "Wuerfel ";
				break;
			case EWareType::WTE_Dodecahedron:
				RequestString += "Dodekaeder ";
				break;
			default:
				UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Storyboard - GetRandomRequest - WareType not found, writing UNKNOWN to Request String"))
					RequestString += "UNKNOWN ";
			}
			RequestString += "Maschine beliefern.";
			break;

		case ERobotState::RSE_Collecting:
			RequestString += "fertige Ware einsameln.";
			break;

		default:
			UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Storyboard - GetRandomRequest - RobotState not found, writing UNKNOWN to Request String"))
				RequestString += "UNKNOWN";
	}

	FRequest ReturnRequest;
	ReturnRequest.DesiredState = DesiredState;
	ReturnRequest.DesiredKindOfMachine = DesiredTypeMachine;
	ReturnRequest.RequestString = RequestString;

	return ReturnRequest;
}

EAgendaHas UStoryboard::GetNextAgendaHas() {
	return AgendaCreationSequence[GetNextSequenceMarker()];
}


// Called every frame
void UStoryboard::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

URobotAgenda * UStoryboard::GetNextAgenda() {
	EAgendaHas AgendaType = GetNextAgendaHas();

	URobotAgenda* NextAgenda = NewObject<URobotAgenda>();
	FRequest NewRequest = GetRandomRequest();
	FString NewThought = GetRandomThought();

	switch (AgendaType) {
	case EAgendaHas::AHE_Thought:
		NextAgenda->InitWithThought(NewThought);
		break;
	case EAgendaHas::AHE_Request:
		
		NextAgenda->InitWithRequest(NewRequest.RequestString, NewRequest.DesiredState, NewRequest.DesiredKindOfMachine);
		break;
	case EAgendaHas::AHE_Both:
		NextAgenda->InitWithThoughtAndRequest(NewRequest.RequestString, NewThought, NewRequest.DesiredState, NewRequest.DesiredKindOfMachine);
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Storyboard - GetNextAgenda - Unknown EAgendaHas - returning default Agenda"))
	}

	return NextAgenda;
}

