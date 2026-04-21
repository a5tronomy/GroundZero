#include "UseActorData.h"

FUseActorData::FUseActorData() {
    this->Actor = NULL;
    this->Component = NULL;
    this->ActorType = UseActorTypeInterface;
    this->Priority = 0;
    this->Distance = 0.00f;
}

