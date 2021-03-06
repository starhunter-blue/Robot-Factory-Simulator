// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "RobotAgenda.h"

//Statics
const FString URobotAgenda::RequestsNothing = "Will gerade nichts.";

const FString URobotAgenda::ThinksNothing = "Denkt gerade an nichts.";

// Sets default values for this component's properties
URobotAgenda::URobotAgenda()
{
	PrimaryComponentTick.bCanEverTick = false;

	Request = RequestsNothing;
	Thought = ThinksNothing;
}

void URobotAgenda::InitWithThoughtAndRequest(FString RequestString, FString ThoughtString, ERobotState NewDesiredState, EWareType NewDesiredKindOfMachine) {
	Request = RequestString;
	Thought = ThoughtString;
	DesiredState = NewDesiredState;
	DesiredKindOfMachine = NewDesiredKindOfMachine;
}

void URobotAgenda::InitWithRequest(FString RequestString, ERobotState NewDesiredState, EWareType NewDesiredKindOfMachine) {
	Request = RequestString;
	Thought = ThinksNothing;
	DesiredState = NewDesiredState;
	DesiredKindOfMachine = NewDesiredKindOfMachine;
}

void URobotAgenda::InitWithThought(FString ThoughtString) {
	Request = RequestsNothing;
	Thought = ThoughtString;
	DesiredState = ERobotState::RSE_UNSET;
	DesiredKindOfMachine = EWareType::WTE_UNSET;
}


// Called when the game starts
void URobotAgenda::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void URobotAgenda::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

FString URobotAgenda::GetRequest() const {
	return Request;
}

FString URobotAgenda::GetThought() const {
	return Thought;
}

ERobotState URobotAgenda::GetDesiredState() const {
	return DesiredState;
}

EWareType URobotAgenda::GetDesiredKindOfMachine() const {
	return DesiredKindOfMachine;
}

