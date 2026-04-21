#include "GzInteractVolume.h"

AGzInteractVolume::AGzInteractVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolumeEnabled = true;
    this->OnceOnly = false;
    this->EnableTouch = true;
}

void AGzInteractVolume::SetEnabled(bool Enabled) {
}


