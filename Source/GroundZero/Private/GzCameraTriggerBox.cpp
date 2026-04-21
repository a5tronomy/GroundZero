#include "GzCameraTriggerBox.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGzCameraTriggerBox::AGzCameraTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimatedBackgroundColour = NULL;
    this->AnimatedBackgroundDepth = NULL;
    this->AnimatedBackgroundFlashlight = NULL;
    this->AnimatedBackgroundLightning = NULL;
    this->SplineRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraTriggerRootComponent"));
    this->TriggerPriority = 0;
    this->VolumeStartEndPoint = CreateDefaultSubobject<USplineComponent>(TEXT("VolumeStartEndPoint"));
    this->ZAxisAsSplineDistance = false;
    this->CameraSequencePlayer = NULL;
    this->A_Camera = NULL;
    this->B_Camera = NULL;
    this->Trigger_Volume = NULL;
    this->Starting_Camera = false;
    this->SplineRootComponent->SetupAttachment(RootComponent);
    this->VolumeStartEndPoint->SetupAttachment(SplineRootComponent);
}

void AGzCameraTriggerBox::OnPlayerOverlapTrigger(AGzCharacter* Player) {
}


