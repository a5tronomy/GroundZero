#pragma once
#include "CoreMinimal.h"
#include "EnemyAIGrapplingSequenceData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FEnemyAIGrapplingSequenceData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyAIGrapplingSequenceData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* EnemyMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* PlayerMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrappleBlendBackTimeDelay;
    
    GROUNDZERO_API FEnemyAIGrapplingSequenceData();
};

