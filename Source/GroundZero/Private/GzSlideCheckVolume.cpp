#include "GzSlideCheckVolume.h"

AGzSlideCheckVolume::AGzSlideCheckVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlidingCharacter = NULL;
    this->TimeOutFailTime = 10.00f;
}

void AGzSlideCheckVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


