#include "EnemyControlStateComponent.h"
#include "Net/UnrealNetwork.h"

UEnemyControlStateComponent::UEnemyControlStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 17;
    this->UseThirdPersonCam = true;
    this->ControlState = EEnemyControlState::Disconneced;
}

void UEnemyControlStateComponent::ServerExit_Implementation() {
}

void UEnemyControlStateComponent::OnRep_StateData(const FControlEnemyState& oldState) {
}

void UEnemyControlStateComponent::OnRep_ControlState(EEnemyControlState oldState) {
}

void UEnemyControlStateComponent::OnEnemyCrashMontageEnded(UAnimMontage* Montage, bool interrupted) {
}



void UEnemyControlStateComponent::JumpPressed() {
}

UAIPlayerControlComponent* UEnemyControlStateComponent::GetAiPlayerControlComponent() {
    return NULL;
}

void UEnemyControlStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEnemyControlStateComponent, StateData);
    DOREPLIFETIME(UEnemyControlStateComponent, ControlState);
    DOREPLIFETIME(UEnemyControlStateComponent, AngularVelocity);
    DOREPLIFETIME(UEnemyControlStateComponent, ControlRotation);
}


