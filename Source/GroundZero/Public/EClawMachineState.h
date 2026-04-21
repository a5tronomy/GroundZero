#pragma once
#include "CoreMinimal.h"
#include "EClawMachineState.generated.h"

UENUM()
enum EClawMachineState {
    Idle,
    Descending,
    Grabbing,
    Ascending,
    MovingToPrizeChute,
    DroppingPrize,
    ReturningToStartingPosition,
    MaxClawMachineState,
};

