#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EVocalSoundType.h"
#include "GzAnimNotifyPlayerVoice.generated.h"

class USoundBase;

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyPlayerVoice : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyPlayerVoice_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVocalSoundType> SoundType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ForcePlay;
    
    UGzAnimNotifyPlayerVoice();

};

