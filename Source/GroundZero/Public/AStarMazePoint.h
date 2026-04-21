#pragma once
#include "CoreMinimal.h"
#include "EMazeFloorType.h"
#include "EPathDirectionOfMovement.h"
#include "AStarMazePoint.generated.h"

USTRUCT(BlueprintType)
struct FAStarMazePoint {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FAStarMazePoint_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    EMazeFloorType FloorType;
    
    UPROPERTY(BlueprintReadOnly)
    EPathDirectionOfMovement Direction;
    
    UPROPERTY(BlueprintReadOnly)
    bool Disabled;
    
    GROUNDZERO_API FAStarMazePoint();
};

