#include "GzCameraSubsystem.h"

UGzCameraSubsystem::UGzCameraSubsystem() {
    this->bUseLoading = false;
    this->bInCutscene = false;
    this->PreviousCamera = NULL;
}

void UGzCameraSubsystem::SetInCutscene(bool bEnable) {
}

void UGzCameraSubsystem::LoadNearbyCameras(AGzPreRenderedCamera* CurrentCamera) {
}

TArray<FMovieSceneBindingProxy> UGzCameraSubsystem::GetSequenceBinding(UMovieSceneSequence* Sequence) {
    return TArray<FMovieSceneBindingProxy>();
}


