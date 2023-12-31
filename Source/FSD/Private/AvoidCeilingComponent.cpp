#include "AvoidCeilingComponent.h"

UAvoidCeilingComponent::UAvoidCeilingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDuckDistance = 100.00f;
    this->TraceVerticalStart = 100.00f;
    this->MinVerticalSpace = 250.00f;
    this->DuckSpeed = 10.00f;
    this->ComponentToMove = NULL;
    this->IsDuckingEnabled = true;
}


