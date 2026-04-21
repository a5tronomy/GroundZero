#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimTranslatorMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FEnemyAnimTranslatorMontage {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyAnimTranslatorMontage_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    UAnimMontage* From;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    UAnimMontage* To;
    
    GROUNDZERO_API FEnemyAnimTranslatorMontage();
};

