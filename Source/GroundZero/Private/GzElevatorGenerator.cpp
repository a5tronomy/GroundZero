#include "GzElevatorGenerator.h"

AGzElevatorGenerator::AGzElevatorGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Camera = NULL;
}

void AGzElevatorGenerator::StartUsingCrane(AGzCharacter* Character) {
}



AGzPreRenderedCamera* AGzElevatorGenerator::GetCamera() const {
    return NULL;
}



