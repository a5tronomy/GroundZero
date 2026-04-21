#pragma once
#include "CoreMinimal.h"
#include "EControlSelectionObjective.generated.h"

UENUM()
enum EControlSelectionObjective {
    ObjectiveSelectControls,
    ObjectiveMove,
    ObjectiveDodge,
    ObjectiveAim,
    ObjectiveShoot,
    ObjectiveFocus,
    ObjectiveSwitch,
    ObjectiveLock,
    ObjectiveBlock,
    ObjectiveParry,
    ObjectiveCounter,
};

