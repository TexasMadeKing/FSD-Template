#pragma once
#include "CoreMinimal.h"
#include "CarveSplineSegment.h"
#include "ECarveFilterType.h"
#include "EPreciousMaterialOptions.h"
#include "SplineSegmentCarveOperationData.generated.h"

class ULevelGenerationCarverComponent;
class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FSplineSegmentCarveOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarveSplineSegment> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType CarveFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelGenerationCarverComponent* LevelGenerationComponent;
    
    FSD_API FSplineSegmentCarveOperationData();
};

