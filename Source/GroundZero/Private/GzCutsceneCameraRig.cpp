#include "GzCutsceneCameraRig.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SceneComponent.h"

AGzCutsceneCameraRig::AGzCutsceneCameraRig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRigRoot"));
    this->CameraRigRoot = (USceneComponent*)RootComponent;
    this->CameraRigMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("CameraRigMesh"));
    this->CameraSequencePlayer = NULL;
    this->CameraBPToSpawn = NULL;
    this->CameraRigMesh->SetupAttachment(RootComponent);
}

FTransform AGzCutsceneCameraRig::GetBoneTransform(FName BoneName) {
    return FTransform{};
}

void AGzCutsceneCameraRig::CreateCameras() {
}


