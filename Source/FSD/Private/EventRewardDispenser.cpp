#include "EventRewardDispenser.h"
#include "Net/UnrealNetwork.h"

AEventRewardDispenser::AEventRewardDispenser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DispenserFrame = NULL;
    this->PoweredUp = false;
    this->IsActivated = false;
    this->SelectedReward = NULL;
}

void AEventRewardDispenser::SetSelectedReward(USchematic* InReward) {
}

bool AEventRewardDispenser::PowerUp(APlayerCharacter* InPlayerCharacter) {
    return false;
}


void AEventRewardDispenser::OnRep_SelectedReward() {
}

void AEventRewardDispenser::OnRep_PoweredUp() {
}

void AEventRewardDispenser::OnRep_PlayerId() {
}

void AEventRewardDispenser::OnRep_IsActivated() {
}




bool AEventRewardDispenser::IsOwningPlayer(APlayerCharacter* PlayerCharacter) const {
    return false;
}

APlayerCharacter* AEventRewardDispenser::GetPlayerCharacter() const {
    return NULL;
}

AFSDPlayerState* AEventRewardDispenser::GetPlayer() const {
    return NULL;
}

void AEventRewardDispenser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEventRewardDispenser, PlayerId);
    DOREPLIFETIME(AEventRewardDispenser, PoweredUp);
    DOREPLIFETIME(AEventRewardDispenser, IsActivated);
    DOREPLIFETIME(AEventRewardDispenser, SelectedReward);
}


