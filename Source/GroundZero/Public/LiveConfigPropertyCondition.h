#pragma once
#include "CoreMinimal.h"
#include "LiveConfigPropertyCondition.generated.h"

USTRUCT(BlueprintType)
struct FLiveConfigPropertyCondition {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLiveConfigPropertyCondition_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString DesiredValue;
    
    GROUNDZERO_API FLiveConfigPropertyCondition();
};

