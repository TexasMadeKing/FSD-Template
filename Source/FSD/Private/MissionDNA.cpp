#include "MissionDNA.h"

UMissionDNA::UMissionDNA() {
    this->MissionScale = 100.00f;
    this->Weight = 1.00f;
    this->Complexity = NULL;
    this->Duration = NULL;
}

float UMissionDNA::GetDurationHazardBonus() const {
    return 0.0f;
}

float UMissionDNA::GetComplexityHazardBonus() const {
    return 0.0f;
}


