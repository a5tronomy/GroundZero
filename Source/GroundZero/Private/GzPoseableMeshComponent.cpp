#include "GzPoseableMeshComponent.h"

UGzPoseableMeshComponent::UGzPoseableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGzPoseableMeshComponent::SetBoneLocalTransformByName(FName BoneName, const FTransform& InTransform) {
}

FTransform UGzPoseableMeshComponent::GetBoneLocalTransformByName(FName BoneName) {
    return FTransform{};
}


