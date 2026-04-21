#pragma once
#include "CoreMinimal.h"
#include "EnemyAIAnimationData.h"
#include "EnemyDirectionalDeathData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDirectionalDeathData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyDirectionalDeathData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> ForwardDeaths;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> LeftDeaths;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> RightDeaths;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> BackwardDeaths;
    
    GROUNDZERO_API FEnemyDirectionalDeathData();
};

