#pragma once
#include "CoreMinimal.h"
#include "EHealthStatus.generated.h"

UENUM()
enum EHealthStatus {
    Fine,
    Caution,
    OrangeCaution,
    Danger,
    Infection,
    Dead,
};

