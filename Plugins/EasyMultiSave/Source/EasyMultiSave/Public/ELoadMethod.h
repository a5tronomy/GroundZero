#pragma once
#include "CoreMinimal.h"
#include "ELoadMethod.generated.h"

UENUM()
enum class ELoadMethod : uint8 {
    LM_Default,
    LM_Deferred,
    LM_Thread,
};

