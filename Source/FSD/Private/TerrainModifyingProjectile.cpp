#include "TerrainModifyingProjectile.h"

ATerrainModifyingProjectile::ATerrainModifyingProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Terrain = NULL;
    this->OriginalGroundMaterial = NULL;
    this->CarveMesh = NULL;
    this->Radius = 1.00f;
    this->Revert = true;
    this->TimeOnGround = 0.00f;
    this->ExpensiveCarveNoise = 0.00f;
}

void ATerrainModifyingProjectile::Tick(float DeltaSeconds) {
}

float ATerrainModifyingProjectile::GetRadius() const {
    return 0.0f;
}

void ATerrainModifyingProjectile::BeginPlay() {
}


