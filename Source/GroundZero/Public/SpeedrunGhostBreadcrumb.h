#pragma once
#include "CoreMinimal.h"
#include "SpeedrunGhostBreadcrumb.generated.h"

USTRUCT(BlueprintType)
struct FSpeedrunGhostBreadcrumb {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSpeedrunGhostBreadcrumb_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float LocationX;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float LocationY;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float LocationZ;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float RotationX;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float RotationY;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float RotationZ;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float Timestamp;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool ShouldInterpToNextBreadCrumb;
    
    GROUNDZERO_API FSpeedrunGhostBreadcrumb();
};

