// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ware.generated.h"

/*
* The types of wares expressed as enums for easier handling in blueprint
*/
UENUM(BlueprintType)
enum class EWareType : uint8 {
	WTE_UNSET UMETA(DisplayName = "UNSET"),
	WTE_Pyramid UMETA(DisplayName = "Pyramid"),
	WTE_Cube UMETA(DisplayName = "Cube"),
	WTE_Dodecahedron UMETA(DisplayName = "Dodecahedron")
};

UCLASS()
class WEINHOFER_LFB_API AWare : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
		EWareType WareType;

private:
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* WareMesh;
	
public:	
	// Sets default values for this actor's properties
	AWare();

	UFUNCTION(BlueprintPure)
	EWareType GetWareType() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
