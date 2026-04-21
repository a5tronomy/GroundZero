#pragma once
#include "CoreMinimal.h"
#include "ChapterStatData.generated.h"

USTRUCT(BlueprintType)
struct FChapterStatData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FChapterStatData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float TimeElapsed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 TimesDamaged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float DamageTaken;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 EnemiesKilledShooting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 EnemiesKilledMelee;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 EnemiesExecuted;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 GenomePointsEarned;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 GenomePointsSpent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 ShotsFired;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 ShotsHit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float DistanceTravelled;
    
    GROUNDZERO_API FChapterStatData();
};

