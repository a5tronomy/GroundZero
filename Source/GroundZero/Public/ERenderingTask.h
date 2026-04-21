#pragma once
#include "CoreMinimal.h"
#include "ERenderingTask.generated.h"

UENUM()
enum ERenderingTask {
    Waiting,
    HidingActors,
    ShowingActors,
    TakingScreenshot,
    TakingDepthScreenshot,
    EnablingFlashlightLighting,
    TakingFlashlightScreenshot,
    DisablingFlashlightLighting,
    EnablingLightningLighting,
    TakingLightningScreenshot,
    DisablingLightningLighting,
    TakingNormalMapScreenshot,
};

