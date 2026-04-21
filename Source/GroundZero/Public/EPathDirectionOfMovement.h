#pragma once
#include "CoreMinimal.h"
#include "EPathDirectionOfMovement.generated.h"

UENUM()
enum class EPathDirectionOfMovement : uint8 {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    UPRIGHT,
    UPLEFT,
    DOWNRIGHT,
    DOWNLEFT,
};

