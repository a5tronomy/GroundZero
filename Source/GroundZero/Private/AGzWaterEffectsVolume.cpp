#include "AGzWaterEffectsVolume.h"

AAGzWaterEffectsVolume::AAGzWaterEffectsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsDeepWater = false;
}

void AAGzWaterEffectsVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAGzWaterEffectsVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


