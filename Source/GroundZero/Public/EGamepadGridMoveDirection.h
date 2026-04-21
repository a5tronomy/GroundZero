#pragma once
#include "CoreMinimal.h"
#include "EGamepadGridMoveDirection.generated.h"

UENUM()
enum class EGamepadGridMoveDirection : uint8 {
    Left,
    Right,
    Up,
    Down,
};

