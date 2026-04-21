#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrainRideVistaProp.generated.h"

class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FTrainRideVistaProp {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FTrainRideVistaProp_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> RandomMaterialsOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SpawnChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MinimumPropScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MaximumPropScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RandomYaw;
    
    GROUNDZERO_API FTrainRideVistaProp();
};

