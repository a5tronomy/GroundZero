#include "GzMaggotManWhackAMole.h"

AGzMaggotManWhackAMole::AGzMaggotManWhackAMole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastTookMeleeDamage = false;
    this->NoProximitySound = false;
}


FVector AGzMaggotManWhackAMole::GetOverriddenEyesLocation_Implementation() const {
    return FVector{};
}


