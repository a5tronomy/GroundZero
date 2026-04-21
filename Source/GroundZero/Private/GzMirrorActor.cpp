#include "GzMirrorActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGzMirrorActor::AGzMirrorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->MasterActor = NULL;
    this->MirrorLandmark = NULL;
    this->CloneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CloneMesh"));
    this->MasterMesh = NULL;
    this->CloneMesh->SetupAttachment(RootComponent);
}



