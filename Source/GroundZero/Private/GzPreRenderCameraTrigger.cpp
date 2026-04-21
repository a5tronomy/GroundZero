#include "GzPreRenderCameraTrigger.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGzPreRenderCameraTrigger::AGzPreRenderCameraTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowerActor = NULL;
    this->CameraA = NULL;
    this->CameraB = NULL;
    this->TriggerPriority = 0;
    this->CustomTriggerVolume = NULL;
    this->CameraSequencePlayer = NULL;
    this->CameraTriggerDisabled = false;
    this->SplineRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraTriggerRootComponent"));
    this->MovingCameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("MovingCameraSpline"));
    this->MovingCameraSnapSpeed = 5.00f;
    this->bUseMovingCameraSnap = false;
    this->bUseMovingCameraCorrection = false;
    this->SplineInterpolationSpeed = 0.00f;
    this->ZAxisAsSplineDistance = false;
    this->UseClampHack = true;
    this->UseInverseClampHack = false;
    this->CameraParameterCollection = NULL;
    this->DesiredSplineTime = 0.00f;
    this->PrevDesiredSplineTime = 0.00f;
    this->PrevSnappedTarget = 0.00f;
    this->SnappedTarget = 0.00f;
    this->PrevTargetDist = 0.00f;
    this->CurrentSplineTime = 0.00f;
    this->IsCorrecting = 0;
    this->LoadWarmup = 0.00f;
    this->CurrentCamera = NULL;
    this->MovingCameraSpline->SetupAttachment(SplineRootComponent);
    this->SplineRootComponent->SetupAttachment(RootComponent);
}


