#pragma once
#include "CoreMinimal.h"
#include "WristGadgetAudio.generated.h"

class UConstantQNRT;
class ULoudnessNRT;
class USoundBase;

USTRUCT(BlueprintType)
struct FWristGadgetAudio {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWristGadgetAudio_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText AudioMetaData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ULoudnessNRT* LoudnessNRT;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UConstantQNRT* EQNRT;
    
    GROUNDZERO_API FWristGadgetAudio();
};

