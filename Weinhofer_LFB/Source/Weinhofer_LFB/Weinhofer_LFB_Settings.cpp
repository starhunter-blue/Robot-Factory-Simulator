// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Weinhofer_LFB_Settings.h"
#include "Engine/Engine.h"

UWeinhofer_LFB_Settings::UWeinhofer_LFB_Settings(const FObjectInitializer & ObjectInitializer)
: UGameUserSettings(ObjectInitializer) {
	SetToDefaults();
}

UWeinhofer_LFB_Settings * UWeinhofer_LFB_Settings::GetWeinhofer_LFB_Settings() {
	if (!Cast<UWeinhofer_LFB_Settings>(GEngine->GameUserSettings)) UE_LOG(LogTemp, Warning, TEXT("REDSTAR:HALUUUUU"))
	return Cast<UWeinhofer_LFB_Settings>(GEngine->GameUserSettings);
}

void UWeinhofer_LFB_Settings::SetToDefaults() {
	UGameUserSettings::SetToDefaults();

	TimeLimit = 10;
	NrOfRequiredTriangles = 5;
	NrOfRequiredSquares = 5;
	NrOfRequiredHexagons = 5;
	InfluenceStrategy = EInfluenceStrategy::Emotion;
}

int32 UWeinhofer_LFB_Settings::GetTimeLimit() const {
	return TimeLimit;
}

int32 UWeinhofer_LFB_Settings::GetNrOfRequiredTriangles() const {
	return NrOfRequiredTriangles;
}

int32 UWeinhofer_LFB_Settings::GetNrOfRequiredSquares() const {
	return NrOfRequiredSquares;
}

int32 UWeinhofer_LFB_Settings::GetNrOfRequiredHexagons() const {
	return NrOfRequiredHexagons;
}

EInfluenceStrategy UWeinhofer_LFB_Settings::GetInfluenceStrategy() const {
	return InfluenceStrategy;
}

void UWeinhofer_LFB_Settings::SetTimeLimit(int32 NewTimeLimit) {
	TimeLimit = NewTimeLimit;
}

void UWeinhofer_LFB_Settings::SetNrOfRequiredTriangles(int32 NewNr) {
	NrOfRequiredTriangles = NewNr;
}

void UWeinhofer_LFB_Settings::SetNrOfRequiredSquares(int32 NewNr) {
	NrOfRequiredSquares = NewNr;
}

void UWeinhofer_LFB_Settings::SetNrOfRequiredHexagons(int32 NewNr) {
	NrOfRequiredHexagons = NewNr;
}

void UWeinhofer_LFB_Settings::SetInfluenceStrategy(EInfluenceStrategy NewStrategy) {
	InfluenceStrategy = NewStrategy;
}

