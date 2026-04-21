#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "AGzWaterEffectsVolume.generated.h"

class AActor;

UCLASS()
class GROUNDZERO_API AAGzWaterEffectsVolume : public ATriggerVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AAGzWaterEffectsVolume_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDeepWater;
    
    AAGzWaterEffectsVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

