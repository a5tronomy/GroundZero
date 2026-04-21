#include "GzSatelliteStrikeManager.h"
#include "Components/SceneComponent.h"

AGzSatelliteStrikeManager::AGzSatelliteStrikeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpriteRoot"));
    this->StrikeVolume = NULL;
    this->SpriteRoot = (USceneComponent*)RootComponent;
    this->ManagerSprite = NULL;
}




