#pragma once
#include "CoreMinimal.h"
#include "HighNoonEnemy.generated.h"

class ACharacter;

USTRUCT()
struct FHighNoonEnemy {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FHighNoonEnemy_Statics;
public:
    UPROPERTY()
    ACharacter* EnemyAI;
    
    UPROPERTY()
    float AngleToEnemy;
    
    GROUNDZERO_API FHighNoonEnemy();
};

