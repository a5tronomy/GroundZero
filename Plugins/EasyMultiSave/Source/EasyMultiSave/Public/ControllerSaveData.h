#pragma once
#include "CoreMinimal.h"
#include "ControllerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FControllerSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FControllerSaveData_Statics;
public:
    EASYMULTISAVE_API FControllerSaveData();
};

