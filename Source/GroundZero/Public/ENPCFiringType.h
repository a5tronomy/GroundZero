#pragma once
#include "CoreMinimal.h"
#include "ENPCFiringType.generated.h"

UENUM()
namespace ENPCFiringType {
    enum Type {
        SemiAuto,
        Burst,
        FullAuto,
    };
}

