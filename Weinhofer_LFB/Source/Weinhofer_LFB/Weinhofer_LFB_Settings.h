// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "Weinhofer_LFB_Settings.generated.h"

UENUM(BlueprintType)
enum class EInfluenceStrategy : uint8 {
	Emotion,
	Obstruction
};

/**
 * 
 */
UCLASS()
class WEINHOFER_LFB_API UWeinhofer_LFB_Settings : public UGameUserSettings
{
	GENERATED_BODY()
	
protected:

	//Custom Values for the games settings

	//Time one round will take
	UPROPERTY(config)
	int32 TimeLimit;

	//Triangles, Squares, Hexagons player is required to produce for "successful" round
	UPROPERTY(config)
	int32 NrOfRequiredTriangles;

	UPROPERTY(config)
	int32 NrOfRequiredSquares;

	UPROPERTY(config)
	int32 NrOfRequiredHexagons;

	//Influence Strategy currently used by the robots
	UPROPERTY(config)
	EInfluenceStrategy InfluenceStrategy;

public:
	UWeinhofer_LFB_Settings(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = Settings)
	static UWeinhofer_LFB_Settings* GetWeinhofer_LFB_Settings();

	virtual void SetToDefaults() override;

	UFUNCTION(BlueprintPure, Category = Settings)
	int32 GetTimeLimit() const;

	UFUNCTION(BlueprintPure, Category = Settings)
	int32 GetNrOfRequiredTriangles() const;

	UFUNCTION(BlueprintPure, Category = Settings)
	int32 GetNrOfRequiredSquares() const;

	UFUNCTION(BlueprintPure, Category = Settings)
	int32 GetNrOfRequiredHexagons() const;

	UFUNCTION(BlueprintPure, Category = Settings)
	EInfluenceStrategy GetInfluenceStrategy() const;

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetTimeLimit(int32 NewTimeLimit);

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetNrOfRequiredTriangles(int32 NewNr);

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetNrOfRequiredSquares(int32 NewNr);

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetNrOfRequiredHexagons(int32 NewNr);

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetInfluenceStrategy(EInfluenceStrategy NewStrategy);
};
