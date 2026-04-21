#include "GznpcCharacter.h"
#include "Components/AudioComponent.h"

AGznpcCharacter::AGznpcCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsRappelling = false;
    this->MaxDistanceForRegisteringEnemiesAsPerceptible = 5000.00f;
    this->OverrideMinDistanceForViableTargets = 0.00f;
    this->CantBeGibbed = false;
    this->NoSemiAuto = false;
    this->OnlyFullAuto = false;
    this->IgnoreDeathForPacifistAchievement = false;
    this->IsManuallyControlled = false;
    this->AimSwitchBlockTime = 0.00f;
    this->CurrentAimingState = false;
    this->CanMoveAndShoot = false;
    this->VocalSoundPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("VocalSoundPlayer"));
    this->RootBoneTranslationCurveName = TEXT("root_translation_speed_Y");
    this->AwardedApocalypseCrisisPoints = false;
    this->ApocalypseCrisisSecondsBonus = 20.00f;
    this->ApocalypseCrisisBountyMultiplier = 0.00f;
    this->IsIgnited = false;
    this->MovementSpeed = 0.00f;
    this->DefaultMaxSpeed = 0.00f;
    this->ForceAllowPlayerKill = false;
    this->CanBeKilled = false;
    this->IsHostileToPlayer = false;
    this->NoExtractedMovementSpeed = false;
    this->HealthMultiplier = 1.00f;
    this->MaxHealth = 0.00f;
    this->Health = 0.00f;
    this->KeepGunOutDuringCombat = false;
    this->InScriptedSequence = false;
    this->ScriptedSequenceInterruptFlags = 0;
    this->ScriptedSequenceStarted = false;
    this->NextMeleeTime = 0.00f;
    this->MeleeDuration = 0.00f;
    this->NextFlinchTime = 0.00f;
    this->DefaultMovementMode = MOVE_None;
    this->ScriptedSequenceIdleAnimation = NULL;
    this->ScriptedSequenceActionAnimation = NULL;
    this->AllowAutoSmoothRotationSwitch = false;
    this->TakeDamageWhenPlayingScriptedSequence = false;
    this->FullyDisabled = false;
    this->AIDisabled = false;
    this->PlayerToFollow = NULL;
    this->DistanceForBurstFireSwitch = 1600.00f;
    this->DistanceBetweenFullAutoSwitch = 900.00f;
    this->DeathAnimMontage = NULL;
    this->MaxMagazine = 0;
    this->Magazine = 0;
    this->CurrentFiringMode = 0;
    this->IsAiming = false;
    this->ShotsRemaining = 0;
    this->NextShootTime = 0.00f;
    this->ReloadDuration = 0.00f;
    this->HasStartedShooting = false;
    this->ShootBlockTime = 0.00f;
    this->EnemyInSightThisTick = false;
    this->SwitchFiringModeBlockTime = 0.00f;
    this->TimeBetweenMelees = 0.00f;
    this->TimeBetweenMeleesIfShootDisabled = 3.00f;
    this->AimStartAnimation = NULL;
    this->AimStopAnimation = NULL;
    this->ReloadAnimation = NULL;
    this->ReloadEmptyAnimation = NULL;
    this->MeleeAnimation = NULL;
    this->FlinchAnimation = NULL;
    this->FiringModeSwitchAnimation = NULL;
    this->DistanceBeforeMelee = 0.00f;
    this->DamageForMelee = 0.00f;
    this->DrawMeleeDebug = false;
    this->DeathVocalSound = NULL;
    this->PainVocalSound = NULL;
    this->MeleeHitSound = NULL;
    this->DamageType = DamageAmountPoor;
    this->VocalSoundPlayer->SetupAttachment(RootComponent);
}

void AGznpcCharacter::SwitchFiringMode(int32 Mode) {
}


void AGznpcCharacter::SetupVariablesForLivingEnemy() {
}

void AGznpcCharacter::SetShootBlockTime(const float Time) {
}

void AGznpcCharacter::SetIsAiming(const bool Aiming) {
}

void AGznpcCharacter::SetCapsuleDynamicObstacleEnabled(const bool Enabled) const {
}

void AGznpcCharacter::PlaySound(USoundBase* Sound, bool Vocal) {
}

void AGznpcCharacter::PlayScriptedSequence() {
}

float AGznpcCharacter::PlayMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool StopAllMontages, const bool Force) {
    return 0.0f;
}



void AGznpcCharacter::OnNpcExploded_Implementation() {
}



void AGznpcCharacter::Killed() {
}

bool AGznpcCharacter::IsAlive() const {
    return false;
}




FRotator AGznpcCharacter::GetAngleToLookAtTarget() {
    return FRotator{};
}

void AGznpcCharacter::ExplodeNpc() {
}

bool AGznpcCharacter::DoesPathExist(const FVector& Location) const {
    return false;
}

bool AGznpcCharacter::CanVocalize() {
    return false;
}

void AGznpcCharacter::BuildVisibleTargets(const float DeltaTime) {
}


