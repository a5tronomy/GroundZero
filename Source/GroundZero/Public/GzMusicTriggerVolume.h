#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "GzMusicTriggerVolume.generated.h"

class AActor;
class UMusicDataAsset;

UCLASS()
class GROUNDZERO_API AGzMusicTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMusicTriggerVolume_Statics;
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMusicDataAsset* Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CrossfadeMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DontPlaySameMusic;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    bool TriggerUsed;
    
    UPROPERTY(SaveGame)
    bool TriggeredMusic;
    
public:
    AGzMusicTriggerVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

