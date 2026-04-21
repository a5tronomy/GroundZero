#include "GzTriggerVolume.h"

AGzTriggerVolume::AGzTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractPriority = 0;
    this->CanInteractHoldingUseKey = false;
    this->CanInteractUsingHoldPulseCheck = false;
    this->TriggerOnce = false;
    this->Destroyed = false;
    this->TriggerUsed = false;
    this->TriggerEnabled = true;
}

void AGzTriggerVolume::SetTriggerEnabled(const bool Enabled) {
}

void AGzTriggerVolume::OnPlayerUse(AGzCharacter* Character) {
}

void AGzTriggerVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


