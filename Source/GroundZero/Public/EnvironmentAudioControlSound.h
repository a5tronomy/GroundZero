#pragma once
#include "CoreMinimal.h"
#include "EnvironmentAudioControlSound.generated.h"

class AAmbientSound;

USTRUCT(BlueprintType)
struct FEnvironmentAudioControlSound {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FEnvironmentAudioControlSound_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AAmbientSound> Sound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SoundVolumeToFadeTo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SoundFadeDuration;
    
    GROUNDZERO_API FEnvironmentAudioControlSound();
};

