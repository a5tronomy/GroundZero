#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemFlags.generated.h"

UENUM()
enum class EInventoryItemFlags {
    None,
    MixedWithBooster,
    MixedWithAntibody,
    SilencerAttached = 4,
    ScopeAttached = 8,
    CompensatorAttached = 16,
    ElectricKnifeAttached = 32,
    AcidKnifeAttached = 64,
    NotInfinite = 128,
};

