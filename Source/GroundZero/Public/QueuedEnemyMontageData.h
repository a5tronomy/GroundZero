#pragma once
#include "CoreMinimal.h"
#include "QueuedEnemyMontageData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FQueuedEnemyMontageData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FQueuedEnemyMontageData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool FreezeMovement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float QueuedWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool StopAllMontages;
    
    GROUNDZERO_API FQueuedEnemyMontageData();
};

