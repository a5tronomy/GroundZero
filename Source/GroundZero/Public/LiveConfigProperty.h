#pragma once
#include "CoreMinimal.h"
#include "LiveConfigPropertyCondition.h"
#include "LiveConfigProperty.generated.h"

USTRUCT(BlueprintType)
struct FLiveConfigProperty {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLiveConfigProperty_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString PropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FLiveConfigPropertyCondition> Conditions;
    
    GROUNDZERO_API FLiveConfigProperty();
};

