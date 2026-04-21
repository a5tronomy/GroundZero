#pragma once
#include "CoreMinimal.h"
#include "ELoadedStateMod.generated.h"

UENUM()
enum class ELoadedStateMod : uint8 {
    NoModify,
    Unloaded,
    Loaded,
};

