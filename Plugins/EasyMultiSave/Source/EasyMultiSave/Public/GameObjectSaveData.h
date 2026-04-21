#pragma once
#include "CoreMinimal.h"
#include "GameObjectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameObjectSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGameObjectSaveData_Statics;
public:
    EASYMULTISAVE_API FGameObjectSaveData();
};

