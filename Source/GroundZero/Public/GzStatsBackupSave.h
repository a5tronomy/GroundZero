#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GzStatsBackupSave.generated.h"

UCLASS()
class GROUNDZERO_API UGzStatsBackupSave : public USaveGame {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzStatsBackupSave_Statics;
public:
    UPROPERTY(SaveGame)
    TMap<FString, bool> AchievementUnlock;
    
    UPROPERTY(SaveGame)
    TMap<FString, int32> StatProgress;
    
    UGzStatsBackupSave();

};

