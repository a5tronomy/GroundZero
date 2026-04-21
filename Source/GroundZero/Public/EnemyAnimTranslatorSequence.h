#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimTranslatorSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FEnemyAnimTranslatorSequence {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyAnimTranslatorSequence_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    UAnimSequence* From;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    UAnimSequence* To;
    
    GROUNDZERO_API FEnemyAnimTranslatorSequence();
};

