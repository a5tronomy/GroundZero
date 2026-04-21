#include "GzFlashlightLightingActor.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"

AGzFlashlightLightingActor::AGzFlashlightLightingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->LightningLight = NULL;
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
    this->DirectionalLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLight"));
}

void AGzFlashlightLightingActor::TurnOnLightning() const {
}

void AGzFlashlightLightingActor::TurnOnFlashlightLighting() const {
}

void AGzFlashlightLightingActor::TurnOffLightning() const {
}

void AGzFlashlightLightingActor::TurnOffFlashlightLighting() const {
}


