#include "GzInteractComponent.h"

UGzInteractComponent::UGzInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanInteractUsingHoldPulseCheck = false;
    this->CanInteractHoldingUseKey = false;
    this->InteractPriority = 0;
    this->InteractDisabled = false;
}


