#include "HostileGuntowerModule.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnemyComponent.h"
#include "Net/UnrealNetwork.h"

AHostileGuntowerModule::AHostileGuntowerModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestroyedMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DestroyedMesh"));
    this->DestroyedSmoke = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DestroyedSmoke"));
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("EnemyComponent"));
    this->ModuleMaxHealth = 1.00f;
    this->DestroyedMesh->SetupAttachment(RootComponent);
    this->DestroyedSmoke->SetupAttachment(DestroyedMesh);
}

void AHostileGuntowerModule::OnWeakpointDied(UHealthComponentBase* Health) {
}

void AHostileGuntowerModule::OnRep_ModuleMaxHealth() {
}

void AHostileGuntowerModule::OnModuleDied(UHealthComponentBase* Health) {
}

void AHostileGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHostileGuntowerModule, ModuleMaxHealth);
    DOREPLIFETIME(AHostileGuntowerModule, CurrentAimRotation);
}


