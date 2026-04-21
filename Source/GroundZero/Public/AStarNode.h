#pragma once
#include "CoreMinimal.h"
#include "EPathDirectionOfMovement.h"
#include "AStarNode.generated.h"

USTRUCT(BlueprintType)
struct FAStarNode {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FAStarNode_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    EPathDirectionOfMovement Direction;
    
    GROUNDZERO_API FAStarNode();
};

