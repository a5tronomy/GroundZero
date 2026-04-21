#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentAudioControlSound.h"
#include "DoorTravelInfo.generated.h"

class AGzPreRenderedCamera;
class UMusicDataAsset;
class USoundBase;

USTRUCT(BlueprintType)
struct FDoorTravelInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FDoorTravelInfo_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool TravelInfoSet;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FTransform TeleportTransform;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float RotationYaw;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float FadeBackInTime;
    
    UPROPERTY(BlueprintReadOnly)
    USoundBase* DoorCloseSound;
    
    UPROPERTY(BlueprintReadOnly)
    UMusicDataAsset* RoomMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEnvironmentAudioControlSound> SoundsForVolumeChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraAfterDoor;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FText NewLocation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool ShowLocationEvenIfAlreadyVisited;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool MinorLocation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool ShowMinorLocationIfAlreadyVisited;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FText MinorLocationIfNewLocationVisitedAlready;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool NoScreenFade;
    
    GROUNDZERO_API FDoorTravelInfo();
};

