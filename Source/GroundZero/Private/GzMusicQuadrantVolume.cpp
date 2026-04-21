#include "GzMusicQuadrantVolume.h"
#include "Components/SceneComponent.h"

AGzMusicQuadrantVolume::AGzMusicQuadrantVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->CentrePoint = CreateDefaultSubobject<USceneComponent>(TEXT("CentrePoint"));
    this->CentrePoint->SetupAttachment(RootComponent);
}


