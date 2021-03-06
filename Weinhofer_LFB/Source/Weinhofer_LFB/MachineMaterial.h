// Copyright © 2020 Mathias Weinhofer - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MachineMaterial.generated.h"

UCLASS()
class WEINHOFER_LFB_API AMachineMaterial : public AActor
{
	GENERATED_BODY()

protected:
	//Setup
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MaterialMesh;
	
public:	
	// Sets default values for this actor's properties
	AMachineMaterial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
