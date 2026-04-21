#pragma once
#include "CoreMinimal.h"
#include "EScriptedSequenceInterruptFlags.generated.h"

UENUM()
enum class EScriptedSequenceInterruptFlags {
    None,
    InterruptedByDamage,
    InterruptedByPlayerNoise,
};

