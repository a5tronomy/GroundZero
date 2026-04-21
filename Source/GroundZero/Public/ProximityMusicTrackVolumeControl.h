#pragma once
#include "CoreMinimal.h"
#include "ProximityMusicTrackVolumeControl.generated.h"

USTRUCT(BlueprintType)
struct FProximityMusicTrackVolumeControl {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FProximityMusicTrackVolumeControl_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float DistanceWhenVolumeIsZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float DistanceWhenVolumeIsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float InterpSpeed;
    
    GROUNDZERO_API FProximityMusicTrackVolumeControl();
};

