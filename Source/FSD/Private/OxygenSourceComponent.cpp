#include "OxygenSourceComponent.h"

UOxygenSourceComponent::UOxygenSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SourceRadius = 0.00f;
    this->CenterOffset = 0.00f;
    this->Mutator = NULL;
}

void UOxygenSourceComponent::OnTimerTick() {
}



