#pragma once
#include "CoreMinimal.h"
#include "SublevelLoadInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FSublevelLoadInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSublevelLoadInfo_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> SubLevel;
    
    GROUNDZERO_API FSublevelLoadInfo();
};

