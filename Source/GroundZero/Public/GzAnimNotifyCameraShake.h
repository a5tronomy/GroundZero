#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "GzAnimNotifyCameraShake.generated.h"

class UCameraShakeBase;

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyCameraShake : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyCameraShake_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShakeIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShakeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DecayOverDistance;
    
    UGzAnimNotifyCameraShake();

};

