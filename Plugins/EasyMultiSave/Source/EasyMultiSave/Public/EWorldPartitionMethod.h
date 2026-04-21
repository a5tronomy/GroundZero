#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionMethod.generated.h"

UENUM()
enum class EWorldPartitionMethod : uint8 {
    Enabled,
    MemoryOnly,
    LoadOnly,
    Disabled,
};

