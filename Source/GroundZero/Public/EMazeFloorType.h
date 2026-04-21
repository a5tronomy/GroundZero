#pragma once
#include "CoreMinimal.h"
#include "EMazeFloorType.generated.h"

UENUM()
enum class EMazeFloorType : uint8 {
    Wall,
    StraightHorizontal,
    StraightVertical,
    CornerTopLeft,
    CornerTopRight,
    CornerBottomLeft,
    CornerBottomRight,
    TShapeUp,
    TShapeDown,
    TShapeLeft,
    TShapeRight,
    PlusShape,
    Path,
};

