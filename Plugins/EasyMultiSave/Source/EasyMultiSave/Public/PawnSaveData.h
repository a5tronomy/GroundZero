#pragma once
#include "CoreMinimal.h"
#include "PawnSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPawnSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPawnSaveData_Statics;
public:
    EASYMULTISAVE_API FPawnSaveData();
};

