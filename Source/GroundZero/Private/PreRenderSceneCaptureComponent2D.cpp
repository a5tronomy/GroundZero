#include "PreRenderSceneCaptureComponent2D.h"

UPreRenderSceneCaptureComponent2D::UPreRenderSceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AspectRatioAxisConstraint = AspectRatio_MaintainXFOV;
    this->AspectRatio = 1.78f;
    this->bConstrainAspectRatio = false;
    this->bOverrideAspectRatioAxisConstraint = false;
}


