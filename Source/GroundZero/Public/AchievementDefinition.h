#pragma once
#include "CoreMinimal.h"
#include "AchievementDefinition.generated.h"

USTRUCT(BlueprintType)
struct FAchievementDefinition {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FAchievementDefinition_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AchievementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsProgressAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFloatStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ProgressStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StatMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LinkedHighestValueAchievement;
    
    GROUNDZERO_API FAchievementDefinition();
};

