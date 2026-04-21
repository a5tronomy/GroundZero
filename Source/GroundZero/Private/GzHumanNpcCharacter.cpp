#include "GzHumanNpcCharacter.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGzHumanNpcCharacter::AGzHumanNpcCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoExtractedMovementSpeed = false;
    this->MovementSpeed = 0.00f;
    this->TimeWithActiveHostile = 0.00f;
    this->AllowCinematicKill = false;
    this->IgnoreDeathForPacifistAchievement = false;
    this->NewGamePlusOnly = false;
    this->RemovedDueToNewGamePlus = false;
    this->DefaultMovementMode = MOVE_None;
    this->AlwaysRunWhenChasingEnemy = false;
    this->DesiredAnimationsPaused = false;
    this->InCinematicKillMode = false;
    this->FullyDisabled = false;
    this->ShowInDifficulty = 0;
    this->RemovedDueToDifficulty = false;
    this->ScanBodyTime = 0.00f;
    this->CurrentDamageAmount = DamageAmountPerfect;
    this->AIGuid = 0;
    this->MovementDisabledTime = 0.00f;
    this->CurrentTimeWithActiveHostileBeforeGrenadeThrow = 3.04f;
    this->MeleeDuration = 0.00f;
    this->NextReloadTime = 0.00f;
    this->ActorWhoLastDamagedMe = NULL;
    this->InReload = false;
    this->NextPainSoundTime = 0.00f;
    this->Health = 0.00f;
    this->NumberOfQueuedShotsRemaining = 0;
    this->NextShootTime = 0.00f;
    this->Magazine = 0;
    this->EyeLocation = CreateDefaultSubobject<USceneComponent>(TEXT("EyeLocation"));
    this->WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->BloodParticle = NULL;
    this->ActiveMeleeTrackTime = 0.00f;
    this->MeleeTrackTarget = NULL;
    this->MeleeTrackingTime = 0.00f;
    this->MeleeDamage = 25.00f;
    this->GrenadeThrowChance = 10;
    this->PhysicalBulletClass = NULL;
    this->ShootDelayWhenSpottedEnemy = 0.00f;
    this->MagazineCapacity = 30;
    this->MaxHealth = 100.00f;
    this->MinimumMeleeDistance = 150.00f;
    this->TimeBetweenMeleeAttacks = 8.00f;
    this->IsHostileCharacter = false;
    this->IsRunning = false;
    this->DistanceBeforeBackingAwayFromEnemy = 300.00f;
    this->WalkSpeed = 500.00f;
    this->RunSpeed = 700.00f;
    this->WalkWhenNearFollowingActor = true;
    this->MinimumDistanceToWalkWhenFollowingActor = 500.00f;
    this->DefaultMaxSpeed = 0.00f;
    this->HumanType = BlackOps;
    this->UseAlternateVoiceLine = false;
    this->VocalSoundPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("VocalSoundPlayer"));
    this->EyeLocation->SetupAttachment(RootComponent);
    this->VocalSoundPlayer->SetupAttachment(RootComponent);
    this->WeaponMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AGzHumanNpcCharacter::StopSpeaking() const {
}

void AGzHumanNpcCharacter::StopShooting() {
}

void AGzHumanNpcCharacter::StartReloadWeapon() {
}

void AGzHumanNpcCharacter::SpeakLineDelayed(EHumanVoiceLine VoiceLine, const float Delay) {
}

void AGzHumanNpcCharacter::SpeakLine_Implementation(EHumanVoiceLine VoiceLine) {
}

void AGzHumanNpcCharacter::ShootWeapon() {
}

void AGzHumanNpcCharacter::SetTemporaryFocus(FVector Location, const float duration) const {
}

void AGzHumanNpcCharacter::SetRunning(const bool Running) {
}

void AGzHumanNpcCharacter::SetResetPositionAndLocation(const FVector& Location, const FRotator& Rotation, const bool UseAsFootPosition) {
}

void AGzHumanNpcCharacter::SetFullyDisabled(const bool Disabled) {
}

float AGzHumanNpcCharacter::PlayRandomCharacterMontage(TArray<FCharacterMontage> Montages, bool ShouldFreezeMovement) {
    return 0.0f;
}

float AGzHumanNpcCharacter::PlayMontage(UAnimMontage* Montage, bool ShouldFreezeMovement) {
    return 0.0f;
}

float AGzHumanNpcCharacter::PlayCharacterMontage(FCharacterMontage Montage, bool ShouldFreezeMovement) {
    return 0.0f;
}



void AGzHumanNpcCharacter::OnNpcExploded_Implementation() {
}



TEnumAsByte<EMaximumDamageAmount> AGzHumanNpcCharacter::GetMostDamagedAmount() {
    return DamageAmountPoor;
}

bool AGzHumanNpcCharacter::GetIsAlive() const {
    return false;
}

int32 AGzHumanNpcCharacter::GetAIGuid() const {
    return 0;
}

void AGzHumanNpcCharacter::FreezeMovement(const float duration, bool DurationCantBeLowerThanCurrent) {
}

void AGzHumanNpcCharacter::FinishReloadWeapon() {
}

void AGzHumanNpcCharacter::ExplodeNpc(const AActor* WhoDidIt) {
}

void AGzHumanNpcCharacter::DifficultyModeCheck() {
}

void AGzHumanNpcCharacter::ClearTemporaryFocus() const {
}


bool AGzHumanNpcCharacter::CanThrowGrenade() const {
    return false;
}

void AGzHumanNpcCharacter::AddDamage(TEnumAsByte<EMaximumDamageAmount> DamageType, float Amount) {
}


