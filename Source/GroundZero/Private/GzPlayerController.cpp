#include "GzPlayerController.h"

AGzPlayerController::AGzPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->InRealTimeMode = false;
    this->InThirdPersonMode = false;
}

void AGzPlayerController::ToggleThirdPersonMode() {
}

void AGzPlayerController::ToggleRealTimeMode() {
}

void AGzPlayerController::TogglePreRenderCulling(const bool Enabled) {
}

void AGzPlayerController::RegisterAllEnemiesAsPerceptible() const {
}


bool AGzPlayerController::IsInFrustum(const AActor* Actor) const {
    return false;
}

void AGzPlayerController::GetExpiredSeenActors(TArray<AActor*>& OutActors) const {
}

void AGzPlayerController::GetCurrentlySeenActors(TArray<AActor*>& OutActors) const {
}

bool AGzPlayerController::CanSeeActor(const AActor* Item) const {
    return false;
}


