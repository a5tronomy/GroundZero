#include "GzPreRenderedCamera.h"
#include "Components/SceneComponent.h"
#include "PreRenderSceneCaptureComponent2D.h"

AGzPreRenderedCamera::AGzPreRenderedCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraSceneRoot"));
    this->RealtimeCamera = CreateDefaultSubobject<UPreRenderSceneCaptureComponent2D>(TEXT("RealtimeCamera"));
    this->RealtimeDepthCamera = CreateDefaultSubobject<UPreRenderSceneCaptureComponent2D>(TEXT("RealtimeDepthCamera"));
    this->CameraSceneRoot = (USceneComponent*)RootComponent;
    this->MasterBackgroundMaterial = NULL;
    this->ColourCameraComponent = NULL;
    this->NormalMapCameraComponent = NULL;
    this->LightningCameraComponent = NULL;
    this->DepthCameraComponent = NULL;
    this->FlashlightCameraComponent = NULL;
    this->TranslucencyCameraComponent = NULL;
    this->DisableCheckout = false;
    this->BackgroundRenderWarmUpTicks = 30;
    this->FlashlightRenderWarmUpTicks = 30;
    this->TranslucencyRenderWarmUpTicks = 30;
    this->DepthRenderWarmUpTicks = 5;
    this->NormalRenderWarmUpTicks = 5;
    this->LightningRenderWarmUpTicks = 5;
    this->EnableTranslucency = false;
    this->HasTriggeredCameraBefore = false;
    this->HidePlayer = false;
    this->TempBackgroundTexture = NULL;
    this->TempFlashlightTexture = NULL;
    this->TempDepthTexture = NULL;
    this->PreRenderedBackgroundMaterial = NULL;
    this->BackgroundTexture = NULL;
    this->NormalMapTexture = NULL;
    this->FlashlightTexture = NULL;
    this->DepthTexture = NULL;
    this->TranslucencyTexture = NULL;
    this->LightningTexture = NULL;
    this->AnimatedColourDepthTextures = NULL;
    this->AnimatedFlashlightTextures = NULL;
    this->AnimatedDepthTextures = NULL;
    this->AnimatedCameraData = NULL;
    this->bUseSoftLoading = false;
    this->bIsCutsceneCamera = false;
    this->bIsLoading = false;
    this->bIsLoaded = false;
    this->AlternateBackgroundIndexToUse = -1;
    this->RenderLightning = false;
    this->CCTVCamera = false;
    this->CameraWhenExitCCTV = NULL;
    this->PreviousCCTVCamera = NULL;
    this->NextCCTVCamera = NULL;
    this->RealtimeCamera->SetupAttachment(RootComponent);
    this->RealtimeDepthCamera->SetupAttachment(RootComponent);
}

void AGzPreRenderedCamera::UnregisterCamera() const {
}

void AGzPreRenderedCamera::UnloadAssets(const bool bClearMaterials, const bool bSoftUnload) {
}

void AGzPreRenderedCamera::UnloadAsset(UObject* Object, const bool bSoftUnload) {
}

void AGzPreRenderedCamera::SetCameraActive(AGzCharacter* Character, bool TemporaryCamera, bool DontSendOnBecomeActiveEvent) {
}

void AGzPreRenderedCamera::SetBackgroundMaterial(UMaterialInstance* Instance) {
}

void AGzPreRenderedCamera::SetAlternateBackgroundVisible(int32 Index, bool DontSetActive) {
}

FString AGzPreRenderedCamera::SafeGetPackageName(const FString& Prefix, const FString& Suffix) {
    return TEXT("");
}

void AGzPreRenderedCamera::RenderLightningOnly() {
}

void AGzPreRenderedCamera::RenderColourTexturesOnly() {
}

void AGzPreRenderedCamera::RenderCameraToTexturesOnly() {
}

void AGzPreRenderedCamera::RenderCamera() {
}

void AGzPreRenderedCamera::RenderAlternateBackground() {
}



void AGzPreRenderedCamera::RegisterCamera() const {
}

void AGzPreRenderedCamera::OnStopViewingCamera(AGzCharacter* Character) {
}

void AGzPreRenderedCamera::OnAsyncComplete() {
}


void AGzPreRenderedCamera::MarkMaterialsDirty() {
}

void AGzPreRenderedCamera::LoadAssetsAsync() {
}

void AGzPreRenderedCamera::LoadAssets(const bool bSetMaterial) {
}

void AGzPreRenderedCamera::GetVisibleActorsFromCamera() {
}

FText AGzPreRenderedCamera::GetCameraMetaData() {
    return FText::GetEmpty();
}


void AGzPreRenderedCamera::ForceUnloadAssets(const bool bClearMaterials, const bool bSoftUnload) {
}

void AGzPreRenderedCamera::FixUpTexturesWithWrongLocation() {
}

void AGzPreRenderedCamera::DoRenderWork(const bool AssignMaterials) {
}

void AGzPreRenderedCamera::DisableAllShowFlagsOnCamera() {
}

void AGzPreRenderedCamera::DisableAllShowFlags(USceneCaptureComponent2D* SceneCaptureComponent) {
}

bool AGzPreRenderedCamera::CameraIsRendering() const {
    return false;
}

void AGzPreRenderedCamera::AssignFromAnimatedRender() {
}


