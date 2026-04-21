#pragma once
#include "CoreMinimal.h"
#include "AmbientSoundData.generated.h"

class USoundCue;
class USoundWave;

USTRUCT(BlueprintType)
struct FAmbientSoundData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FAmbientSoundData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundWave* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* SoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float NextRandomTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Volume;
    
    GROUNDZERO_API FAmbientSoundData();
};

