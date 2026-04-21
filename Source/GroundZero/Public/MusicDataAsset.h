#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicTrackVolumeControl.h"
#include "ProximityMusicTrackVolumeControl.h"
#include "MusicDataAsset.generated.h"

class UMusicDataAsset;
class USoundBase;

UCLASS(BlueprintType)
class GROUNDZERO_API UMusicDataAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UMusicDataAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Layer1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Layer2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Layer3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Layer4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Layer5;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ForceEvenWhenMusicBlocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Layer1Loops;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Layer2Loops;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Layer3Loops;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Layer4Loops;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Layer5Loops;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Layer1LoopPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Layer2LoopPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Layer3LoopPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Layer4LoopPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Layer5LoopPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* CrossFadeTransitionTrack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMusicDataAsset* OnlyTransitionWhenStartingThisTrack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FMusicTrackVolumeControl Layer1Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FMusicTrackVolumeControl Layer2Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FMusicTrackVolumeControl Layer3Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FMusicTrackVolumeControl Layer4Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FMusicTrackVolumeControl Layer5Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* ProximityMusicLayer1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FProximityMusicTrackVolumeControl ProximityMusicLayer1Properties;
    
    UMusicDataAsset();

};

