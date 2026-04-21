#pragma once
#include "CoreMinimal.h"
#include "LevelScriptSaveData.generated.h"

USTRUCT(BlueprintType)
struct FLevelScriptSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics;
public:
    EASYMULTISAVE_API FLevelScriptSaveData();
};

