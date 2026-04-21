#pragma once
#include "CoreMinimal.h"
#include "EMultiLevelSaveMethod.generated.h"

UENUM()
enum class EMultiLevelSaveMethod : uint8 {
    ML_Disabled,
    ML_Normal,
    ML_Stream,
    ML_Full,
};

