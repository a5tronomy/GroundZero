#pragma once
#include "CoreMinimal.h"
#include "ENPCScriptedSequenceInterruptFlags.generated.h"

UENUM()
enum class ENPCScriptedSequenceInterruptFlags {
    None,
    InterruptedByDamage,
    InterruptedByPlayerNoise,
};

