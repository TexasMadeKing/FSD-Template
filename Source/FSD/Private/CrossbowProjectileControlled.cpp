#include "CrossbowProjectileControlled.h"

UCrossbowProjectileControlled::UCrossbowProjectileControlled(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HomingTarget = NULL;
    this->CastedOwner = NULL;
}

void UCrossbowProjectileControlled::UpdateHomingTarget() {
}

void UCrossbowProjectileControlled::Server_UpdateHomingTarget_Implementation(const FVector& Target) {
}

void UCrossbowProjectileControlled::CancelControl() {
}

void UCrossbowProjectileControlled::All_UpdateHomingTarget_Implementation(const FVector& Target) {
}


