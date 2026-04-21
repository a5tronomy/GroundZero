#pragma once
#include "CoreMinimal.h"
#include "AStarMazePoint.h"
#include "AStarMazePoints.generated.h"

USTRUCT(BlueprintType)
struct FAStarMazePoints {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FAStarMazePoints_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FAStarMazePoint> MazePoints;
    
    GROUNDZERO_API FAStarMazePoints();
};

