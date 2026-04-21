#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "GzAnimNotify_PlaySound.generated.h"

class USoundBase;

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotify_PlaySound : public UAnimNotify_PlaySound {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotify_PlaySound_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SoundIfInWater;
    
    UGzAnimNotify_PlaySound();

};

