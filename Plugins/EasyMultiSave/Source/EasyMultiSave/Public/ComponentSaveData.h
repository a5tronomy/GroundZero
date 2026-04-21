#pragma once
#include "CoreMinimal.h"
#include "ComponentSaveData.generated.h"

USTRUCT()
struct FComponentSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FComponentSaveData_Statics;
public:
    EASYMULTISAVE_API FComponentSaveData();
};

