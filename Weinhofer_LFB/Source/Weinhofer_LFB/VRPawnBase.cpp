// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "VRPawnBase.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "ControllerBase.h"
#include "Components/InputComponent.h"

AVRPawnBase::AVRPawnBase() {
	PrimaryActorTick.bCanEverTick = false;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	SetRootComponent(VRRoot);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);
}

// Called when the game starts or when spawned
void AVRPawnBase::BeginPlay() {
	Super::BeginPlay();

	if (RightHandControllerClass) {
		RightHandController = GetWorld()->SpawnActor<AControllerBase>(RightHandControllerClass);
		RightHandController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
		RightHandController->SetOwner(this);
		RightHandController->SetControllerHand(EControllerHand::Right);
		RightHandController->SetIndex(0.f);
	}

	if (LeftHandControllerClass) {
		LeftHandController = GetWorld()->SpawnActor<AControllerBase>(LeftHandControllerClass);
		LeftHandController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
		LeftHandController->SetOwner(this);
		LeftHandController->SetControllerHand(EControllerHand::Left);
		LeftHandController->SetIndex(1.f);
	}
}

void AVRPawnBase::RightTriggerPressed() {
	if (RightHandController) {
		RightHandController->TriggerPressed();
	}
}

void AVRPawnBase::RightTriggerReleased() {
	if (RightHandController) {
		RightHandController->TriggerReleased();
	}
}

void AVRPawnBase::RightGripPressed() {
	if (RightHandController) {
		RightHandController->GripPressed();
	}
}

void AVRPawnBase::RightGripReleased() {
	if (RightHandController) {
		RightHandController->GripReleased();
	}
}

void AVRPawnBase::RightFaceButton1Pressed() {
	if (RightHandController) {
		RightHandController->FaceButton1Pressed();
	}
}

void AVRPawnBase::RightFaceButton1Released() {
	if (RightHandController) {
		RightHandController->FaceButton1Released();
	}
}

void AVRPawnBase::LeftTriggerPressed() {
	if (LeftHandController) {
		LeftHandController->TriggerPressed();
	}
}

void AVRPawnBase::LeftTriggerReleased() {
	if (LeftHandController) {
		LeftHandController->TriggerReleased();
	}
}

void AVRPawnBase::LeftGripPressed() {
	if (LeftHandController) {
		LeftHandController->GripPressed();
	}
}

void AVRPawnBase::LeftGripReleased() {
	if (LeftHandController) {
		LeftHandController->GripReleased();
	}
}

void AVRPawnBase::LeftFaceButton1Pressed() {
	if (LeftHandController) {
		LeftHandController->FaceButton1Pressed();
	}
}

void AVRPawnBase::LeftFaceButton1Released() {
	if (LeftHandController) {
		LeftHandController->FaceButton1Released();
	}
}

// Called to bind functionality to input
void AVRPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("RightTrigger"), EInputEvent::IE_Pressed, this, &AVRPawnBase::RightTriggerPressed);
	PlayerInputComponent->BindAction(TEXT("RightTrigger"), EInputEvent::IE_Released, this, &AVRPawnBase::RightTriggerReleased);

	PlayerInputComponent->BindAction(TEXT("RightGrip"), EInputEvent::IE_Pressed, this, &AVRPawnBase::RightGripPressed);
	PlayerInputComponent->BindAction(TEXT("RightGrip"), EInputEvent::IE_Released, this, &AVRPawnBase::RightGripReleased);

	PlayerInputComponent->BindAction(TEXT("RightFaceButton1"), EInputEvent::IE_Pressed, this, &AVRPawnBase::RightFaceButton1Pressed);
	PlayerInputComponent->BindAction(TEXT("RightFaceButton1"), EInputEvent::IE_Released, this, &AVRPawnBase::RightFaceButton1Released);

	PlayerInputComponent->BindAction(TEXT("LeftTrigger"), EInputEvent::IE_Pressed, this, &AVRPawnBase::LeftTriggerPressed);
	PlayerInputComponent->BindAction(TEXT("LeftTrigger"), EInputEvent::IE_Released, this, &AVRPawnBase::LeftTriggerReleased);

	PlayerInputComponent->BindAction(TEXT("LeftGrip"), EInputEvent::IE_Pressed, this, &AVRPawnBase::LeftGripPressed);
	PlayerInputComponent->BindAction(TEXT("LeftGrip"), EInputEvent::IE_Released, this, &AVRPawnBase::LeftGripReleased);

	PlayerInputComponent->BindAction(TEXT("LeftFaceButton1"), EInputEvent::IE_Pressed, this, &AVRPawnBase::LeftFaceButton1Pressed);
	PlayerInputComponent->BindAction(TEXT("LeftFaceButton1"), EInputEvent::IE_Released, this, &AVRPawnBase::LeftFaceButton1Released);
}

