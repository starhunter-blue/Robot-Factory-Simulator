// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "RobotOverlord.h"
#include "Storyboard_Emotion.h"
#include "Storyboard_Blocking.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Robot.h"
#include "RobotAgenda.h"

// Sets default values
ARobotOverlord::ARobotOverlord()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobotOverlord::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> RobotsActorClass;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARobot::StaticClass(), RobotsActorClass);

	for (AActor* UncastRobot : RobotsActorClass) {
		if (UncastRobot) {
			Robots.Add(Cast<ARobot>(UncastRobot));
		}
	}
}

void ARobotOverlord::GiveNextOrder() {
	ARobot* Robot = GetNextRobot();
	UE_LOG(LogTemp, Warning, TEXT("REDSTAR: Robot Name %s"), *Robot->GetName())
	if (Robot->GetBehaviorState() == ERobotState::RSE_Autonomous || Robot->GetBehaviorState() == ERobotState::RSE_CalledToOffice) {
		return;
	}
	
	URobotAgenda* NewAgenda = Storyboard->GetNextAgenda();

	Robot->GiveOverlordOrder(NewAgenda);
}

void ARobotOverlord::CheckIfRobotRequestsAreFulfilled() {
	if (BehaviorType == EBehaviorType::BTE_Blocking) {
		for (ARobot* Robot : Robots) {
			if (Robot->GetBehaviorState() != ERobotState::RSE_Autonomous && Robot->GetBehaviorState() != ERobotState::RSE_CalledToOffice) {
				if (!Robot->IsRequestFulfilled()) {
					Robot->ActivateDisobedience();
				}
			}
		}
	}
}

void ARobotOverlord::GenerateStoryboard() {
	switch (BehaviorType) {
		case EBehaviorType::BTE_Emotion: 
			Storyboard = NewObject<UStoryboard_Emotion>(this);
			break;
		case EBehaviorType::BTE_Blocking: 
			Storyboard = NewObject<UStoryboard_Blocking>(this);
			break;
		default: UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotOverlord - GenerateStoryboard - Unknown BehaviorType"))
	}
	Storyboard->RegisterComponent();
}

int32 ARobotOverlord::GetNextRobotNrAndIncrement() {
	int32 ReturnNr = NextRobotToCallNr;
	NextRobotToCallNr += 2;
	if (NextRobotToCallNr >= Robots.Num()) {
		if (NextRobotToCallNr % 2 == 0) {
			NextRobotToCallNr = 1;
		}
		else {
			NextRobotToCallNr = 0;
		}
	}

	return ReturnNr;
}

ARobot * ARobotOverlord::GetNextRobot() {
	return Robots[GetNextRobotNrAndIncrement()];
}

// Called every frame
void ARobotOverlord::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ARobotOverlord::GetTimeIntervall() const {
	return TimeIntervall;
}

float ARobotOverlord::GetIntervallVariation() const {
	return IntervallVariation;
}

void ARobotOverlord::SetBehaviorTypeToEmotion() {
	if (BehaviorType != EBehaviorType::BTE_Unset) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotOverlord - SetBehaviorTypeToEmotion - BehaviorType is not Unset"))
		return;
	}
	BehaviorType = EBehaviorType::BTE_Emotion;
	GenerateStoryboard();
}

void ARobotOverlord::SetBehaviorTypeToBlocking() {
	if (BehaviorType != EBehaviorType::BTE_Unset) {
		UE_LOG(LogTemp, Warning, TEXT("REDSTAR: RobotOverlord - SetBehaviorTypeToBlocking - BehaviorType is not Unset"))
			return;
	}
	BehaviorType = EBehaviorType::BTE_Blocking;
	GenerateStoryboard();
}

