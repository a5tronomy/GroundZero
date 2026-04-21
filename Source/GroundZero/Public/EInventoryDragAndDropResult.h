#pragma once
#include "CoreMinimal.h"
#include "EInventoryDragAndDropResult.generated.h"

UENUM()
enum EInventoryDragAndDropResult {
    NoResult,
    SwappedItems,
    ReloadedWeapon,
    StackingAmmo,
    AddingAttachment,
    CombinedItems,
    InvalidResult,
    CantHaveSilencerAndCompensator,
};

