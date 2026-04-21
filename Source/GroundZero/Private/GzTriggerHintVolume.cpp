#include "GzTriggerHintVolume.h"

AGzTriggerHintVolume::AGzTriggerHintVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerOnce = true;
    this->OnlyOnGamepad = false;
    this->OnlyOnKeyboard = false;
    this->OnlyInTankControls = false;
    this->OnlyInModernControls = false;
}


