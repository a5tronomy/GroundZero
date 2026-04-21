#include "GzCCTVManager.h"

AGzCCTVManager::AGzCCTVManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveRoomIndex = 0;
    this->ActiveCameraIndex = 0;
    this->NextRoomButtonDown = false;
    this->NextCameraButtonDown = false;
}

void AGzCCTVManager::UseCCTVManager(AGzCharacter* Player) {
}

void AGzCCTVManager::SetRoomCameraEnabled(int32 RoomIndex, int32 CameraIndex, bool Enabled) {
}


