// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "ControllerBase.h"
#include "Weinhofer_LFB.h"
#include "MotionControllerComponent.h"
#include "Components/WidgetInteractionComponent.h"

// Sets default values
AControllerBase::AControllerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	SetRootComponent(MotionController);
	MotionController->SetShowDeviceModel(true);

	Pointer = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("Pointer"));
	Pointer->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AControllerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AControllerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AControllerBase::SetControllerHand(EControllerHand ControllerHand) {
	MotionController->SetTrackingSource(ControllerHand);
}

void AControllerBase::SetIndex(float Index) {
	Pointer->PointerIndex = Index;
}

void AControllerBase::TriggerPressed() {
	Pointer->PressPointerKey(EKeys::LeftMouseButton);
	UE_LOG(LogWeinhofer_LFB_Debug, Warning, TEXT("ControllerBase TriggerPressed called"))
}

void AControllerBase::TriggerReleased() {
	Pointer->ReleasePointerKey(EKeys::LeftMouseButton);
	UE_LOG(LogWeinhofer_LFB_Debug, Warning, TEXT("ControllerBase TriggerReleased called"))
}

void AControllerBase::GripPressed() {
	UE_LOG(LogWeinhofer_LFB_Debug, Warning, TEXT("ControllerBase GripPressed called"))
}

void AControllerBase::GripReleased() {
	UE_LOG(LogWeinhofer_LFB_Debug, Warning, TEXT("ControllerBase GripReleased called"))
}

void AControllerBase::FaceButton1Pressed() {
	UE_LOG(LogWeinhofer_LFB_Debug, Warning, TEXT("ControllerBase FaceButton1Pressed called"))
}

void AControllerBase::FaceButton1Released() {
	UE_LOG(LogWeinhofer_LFB_Debug, Warning, TEXT("ControllerBase FaceButton1Released called"))
}
