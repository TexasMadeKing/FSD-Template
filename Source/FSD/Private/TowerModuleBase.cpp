#include "TowerModuleBase.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnemyHealthComponent.h"
#include "Net/UnrealNetwork.h"

ATowerModuleBase::ATowerModuleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ModuleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->ArmorPlates.AddDefaulted(3);
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Heath"));
    this->DestroyedMesh = NULL;
    this->deathSound = NULL;
    this->deathParticles = NULL;
    this->ArmorLaunchPower = 100.00f;
    this->HideArmorTime = 0.00f;
    this->ModuleRotationSpeed = 0.00f;
    this->ConstantRotation = false;
    this->State = EGuntowerModuleState::EDormant;
    this->ModuleMesh->SetupAttachment(RootComponent);
}

void ATowerModuleBase::SetState(EGuntowerModuleState NewState) {
}

void ATowerModuleBase::OnRep_State(EGuntowerModuleState prevState) {
}

void ATowerModuleBase::HideArmorPlates() {
}


void ATowerModuleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATowerModuleBase, ModuleRotation);
    DOREPLIFETIME(ATowerModuleBase, State);
}


