#include "GzTrainRideManager.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"

AGzTrainRideManager::AGzTrainRideManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpriteRoot"));
    this->SpriteRoot = (USceneComponent*)RootComponent;
    this->TrainSound = CreateDefaultSubobject<UAudioComponent>(TEXT("TrainSound"));
    this->TunnelSound = CreateDefaultSubobject<UAudioComponent>(TEXT("TunnelSound"));
    this->TunnelFadeInDistance = 1500.00f;
    this->MoveSpeed = 500.00f;
    this->PropLifeTime = 5.00f;
    this->MoveDirection = 0;
    this->TrainSound->SetupAttachment(RootComponent);
    this->TunnelSound->SetupAttachment(RootComponent);
}

void AGzTrainRideManager::SetVistaEnabled(const int32 Index, const bool Enabled, const bool SpawnTerrainAhead) {
}

void AGzTrainRideManager::OnTerrainDestroyed(AActor* DestroyedActor) {
}


