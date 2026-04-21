#pragma once
#include "CoreMinimal.h"
#include "CombatMusic.generated.h"

class ACharacter;
class UMusicDataAsset;

USTRUCT(BlueprintType)
struct FCombatMusic {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCombatMusic_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UMusicDataAsset* Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UMusicDataAsset* MusicAfterStopping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<ACharacter> TargetEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool StopMusicIfGoThroughDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float MusicFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float NewMusicFadeInTime;
    
    GROUNDZERO_API FCombatMusic();
};

