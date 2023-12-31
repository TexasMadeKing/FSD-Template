#include "TreasureBeacon.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "TerrainPlacementComponent.h"

ATreasureBeacon::ATreasureBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->TreasurePositioning = NULL;
    this->DebrisPartsPositioning = NULL;
    this->AvoidCostCurve = NULL;
    this->AvoidCostCurveDebris = NULL;
    this->MaxRange = 2000.00f;
    this->MinRange = 1000.00f;
    this->DebrisSpawnRange = 1000.00f;
    this->DebrisPartClass = NULL;
    this->DebrisPartsToSpawn = 4;
    this->MaxSpawnLocationTries = 10;
    this->TreasureClass = NULL;
    this->TreasureInstance = NULL;
    this->terrainPlacement->SetupAttachment(RootComponent);
}

void ATreasureBeacon::SpawnDebreeParts() const {
}

void ATreasureBeacon::ActivateTreasure() {
}

void ATreasureBeacon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasureBeacon, TreasureInstance);
}


