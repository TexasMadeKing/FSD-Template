#include "CaveVine.h"
#include "Components/SceneComponent.h"
#include "Components/SplineMeshComponent.h"

ACaveVine::ACaveVine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->GroundCollisionChannel = ECC_WorldDynamic;
    this->IdleSwingSpeed = 25.00f;
    this->ChaseSpeed = 100.00f;
    this->MaxReach = 100.00f;
    this->GroundOffset = 150.00f;
    this->NoiseRadius = 40.00f;
    this->NoiseSpeed = 0.20f;
    this->SplineMeshComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMeshComponent"));
    this->VineHead = CreateDefaultSubobject<USceneComponent>(TEXT("VineHead"));
}




