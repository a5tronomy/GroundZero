#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "GamepadKeyFunctionMapping.generated.h"

USTRUCT(BlueprintType)
struct FGamepadKeyFunctionMapping : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGamepadKeyFunctionMapping_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString FunctionName;
    
    FGamepadKeyFunctionMapping();
};

