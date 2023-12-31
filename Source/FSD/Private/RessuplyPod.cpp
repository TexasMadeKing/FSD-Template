#include "RessuplyPod.h"
#include "Components/SceneComponent.h"
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ARessuplyPod::ARessuplyPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->KillRadius = 150.00f;
    this->DropHeight = 3500.00f;
    this->DropDelay = 0.00f;
    this->MissionShoutDelay = 2.00f;
    this->ShoutDialogOrderAccepted = NULL;
    this->DialogOrderAccepted = NULL;
    this->DialogPodArrived = NULL;
    this->CurrentMissionShout = NULL;
    this->State = ERessuplyPodState::ReadyToDrop;
    this->TargetDropTime = 0.00f;
    this->ServerDropProgress = 0.00f;
    this->DropCurve = NULL;
    this->PlayerSpawnPoint = NULL;
    this->CloseToImpactDistance = 150.00f;
}

void ARessuplyPod::SetIdling() {
}


void ARessuplyPod::OnRep_TargetLocation() {
}

void ARessuplyPod::OnRep_State(ERessuplyPodState oldState) {
}




AActor* ARessuplyPod::DropToTarget(UObject* WorldContextObject, TSubclassOf<ARessuplyPod> podClass, const FVector& Location, AActor* requester) {
    return NULL;
}

void ARessuplyPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARessuplyPod, TargetLocation);
    DOREPLIFETIME(ARessuplyPod, State);
    DOREPLIFETIME(ARessuplyPod, ServerDropProgress);
}


