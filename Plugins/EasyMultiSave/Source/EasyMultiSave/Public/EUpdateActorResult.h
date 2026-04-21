#pragma once
#include "CoreMinimal.h"
#include "EUpdateActorResult.generated.h"

UENUM()
enum class EUpdateActorResult {
    RES_Success,
    RES_Skip,
    RES_ShouldSpawnNewActor,
};

