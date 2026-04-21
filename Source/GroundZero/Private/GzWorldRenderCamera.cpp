#include "GzWorldRenderCamera.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneCaptureComponent2D.h"

AGzWorldRenderCamera::AGzWorldRenderCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenderingScreenshots = false;
    this->UseEditorTick = false;
    this->BeganRenderProcess = false;
    this->ImageCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ImageCaptureComponent"));
    const FProperty* p_CameraComponent_Parent = GetClass()->FindPropertyByName("CameraComponent");
    this->FlashlightLightingActor = NULL;
    this->CameraRootComponent = NULL;
    this->WLocationPPMaterial = NULL;
    this->CameraFarPlane = 5000.00f;
    this->ShadowRenderingMaterialCollection = NULL;
    this->MovieColourTexture = NULL;
    this->TicksBeforeColourScreenshot = 5;
    this->TicksBeforeNormalMapScreenshot = 5;
    this->TicksBeforeDepthScreenshot = 5;
    this->TicksBeforeFlashlightScreenshot = 5;
    this->TicksBeforeLightningScreenshot = 5;
    this->ColorTexture = NULL;
    this->DepthTexture = NULL;
    this->FlashlightColorTexture = NULL;
    this->LightningColorTexture = NULL;
    this->NormalMapTexture = NULL;
    this->CameraAnimatedSequenceAlpha = 0.00f;
    this->CameraAudio = NULL;
    this->CameraAudioFadeInTime = 0.10f;
    this->CameraAudioFadeOutTime = 0.10f;
    this->CameraAudioFadeInVolume = 1.00f;
    this->CameraAudioFadeOutVolume = 0.00f;
    this->BackgroundRenderTarget = NULL;
    this->BackgroundRenderTarget16Bit = NULL;
    this->AnimatedCamera = false;
    this->LightningEnabled = false;
    this->ImageCaptureComponent->SetupAttachment(p_CameraComponent_Parent->ContainerPtrToValuePtr<UCameraComponent>(this));
}



void AGzWorldRenderCamera::RenderPass(int32 RenderEvent) {
}

void AGzWorldRenderCamera::RenderNormalMap() {
}

void AGzWorldRenderCamera::RenderLightningBackground() {
}


void AGzWorldRenderCamera::RenderFlashlight() {
}

void AGzWorldRenderCamera::RenderDepthBackground() {
}

void AGzWorldRenderCamera::RenderColourBackground() {
}

void AGzWorldRenderCamera::RenderAndSaveBackgrounds() {
}

UMaterial* AGzWorldRenderCamera::GetWLocationMaterial() const {
    return NULL;
}

FString AGzWorldRenderCamera::GetOutputPath() const {
    return TEXT("");
}

FString AGzWorldRenderCamera::GetCameraName() const {
    return TEXT("");
}

void AGzWorldRenderCamera::ExportRenderImage(int32 RenderEvent) {
}



