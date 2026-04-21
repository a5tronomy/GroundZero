#pragma once
#include "CoreMinimal.h"
#include "EnemyBackUpData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FEnemyBackUpData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyBackUpData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* RetreatMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeBeforeBackingUp;
    
    GROUNDZERO_API FEnemyBackUpData();
};

