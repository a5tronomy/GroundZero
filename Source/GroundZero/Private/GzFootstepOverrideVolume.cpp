#include "GzFootstepOverrideVolume.h"

AGzFootstepOverrideVolume::AGzFootstepOverrideVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FootstepOverrideMaterial = NULL;
    this->FootstepParticle = NULL;
    this->EnemyFootstepOverrideSound = NULL;
    this->Disabled = false;
}


