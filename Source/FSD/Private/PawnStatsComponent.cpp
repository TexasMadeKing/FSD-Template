#include "PawnStatsComponent.h"
#include "Net/UnrealNetwork.h"

UPawnStatsComponent::UPawnStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseDormancy = false;
}

void UPawnStatsComponent::RemoveModifier(UPawnStat* Stat, float Value) {
}

float UPawnStatsComponent::GetStatValue(UPawnStat* Stat) const {
    return 0.0f;
}

void UPawnStatsComponent::ChangeModifier(UPawnStat* Stat, float CurrentValue, float NewValue) {
}

int32 UPawnStatsComponent::AddModifier(UPawnStat* Stat, float Value) {
    return 0;
}

void UPawnStatsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPawnStatsComponent, Stats);
}


