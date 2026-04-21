#include "GzLaserSightComponent.h"

UGzLaserSightComponent::UGzLaserSightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeamEffect = NULL;
    this->BeamImpactEffect = NULL;
    this->LaserBeamComponent = NULL;
    this->LaserImpactComponent = NULL;
    this->LaserSightOwner = NULL;
    this->LaserSightEnabled = false;
    this->LaserSightDisabled = false;
}


