#include "ItemDispenser.h"
#include "Components/SceneComponent.h"
#include "InstantUsable.h"
#include "Net/UnrealNetwork.h"

AItemDispenser::AItemDispenser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Usable = CreateDefaultSubobject<UInstantUsable>(TEXT("Usable"));
    this->itemClass = NULL;
    this->spawnedItem = NULL;
    this->ItemSpawnTime = 0.00f;
    this->InitialItemSpawnTime = 0.00f;
    this->IsOpen = false;
    this->KillItemsOnDestuction = true;
}

void AItemDispenser::SpawnItem() {
}

void AItemDispenser::Open() {
}

void AItemDispenser::OnUsed(APlayerCharacter* User, EInputKeys Key) {
}

void AItemDispenser::OnRep_SpawnedItem(AActor* oldItem) {
}

void AItemDispenser::OnRep_IsOpen() {
}




bool AItemDispenser::HasItem() const {
    return false;
}

AActor* AItemDispenser::GetItem() const {
    return NULL;
}

void AItemDispenser::Close() {
}

void AItemDispenser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItemDispenser, spawnedItem);
    DOREPLIFETIME(AItemDispenser, IsOpen);
}


