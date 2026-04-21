#pragma once
#include "CoreMinimal.h"
#include "ESafeMovingDirection.generated.h"

UENUM()
enum class ESafeMovingDirection : uint8 {
    SafeMovingDirectionNone,
    SafeMovingDirectionLeft,
    SafeMovingDirectionRight,
};

