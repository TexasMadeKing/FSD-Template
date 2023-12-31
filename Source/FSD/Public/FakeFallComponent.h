#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FakeFallComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFakeFallComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFakeFallComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartFakeFall();
    
};

