#pragma once
#include "CoreMinimal.h"
#include "ApocalypseCrisisStats.generated.h"

USTRUCT(BlueprintType)
struct FApocalypseCrisisStats {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FApocalypseCrisisStats_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float TimeTaken;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 EnemiesKilled;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float DamageTaken;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 BountyEnemiesKilled;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 GenomePointsEarned;
    
    GROUNDZERO_API FApocalypseCrisisStats();
};

