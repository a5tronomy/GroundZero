#include "GzMusicTriggerVolume.h"

AGzMusicTriggerVolume::AGzMusicTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlyOnce = true;
    this->Music = NULL;
    this->FadeInTime = 0.00f;
    this->CrossfadeMusic = false;
    this->FadeOutTime = 0.00f;
    this->DontPlaySameMusic = false;
    this->TriggerUsed = false;
    this->TriggeredMusic = false;
}

void AGzMusicTriggerVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


