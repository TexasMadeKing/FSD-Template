#include "BTDecorator_InRangeEx.h"

UBTDecorator_InRangeEx::UBTDecorator_InRangeEx() {
    this->NodeName = TEXT("In Range");
    this->MinRange = 0.00f;
    this->MaxRange = 1000.00f;
    this->GeometricDistanceType = FAIDistanceType::Distance3D;
}


