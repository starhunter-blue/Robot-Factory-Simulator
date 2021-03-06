// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Machine.h"
#include "Robot.h"

// Sets default values
AMachine::AMachine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MachineBodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MachineBodyMesh"));
	SetRootComponent(MachineBodyMesh);

	WorkstationWaypoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("WorkstationWaypoint"));
	WorkstationWaypoint->SetChildActorClass(ATargetPoint::StaticClass());
	WorkstationWaypoint->SetupAttachment(MachineBodyMesh);

	MaterialDeliveryWaypoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("MaterialDeliveryWaypoint"));
	MaterialDeliveryWaypoint->SetChildActorClass(ATargetPoint::StaticClass());
	MaterialDeliveryWaypoint->SetupAttachment(MachineBodyMesh);

	WareCollectionWaypoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("WareCollectionWaypoint"));
	WareCollectionWaypoint->SetChildActorClass(ATargetPoint::StaticClass());
	WareCollectionWaypoint->SetupAttachment(MachineBodyMesh);
}

// Called when the game starts or when spawned
void AMachine::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMachine::SetCurrentWare(AWare * NewWare) {
	CurrentWare = NewWare;
}

AWare* AMachine::GetCurrentWare() const {
	return CurrentWare;
}

void AMachine::Make5PercentProgress() {
	ProductionProgress += 0.05f;
}

// Called every frame
void AMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AMachine::GetMachineNr() const {
	return MachineNr;
}

EWareType AMachine::GetProducedWareType() const {
	return ProducedWareType;
}

bool AMachine::ProducesWare(EWareType WareType) const {
	return ProducedWareType == WareType;
}

ATargetPoint * AMachine::GetWorkstationWaypoint() {
	return Cast<ATargetPoint>(WorkstationWaypoint->GetChildActor());
}

ATargetPoint * AMachine::GetMaterialDeliveryWaypoint() {
	return Cast<ATargetPoint>(MaterialDeliveryWaypoint->GetChildActor());
}

ATargetPoint * AMachine::GetWareCollectionWaypoint() const {
	return Cast<ATargetPoint>(WareCollectionWaypoint->GetChildActor());
}

float AMachine::GetProductionProgress() const {
	return ProductionProgress;
}

TSubclassOf<class AWare> AMachine::GetWareClass() const {
	return WareClass;
}

bool AMachine::IsWareToCollect() const {
	return WareToCollect;
}

bool AMachine::HasMaterial() const {
	return NrOfStoredMaterial > 0;
}

int AMachine::GetNrOfMaterial() const {
	return NrOfStoredMaterial;
}

void AMachine::UseOneMaterial() {
	NrOfStoredMaterial--;
	if (NrOfStoredMaterial < 0) {
		NrOfStoredMaterial = 0;
	}
}

void AMachine::SetWareToCollect(bool WareState) {
	WareToCollect = WareState;
}

void AMachine::RegisterNewProductionWorkerRobot(ARobot * NewProductionWorkerRobot) {
	if (ProductionWorkerRobot && ProductionWorkerRobot != NewProductionWorkerRobot) { 
		ProductionWorkerRobot->TerminateProductionWorkCommand(); }
	ProductionWorkerRobot = NewProductionWorkerRobot;
}

void AMachine::ProduceWare() {
	if (!IsWareToCollect() && HasMaterial()) Make5PercentProgress();

	if (ProductionProgress >= 1.0f) {
		SpawnWare();
		ProductionProgress = 0.0f;
	}

	SetProgressBar();
}

void AMachine::RegisterNewSupplyWorkerRobot(ARobot * NewSupplyWorkerRobot) {
	if (SupplyWorkerRobot && SupplyWorkerRobot != NewSupplyWorkerRobot) {
		SupplyWorkerRobot->TerminateSupplyWorkCommand();
	}

	SupplyWorkerRobot = NewSupplyWorkerRobot;
}

void AMachine::GetSupplied() {
	NrOfStoredMaterial++;
}

bool AMachine::HasWareOpenForCollection() {
	return IsWareToCollect() && WareCollector == nullptr;
}

void AMachine::RegisterCollectionWorkerRobot(ARobot * NewCollectionWorkerRobot) {
	WareCollector = NewCollectionWorkerRobot;
}

AWare * AMachine::CollectWare(ARobot * Collector) {
	if (Collector == WareCollector) {
		AWare* WareToSend = CurrentWare;
		CurrentWare = nullptr;
		WareToCollect = false;
		WareCollector = nullptr;
		return WareToSend;
	}

	return nullptr;
}

void AMachine::CancelCollection(ARobot * ExCollector) {
	if (WareCollector == ExCollector) {
		WareCollector = nullptr;
	}
}

