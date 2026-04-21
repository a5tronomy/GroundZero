#include "DoorTravelInfo.h"

FDoorTravelInfo::FDoorTravelInfo() {
    this->TravelInfoSet = false;
    this->RotationYaw = 0.00f;
    this->FadeBackInTime = 0.00f;
    this->DoorCloseSound = NULL;
    this->RoomMusic = NULL;
    this->ShowLocationEvenIfAlreadyVisited = false;
    this->MinorLocation = false;
    this->ShowMinorLocationIfAlreadyVisited = false;
    this->NoScreenFade = false;
}

