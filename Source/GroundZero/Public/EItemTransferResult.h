#pragma once
#include "CoreMinimal.h"
#include "EItemTransferResult.generated.h"

UENUM()
enum class EItemTransferResult : uint8 {
    Inserted,
    Stacked,
    PartialTransfer,
    NoTransfer,
};

