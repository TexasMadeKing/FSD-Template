#include "BTDecorator_InRange.h"

UBTDecorator_InRange::UBTDecorator_InRange() {
    this->NodeName = TEXT("In Range");
    this->MinRange = 0.00f;
    this->MaxRange = 1000.00f;
    this->GeometricDistanceType = FAIDistanceType::Distance3D;
}


