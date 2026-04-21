#include "GzPumpRoomPuzzleManager.h"

AGzPumpRoomPuzzleManager::AGzPumpRoomPuzzleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeneratedNumbers = false;
    this->DesiredTotal = 0;
    this->PuzzleComplete = false;
    this->StageTwoPuzzle = false;
}

int32 AGzPumpRoomPuzzleManager::GetCurrentTotal() const {
    return 0;
}

void AGzPumpRoomPuzzleManager::GenerateNumbers() {
}

void AGzPumpRoomPuzzleManager::FlipNumber(int32 Index) {
}


