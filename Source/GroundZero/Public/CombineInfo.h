#pragma once
#include "CoreMinimal.h"
#include "CombineInfo.generated.h"

USTRUCT(BlueprintType)
struct FCombineInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCombineInfo_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CombinesWith;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CombinesResult;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AmountOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AdditionalGive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AdditionalGiveAmountOverride;
    
    GROUNDZERO_API FCombineInfo();
};

