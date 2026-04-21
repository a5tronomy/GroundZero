#pragma once
#include "CoreMinimal.h"
#include "EFileSaveMethod.generated.h"

UENUM()
enum class EFileSaveMethod : uint8 {
    FM_Desktop,
    FM_Console,
};

