#pragma once
#include "CoreMinimal.h"
#include "Engine/SkyLight.h"
#include "GZ_SkyLight.generated.h"

UCLASS()
class GROUNDZERO_API AGZ_SkyLight : public ASkyLight {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGZ_SkyLight_Statics;
public:
    AGZ_SkyLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateIntensityGZ(float IntensityValue, bool AffectWorld);
    
};

