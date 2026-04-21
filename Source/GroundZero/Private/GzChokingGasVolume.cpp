#include "GzChokingGasVolume.h"

AGzChokingGasVolume::AGzChokingGasVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeInSecondsToChokePlayer = 5.00f;
    this->IsEnabled = true;
    this->HandledByManager = false;
}

void AGzChokingGasVolume::SetDisabled(const bool Disabled) {
}

void AGzChokingGasVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGzChokingGasVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


