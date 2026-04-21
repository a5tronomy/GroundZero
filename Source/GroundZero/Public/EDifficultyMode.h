#pragma once
#include "CoreMinimal.h"
#include "EDifficultyMode.generated.h"

UENUM()
enum EDifficultyMode {
    DifficultyNone,
    DifficultyEasy,
    DifficultyNormal,
    DifficultyHard = 4,
    DifficultyVeryHard = 8,
    DifficultyExtreme = 16,
    DifficultySuperExtreme = 32,
};

