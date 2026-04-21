#pragma once
#include "CoreMinimal.h"
#include "EMaximumDamageAmount.h"
#include "EnemyDamageTaken.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDamageTaken {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnemyDamageTaken_Statics;
public:
    UPROPERTY(SaveGame)
    TEnumAsByte<EMaximumDamageAmount> DamageType;
    
    UPROPERTY(SaveGame)
    float DamageAmount;
    
    GROUNDZERO_API FEnemyDamageTaken();
};

