#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "Camera/CameraActor.h"
#include "CameraSoundVolumeChange.h"
#include "ERenderingTask.h"
#include "GzWorldRenderCamera.generated.h"

class AAmbientSound;
class AGzCameraTriggerBox;
class AGzFlashlightLightingActor;
class UMaterial;
class UMaterialParameterCollection;
class USceneCaptureComponent2D;
class USceneComponent;
class UTexture;
class UTextureRenderTarget2D;

UCLASS()
class GROUNDZERO_API AGzWorldRenderCamera : public ACameraActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzWorldRenderCamera_Statics;
public:
    UPROPERTY()
    bool RenderingScreenshots;
    
    UPROPERTY()
    TArray<TEnumAsByte<ERenderingTask>> FullRenderQueue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseEditorTick;
    
    UPROPERTY()
    bool BeganRenderProcess;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneCaptureComponent2D* ImageCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGzFlashlightLightingActor* FlashlightLightingActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* CameraRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterial* WLocationPPMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraFarPlane;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialParameterCollection* ShadowRenderingMaterialCollection;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture* MovieColourTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TicksBeforeColourScreenshot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TicksBeforeNormalMapScreenshot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TicksBeforeDepthScreenshot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TicksBeforeFlashlightScreenshot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TicksBeforeLightningScreenshot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* ColorTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* DepthTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* FlashlightColorTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* LightningColorTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* NormalMapTexture;
    
public:
    UPROPERTY(BlueprintReadOnly)
    float CameraAnimatedSequenceAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCameraSoundVolumeChange> SoundsForVolumeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AAmbientSound* CameraAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraAudioFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraAudioFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraAudioFadeInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraAudioFadeOutVolume;
    
    UPROPERTY()
    TArray<AGzCameraTriggerBox*> AssociatedTriggers;
    
    UPROPERTY(BlueprintReadOnly)
    UTextureRenderTarget2D* BackgroundRenderTarget;
    
    UPROPERTY(BlueprintReadOnly)
    UTextureRenderTarget2D* BackgroundRenderTarget16Bit;
    
    UPROPERTY(BlueprintReadOnly)
    bool AnimatedCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LightningEnabled;
    
    AGzWorldRenderCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCameraRenderTargets();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCameraSequenceAlpha(AGzCameraTriggerBox* Trigger, const int32 BgFrame, const int32 DepthFrame, const int32 FlashlightFrame, const int32 LightningFrame);
    
    UFUNCTION()
    void RenderPass(int32 RenderEvent);
    
    UFUNCTION(BlueprintCallable)
    void RenderNormalMap();
    
    UFUNCTION(BlueprintCallable)
    void RenderLightningBackground();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RenderImageEvent(int32 RenderEvent);
    
    UFUNCTION(BlueprintCallable)
    void RenderFlashlight();
    
    UFUNCTION(BlueprintCallable)
    void RenderDepthBackground();
    
    UFUNCTION(BlueprintCallable)
    void RenderColourBackground();
    
    UFUNCTION(BlueprintCallable)
    void RenderAndSaveBackgrounds();
    
    UFUNCTION(BlueprintPure)
    UMaterial* GetWLocationMaterial() const;
    
    UFUNCTION(BlueprintPure)
    FString GetOutputPath() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCameraName() const;
    
    UFUNCTION(BlueprintCallable)
    void ExportRenderImage(int32 RenderEvent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintEditorTick(float DeltaTime);
    

    // Fix for true pure virtual functions not being implemented
};

