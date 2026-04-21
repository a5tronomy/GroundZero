#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyAnimTranslatorMontage.h"
#include "EnemyAnimTranslatorSequence.h"
#include "GzEnemyAnimationTranslator.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class GROUNDZERO_API UGzEnemyAnimationTranslator : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzEnemyAnimationTranslator_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* StartSequence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* ExitSequence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAnimTranslatorSequence> Sequences;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FEnemyAnimTranslatorMontage> Montages;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<int32> AttacksToDisable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<int32> AttacksThatResetThisTranslator;
    
    UGzEnemyAnimationTranslator();

};

