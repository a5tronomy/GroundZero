#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapPositionResult.generated.h"

USTRUCT(BlueprintType)
struct FMapPositionResult {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FMapPositionResult_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LocalMapPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D NormalizedMapPos;
    
    GROUNDZERO_API FMapPositionResult();
};

