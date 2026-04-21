#include "GzHotAndColdVolume.h"

AGzHotAndColdVolume::AGzHotAndColdVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomMusic = NULL;
    this->HotPostProcess = NULL;
    this->ColdPostProcess = NULL;
    this->IsEnabled = true;
    this->CurrentState = NormalHeatState;
    this->TooHotEvenWhenNormal = false;
}

void AGzHotAndColdVolume::SetState(TEnumAsByte<EHotAndColdVolumeState> State, bool SettingInitialState) {
}

void AGzHotAndColdVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGzHotAndColdVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGzHotAndColdVolume::NewOnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGzHotAndColdVolume::NewOnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


