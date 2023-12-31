#include "PlayerProximityTracker.h"

UPlayerProximityTracker::UPlayerProximityTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistanceBetweenPlayers = 2000.00f;
    this->PlayerSpheresUpdateRatePerSecond = 2.00f;
}

void UPlayerProximityTracker::Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce) {
}

void UPlayerProximityTracker::Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce) {
}

FPlayerSphere UPlayerProximityTracker::GetPrimarySphere() const {
    return FPlayerSphere{};
}

TArray<FPlayerSphere> UPlayerProximityTracker::GetPlayerSpheres() const {
    return TArray<FPlayerSphere>();
}


