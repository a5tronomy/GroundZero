#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/Scene.h"
#include "OnCameraBecomeActiveDelegate.h"
#include "OnCameraBecomeInactiveDelegate.h"
#include "OnTriggeredCameraForFirstTimeDelegate.h"
#include "GzPreRenderedCamera.generated.h"

class AExponentialHeightFog;
class AGzCharacter;
class AGzPreRenderedCamera;
class ALight;
class UGzAnimatedCameraData;
class UMaterial;
class UMaterialInstance;
class UObject;
class UPreRenderSceneCaptureComponent2D;
class UPrimitiveComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class UTexture;
class UTexture2DArray;

UCLASS()
class GROUNDZERO_API AGzPreRenderedCamera : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPreRenderedCamera_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> ItemsToGlint;
    
    UPROPERTY(BlueprintAssignable)
    FOnCameraBecomeInactive OnCameraBecomeInactive;
    
    UPROPERTY(BlueprintAssignable)
    FOnCameraBecomeActive OnCameraBecomeActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPreRenderSceneCaptureComponent2D* RealtimeCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPreRenderSceneCaptureComponent2D* RealtimeDepthCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* CameraSceneRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterial* MasterBackgroundMaterial;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneCaptureComponent2D* ColourCameraComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneCaptureComponent2D* NormalMapCameraComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneCaptureComponent2D* LightningCameraComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneCaptureComponent2D* DepthCameraComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneCaptureComponent2D* FlashlightCameraComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneCaptureComponent2D* TranslucencyCameraComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<ALight>> LightsToExcludeInRender;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<AExponentialHeightFog>> HeightFogsToExcludeInRender;
    
    UPROPERTY(EditAnywhere)
    bool DisableCheckout;
    
    UPROPERTY(EditAnywhere)
    int32 BackgroundRenderWarmUpTicks;
    
    UPROPERTY(EditAnywhere)
    int32 FlashlightRenderWarmUpTicks;
    
    UPROPERTY(EditAnywhere)
    int32 TranslucencyRenderWarmUpTicks;
    
    UPROPERTY(EditAnywhere)
    int32 DepthRenderWarmUpTicks;
    
    UPROPERTY(EditAnywhere)
    int32 NormalRenderWarmUpTicks;
    
    UPROPERTY(EditAnywhere)
    int32 LightningRenderWarmUpTicks;
    
    UPROPERTY(EditAnywhere)
    bool EnableTranslucency;
    
    UPROPERTY(BlueprintAssignable)
    FOnTriggeredCameraForFirstTime OnTriggeredCameraForFirstTime;
    
    UPROPERTY(SaveGame)
    bool HasTriggeredCameraBefore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HidePlayer;
    
public:
    UPROPERTY()
    UTexture* TempBackgroundTexture;
    
    UPROPERTY()
    UTexture* TempFlashlightTexture;
    
    UPROPERTY()
    UTexture* TempDepthTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* PreRenderedBackgroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* BackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* NormalMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* FlashlightTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* DepthTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* TranslucencyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* LightningTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2DArray* AnimatedColourDepthTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2DArray* AnimatedFlashlightTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2DArray* AnimatedDepthTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGzAnimatedCameraData* AnimatedCameraData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> PreRenderedBackgroundMaterialPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> BackgroundTexturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> NormalMapTexturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> FlashlightTexturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> DepthTexturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> TranslucencyTexturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture>> AlternateBackgroundMaterialsPaths;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> LightningTexturePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2DArray> AnimatedColourDepthTexturesPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2DArray> AnimatedFlashlightTexturesPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2DArray> AnimatedDepthTexturesPath;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bUseSoftLoading;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsCutsceneCamera;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsLoaded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInstance*> AlternateBackgroundMaterials;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 AlternateBackgroundIndexToUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RenderLightning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CameraMetaData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CCTVCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzPreRenderedCamera* CameraWhenExitCCTV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzPreRenderedCamera* PreviousCCTVCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzPreRenderedCamera* NextCCTVCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGuid CameraGuid;
    
public:
    AGzPreRenderedCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UnregisterCamera() const;
    
    UFUNCTION()
    void UnloadAssets(const bool bClearMaterials, const bool bSoftUnload);
    
    UFUNCTION()
    void UnloadAsset(UObject* Object, const bool bSoftUnload);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraActive(AGzCharacter* Character, bool TemporaryCamera, bool DontSendOnBecomeActiveEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBackgroundMaterial(UMaterialInstance* Instance);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAlternateBackgroundVisible(int32 Index, bool DontSetActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    FString SafeGetPackageName(const FString& Prefix, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable)
    void RenderLightningOnly();
    
    UFUNCTION(BlueprintCallable)
    void RenderColourTexturesOnly();
    
    UFUNCTION(BlueprintCallable)
    void RenderCameraToTexturesOnly();
    
    UFUNCTION(BlueprintCallable)
    void RenderCamera();
    
    UFUNCTION(BlueprintCallable)
    void RenderAlternateBackground();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void RegisterNewRenderableComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RegisterNewRenderableActor(AActor* Actor);
    
    UFUNCTION()
    void RegisterCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void OnStopViewingCamera(AGzCharacter* Character);
    
    UFUNCTION()
    void OnAsyncComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveCameraTick(const AGzCharacter* Viewer);
    
    UFUNCTION(BlueprintCallable)
    void MarkMaterialsDirty();
    
    UFUNCTION()
    void LoadAssetsAsync();
    
    UFUNCTION()
    void LoadAssets(const bool bSetMaterial);
    
    UFUNCTION(BlueprintCallable)
    void GetVisibleActorsFromCamera();
    
protected:
    UFUNCTION(BlueprintCallable)
    FText GetCameraMetaData();
    
    UFUNCTION(BlueprintImplementableEvent)
    FWeightedBlendable GetBackgroundMaterial();
    
public:
    UFUNCTION()
    void ForceUnloadAssets(const bool bClearMaterials, const bool bSoftUnload);
    
    UFUNCTION(BlueprintCallable)
    void FixUpTexturesWithWrongLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoRenderWork(const bool AssignMaterials);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableAllShowFlagsOnCamera();
    
    UFUNCTION(BlueprintCallable)
    void DisableAllShowFlags(USceneCaptureComponent2D* SceneCaptureComponent);
    
protected:
    UFUNCTION(BlueprintPure)
    bool CameraIsRendering() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignFromAnimatedRender();
    

    // Fix for true pure virtual functions not being implemented
};

