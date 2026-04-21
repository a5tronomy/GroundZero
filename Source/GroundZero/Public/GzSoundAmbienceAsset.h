#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AmbientSoundData.h"
#include "GzSoundAmbienceAsset.generated.h"

class USoundCue;
class USoundWave;

UCLASS(BlueprintType)
class GROUNDZERO_API UGzSoundAmbienceAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzSoundAmbienceAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundWave* RoomTone;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* RoomToneCue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RoomToneVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FAmbientSoundData> AmbientSounds;
    
    UGzSoundAmbienceAsset();

};

