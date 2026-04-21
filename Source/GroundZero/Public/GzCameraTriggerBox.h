#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "Engine/TriggerBox.h"
#include "CameraTriggerBoxOnActivatedDelegate.h"
#include "GzCameraTriggerBox.generated.h"

class AGzCharacter;
class AGzWorldRenderCamera;
class ALevelSequenceActor;
class ATriggerVolume;
class USceneComponent;
class USplineComponent;
class UTexture2DArray;

UCLASS()
class GROUNDZERO_API AGzCameraTriggerBox : public ATriggerBox, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzCameraTriggerBox_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FCameraTriggerBoxOnActivated OnPlayerView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2DArray* AnimatedBackgroundColour;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2DArray* AnimatedBackgroundDepth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2DArray* AnimatedBackgroundFlashlight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2DArray* AnimatedBackgroundLightning;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* SplineRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TriggerPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USplineComponent* VolumeStartEndPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ZAxisAsSplineDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ALevelSequenceActor* CameraSequencePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzWorldRenderCamera* A_Camera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzWorldRenderCamera* B_Camera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATriggerVolume* Trigger_Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Starting_Camera;
    
    AGzCameraTriggerBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerOverlapTrigger(AGzCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

