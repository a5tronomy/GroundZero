#pragma once
#include "CoreMinimal.h"
#include "MusicTrackVolumeControl.generated.h"

USTRUCT(BlueprintType)
struct FMusicTrackVolumeControl {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FMusicTrackVolumeControl_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float CurrentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float DesiredVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float FadeTimeInSeconds;
    
    UPROPERTY(SaveGame)
    float VolumeWhenStartedFade;
    
    UPROPERTY(SaveGame)
    float Alpha;
    
    GROUNDZERO_API FMusicTrackVolumeControl();
};

