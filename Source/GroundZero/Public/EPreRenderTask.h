#pragma once
#include "CoreMinimal.h"
#include "EPreRenderTask.generated.h"

UENUM()
enum EPreRenderTask {
    PreRenderTaskWaiting,
    PreRenderTaskHidingActors,
    PreRenderTaskShowingActors,
    PreRenderTaskTakingColourScreenshot,
    PreRenderTaskTakingDepthScreenshot,
    PreRenderTaskTakingNormalScreenshot,
    PreRenderTaskTakingFlashlightScreenshot,
    PreRenderTaskTakingTranslucencyScreenshot,
    PreRenderTaskTakingLightningScreenshot,
    PreRenderTaskCreateMaterialInstance,
    PreRenderTaskDisableCullingVolumes,
    PreRenderTaskEnableCullingVolumes,
    PreRenderTaskDisableHeightFog,
    PreRenderTaskEnableHeightFog,
    PreRenderTaskCompressColourAndFlashlight,
    PreRenderTaskCopy,
};

