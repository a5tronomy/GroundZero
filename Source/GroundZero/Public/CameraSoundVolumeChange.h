#pragma once
#include "CoreMinimal.h"
#include "CameraSoundVolumeChange.generated.h"

class AAmbientSound;

USTRUCT(BlueprintType)
struct FCameraSoundVolumeChange {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCameraSoundVolumeChange_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    AAmbientSound* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundFadeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SoundVolumeToFadeTo;
    
    GROUNDZERO_API FCameraSoundVolumeChange();
};

