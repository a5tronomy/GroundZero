#include "GzStomachActor.h"

AGzStomachActor::AGzStomachActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsIgnited = false;
    this->Health = 500.00f;
    this->MaxHealth = 500.00f;
}




