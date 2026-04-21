#include "GzSpeedrunGhostManager.h"

UGzSpeedrunGhostManager::UGzSpeedrunGhostManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnabled = false;
    this->NextHeartbeat = 0.00f;
    this->HeartbeatsPerSecond = 3;
    this->MaxDurationInLevel = 1200.00f;
    this->TimeActiveInThisLevel = 0.00f;
    this->CurrentLevel = NULL;
    this->ActiveLevelDataIndex = -1;
}

void UGzSpeedrunGhostManager::StopRecording() {
}

void UGzSpeedrunGhostManager::StartRecording() {
}

bool UGzSpeedrunGhostManager::GetBreadCrumbData(const TArray<FSpeedrunGhostLevelData>& SavedData, FTransform& TransformData) {
    return false;
}

void UGzSpeedrunGhostManager::ClearOutData(const bool AlsoDisable) {
}


