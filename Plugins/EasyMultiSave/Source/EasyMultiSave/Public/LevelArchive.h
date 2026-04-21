#pragma once
#include "CoreMinimal.h"
#include "LevelArchive.generated.h"

USTRUCT(BlueprintType)
struct FLevelArchive {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLevelArchive_Statics;
public:
    EASYMULTISAVE_API FLevelArchive();
};

