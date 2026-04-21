#include "CrossLevelSaveData.h"

FCrossLevelSaveData::FCrossLevelSaveData() {
    this->SessionID = 0;
    this->SaveActive = false;
    this->CurrentDifficultyLevel = DifficultyNone;
    this->CurrentPuzzleDifficultyLevel = DifficultyNone;
}

