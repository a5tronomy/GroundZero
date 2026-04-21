#pragma once
#include "CoreMinimal.h"
#include "EEnemyCriticalState.generated.h"

UENUM()
enum EEnemyCriticalState {
    CriticalState_None,
    CriticalState_Started,
    CriticalState_Idle,
    CriticalState_Executed,
    CriticalState_Recovering,
    CriticalState_Dying,
};

