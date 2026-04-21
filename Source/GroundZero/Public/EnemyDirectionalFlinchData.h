#pragma once
#include "CoreMinimal.h"
#include "EnemyAIAnimationData.h"
#include "EnemyDirectionalFlinchData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDirectionalFlinchData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyDirectionalFlinchData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> ForwardFlinches;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> LeftFlinches;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> RightFlinches;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAIAnimationData> BackwardFlinches;
    
    GROUNDZERO_API FEnemyDirectionalFlinchData();
};

