#include "RepairableComponent.h"
#include "Net/UnrealNetwork.h"

URepairableComponent::URepairableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequiresCarriedResource = NULL;
    this->ResourcesRequired = 1;
    this->IsFullyRepaired = false;
}

bool URepairableComponent::TryRepair(APlayerCharacter* User) {
    return false;
}

void URepairableComponent::OnRep_ResourcesRequired() {
}

int32 URepairableComponent::GetResourcesRequired() const {
    return 0;
}

void URepairableComponent::Cheat_Repair() {
}

void URepairableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URepairableComponent, ResourcesRequired);
    DOREPLIFETIME(URepairableComponent, IsFullyRepaired);
}


