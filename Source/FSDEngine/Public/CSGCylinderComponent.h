#pragma once
#include "CoreMinimal.h"
#include "CSGCylinderProperties.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGCylinderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGCylinderComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGCylinderProperties Properties;
    
    UCSGCylinderComponent(const FObjectInitializer& ObjectInitializer);

};

