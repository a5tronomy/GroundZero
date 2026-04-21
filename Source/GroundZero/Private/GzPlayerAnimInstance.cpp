#include "GzPlayerAnimInstance.h"

UGzPlayerAnimInstance::UGzPlayerAnimInstance() {
    this->IsMindControlling = false;
    this->OutOfBreath = false;
    this->IsRappelling = false;
    this->PlayerLocomotionSpeedMultiplier = 1.00f;
    this->PlayerRunning = false;
    this->PlayerAiming = false;
    this->PlayerRidingZipline = false;
    this->PlayerRidingBoat = false;
    this->PlayerSliding = false;
    this->PlayerReloading = false;
    this->PlayerSqueezing = false;
    this->PlayerSqueezeSpeed = 0.00f;
    this->PlayerPushingRotatingObject = false;
    this->PlayerPushingShortObject = false;
    this->PlayerPushingObject = false;
    this->PlayerPulling = false;
    this->PlayerSwimming = false;
    this->PlayerPushingSpeed = 0.00f;
    this->PlayerYawDirection = 0.00f;
    this->PlayerBlocking = false;
    this->BlockStartTime = 0.00f;
    this->MasterMeshFollower = NULL;
    this->AnimationSwitchIdleBlockingTime = 0.00f;
}

void UGzPlayerAnimInstance::SetRappelling(const bool Rappelling, const float Delay) {
}

void UGzPlayerAnimInstance::SetMasterMeshFollower(USkeletalMeshComponent* Parent) {
}

void UGzPlayerAnimInstance::InternalSetRappelling(const bool Rappelling) {
}

float UGzPlayerAnimInstance::GetSideSpeed(bool Normalized) const {
    return 0.0f;
}

FWeaponAnimationData UGzPlayerAnimInstance::GetSequenceForWeaponAnimationType() const {
    return FWeaponAnimationData{};
}

AGzCharacter* UGzPlayerAnimInstance::GetPlayerOwner() const {
    return NULL;
}

float UGzPlayerAnimInstance::GetForwardSpeed(bool Normalized) const {
    return 0.0f;
}


