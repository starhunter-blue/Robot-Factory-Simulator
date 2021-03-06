// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Overlord.h"

// Sets default values for this component's properties
UOverlord::UOverlord()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOverlord::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UOverlord::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UOverlord::GetTimeIntervall() const {
	return TimeIntervall;
}

float UOverlord::GetIntervallVariation() const {
	return IntervallVariation;
}

