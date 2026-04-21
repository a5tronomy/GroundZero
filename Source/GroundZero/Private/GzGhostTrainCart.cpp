#include "GzGhostTrainCart.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"

AGzGhostTrainCart::AGzGhostTrainCart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrainRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TrainRoot"));
    this->TrackSpline = CreateDefaultSubobject<USplineComponent>(TEXT("TrackSpline"));
    this->TrainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrainMesh"));
    this->CartAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("CartAudio"));
    this->UseConstantVelocity = false;
    this->StartSound = NULL;
    this->StopSound = NULL;
    this->TrainRideInSeconds = 60.00f;
    this->AlphaAlongTrack = 0.00f;
    this->TrainActive = false;
    this->CartAudio->SetupAttachment(TrainMesh);
    this->TrackSpline->SetupAttachment(TrainRoot);
    this->TrainMesh->SetupAttachment(TrainRoot);
}

void AGzGhostTrainCart::StartTrain() {
}

void AGzGhostTrainCart::SetTrainAlongTrack(const float Alpha) const {
}


