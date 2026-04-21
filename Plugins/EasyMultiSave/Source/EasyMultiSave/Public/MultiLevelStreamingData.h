#pragma once
#include "CoreMinimal.h"
#include "MultiLevelStreamingData.generated.h"

USTRUCT(BlueprintType)
struct FMultiLevelStreamingData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics;
public:
    EASYMULTISAVE_API FMultiLevelStreamingData();
};

