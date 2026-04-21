#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "CcTVRoom.h"
#include "OnEnteredCCTVManagerDelegate.h"
#include "OnExitedCCTVManagerDelegate.h"
#include "OnInspectedCctvCameraDelegate.h"
#include "GzCCTVManager.generated.h"

class AGzCharacter;
class AGzPreRenderedCamera;

UCLASS()
class GROUNDZERO_API AGzCCTVManager : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzCCTVManager_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnEnteredCCTVManager OnEnteredCCTVManager;
    
    UPROPERTY(BlueprintAssignable)
    FOnExitedCCTVManager OnExitedCCTVManager;
    
    UPROPERTY(BlueprintAssignable)
    FOnInspectedCctvCamera OnInspectedCctvCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FCcTVRoom> Rooms;
    
    UPROPERTY()
    int32 ActiveRoomIndex;
    
    UPROPERTY()
    int32 ActiveCameraIndex;
    
    UPROPERTY()
    bool NextRoomButtonDown;
    
    UPROPERTY()
    bool NextCameraButtonDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraToExitTo;
    
    AGzCCTVManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseCCTVManager(AGzCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomCameraEnabled(int32 RoomIndex, int32 CameraIndex, bool Enabled);
    

    // Fix for true pure virtual functions not being implemented
};

