#include "ZipLineItem.h"

AZipLineItem::AZipLineItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistance = 0.00f;
    this->MinDistance = 100.00f;
    this->MinAngle = 35.00f;
    this->MaxAngle = 35.00f;
}



