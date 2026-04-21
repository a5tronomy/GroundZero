#include "GzGameModeCheatManager.h"

UGzGameModeCheatManager::UGzGameModeCheatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrankedModeTimer = 0.00f;
    this->CrankedTimerMax = 3.00f;
    this->CrankedDistanceToMoveBeforeReset = 15.00f;
    this->CrankedModePaused = false;
    this->CrankedModePausedTimer = 0.00f;
    this->HasUsedCheatsBefore = false;
    this->ActiveFilter = -1;
}

void UGzGameModeCheatManager::ToggleCheatActive(const FString& Cheat) {
}

void UGzGameModeCheatManager::SetFilterActive(const int32 Index, const bool Active) {
}

void UGzGameModeCheatManager::SetCheatActive(const FString& Cheat, const bool Active) {
}

void UGzGameModeCheatManager::ResetCrankedTimer() {
}


bool UGzGameModeCheatManager::IsCheatActiveIndex(const TEnumAsByte<EActiveCheats> Cheat) const {
    return false;
}

bool UGzGameModeCheatManager::IsCheatActive(const FString& Cheat) const {
    return false;
}


