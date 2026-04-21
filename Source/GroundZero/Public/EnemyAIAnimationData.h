#pragma once
#include "CoreMinimal.h"
#include "EnemyAIAnimationData.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FEnemyAIAnimationData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyAIAnimationData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PlayChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlaybackRate;
    
    GROUNDZERO_API FEnemyAIAnimationData();
};

