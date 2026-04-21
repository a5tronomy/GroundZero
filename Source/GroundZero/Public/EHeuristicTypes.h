#pragma once
#include "CoreMinimal.h"
#include "EHeuristicTypes.generated.h"

UENUM()
enum class EHeuristicTypes : uint8 {
    H_Manhattan,
    H_DiagonalDistance,
};

