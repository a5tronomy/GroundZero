#include "Gz_WeaponManagerComponent.h"

UGz_WeaponManagerComponent::UGz_WeaponManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveMeleeAttackAnimation = NULL;
    this->CurrentShotIsCriticalShot = false;
    this->CriticalShotNextAttackTime = 1.00f;
    this->KnifeChargeAmount = 0.00f;
    this->KnifeChargedFullyState = false;
    this->NumberOfSwordAttacks = 0;
    this->ActiveReloadMontage = NULL;
    this->DesiredBarrelSpinSpeed = 0.00f;
    this->CurrentBarrelSpinSpeed = 0.00f;
    this->NumShotsWaitingToShoot = 0;
    this->RandomAnimationNameIndex = 0;
    this->InSingleReload = false;
    this->NextFidgetSequence = 0.00f;
    this->CanFidget = false;
    this->InSecondaryStance = false;
    this->HasPerformedInitialAttack = false;
    this->AttackSequenceIndex = 0;
    this->ActivePlayerFidget = NULL;
    this->ActiveWeaponFidget = NULL;
    this->ActiveFidgetSoundEffect = NULL;
    this->WaitingAnimationMontageTime = 0.00f;
    this->CriticalShotSound = NULL;
    this->WeaponAnimationDataTable = NULL;
    this->WeaponOwner = NULL;
    this->SpinUpState = false;
    this->ResetHasPerformedInitialAttackTime = 0.00f;
    this->SilencerMesh = NULL;
    this->ScopeMesh = NULL;
    this->CompensatorMesh = NULL;
    this->WeaponDataTable = NULL;
    this->LastShotTime = 0.00f;
    this->ShotStartTime = 0.00f;
}

bool UGz_WeaponManagerComponent::WeaponHasInfiniteAmmo() const {
    return false;
}

void UGz_WeaponManagerComponent::ShootHighNoonVictim() {
}

void UGz_WeaponManagerComponent::SetRandomAnimationNameIndex(const bool InstallData) {
}

void UGz_WeaponManagerComponent::SetCustomAnimationNameIndex(int32 Index) {
}

void UGz_WeaponManagerComponent::PopulateWeaponData() {
}

void UGz_WeaponManagerComponent::PlayShootLoop() const {
}

float UGz_WeaponManagerComponent::PlayMontage(UAnimMontage* PlayerMontage, UAnimMontage* WeaponMontage, const int32 PlayerMontagePriority) const {
    return 0.0f;
}

bool UGz_WeaponManagerComponent::HasInfiniteReloads() const {
    return false;
}

bool UGz_WeaponManagerComponent::GetWeaponInfoForWeapon(const FName ID, int32& MagazineCount, int32& SpareAmmo, bool& InfiniteAmmo) const {
    return false;
}

int32 UGz_WeaponManagerComponent::GetMagazineCount() const {
    return 0;
}

void UGz_WeaponManagerComponent::FireGun() {
}

void UGz_WeaponManagerComponent::FireFlamethrower() {
}

void UGz_WeaponManagerComponent::FinishReload() {
}

void UGz_WeaponManagerComponent::FaceHighNoonEnemy(const float InterpTime) {
}

void UGz_WeaponManagerComponent::ExecuteHighNoonVictims() {
}

void UGz_WeaponManagerComponent::DrawWeapon(FName ID, const int32 InventorySlot) {
}

void UGz_WeaponManagerComponent::CheckAttachmentMeshes() const {
}

void UGz_WeaponManagerComponent::BeginMinigunShooting() {
}


