#include "GzCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GzAchievementManager.h"
#include "GzCharacterAppearance.h"
#include "GzCharacterSwitchComponent.h"
#include "GzLaserSightComponent.h"
#include "Gz_WeaponManagerComponent.h"
#include "InventoryComponent.h"

AGzCharacter::AGzCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveLockOnTarget = NULL;
    this->LockOnTargetTrackTime = 0.00f;
    this->HackCheatMakePlayerVeryFast = false;
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->MaxDistanceForRegisteringEnemiesAsPerceptible = 5000.00f;
    this->SightSense4 = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightSense4"));
    this->PauseCountdownTimer = false;
    this->DialogueHoldUseTime = 0.00f;
    this->ActiveHowitzer = NULL;
    this->ActiveBike = NULL;
    this->TimesJuicedGreen = 0;
    this->TimesJuicedRed = 0;
    this->TimesJuicedBlue = 0;
    this->HasLockedTargetThisAiming = false;
    this->HasBeenKilled = false;
    this->AbleToOpenInventory = false;
    this->InControlSelection = false;
    this->ControlSelectionObjective = ObjectiveSelectControls;
    this->RunToggleValue = false;
    this->AutoRunValue = false;
    this->ModernControlsDodgeYawDirection = 0.00f;
    this->InfectionLikelihoodMultiplier = 1.00f;
    this->InfectionPermanentLikelihoodBooster = 0.00f;
    this->InfectionTemporaryLikelihoodReductionTimer = 0.00f;
    this->InfectionTemporaryLikelihoodReductionMultiplier = 1.00f;
    this->InfectionImmunityTime = 0.00f;
    this->InfectionDamageReductionTime = 0.00f;
    this->InfectionDamageReductionTimeDamageMultiplier = 1.00f;
    this->InfectionDamageReductionMultiplier = 1.00f;
    this->DamageDefenceBoostTime = 0.00f;
    this->CurrentTemporaryDamageDefenceBoost = 0.00f;
    this->DamageDefence = 1.00f;
    this->OutOfBreathTime = 0.00f;
    this->StaminaRecoverBlockTime = 0.00f;
    this->InfiniteStaminaTime = 0.00f;
    this->CurrentAdrenalineBoostTimer = 0.00f;
    this->CurrentStamina = 100.00f;
    this->MinStaminaToDodge = 11.00f;
    this->MaxStamina = 100.00f;
    this->StaminaRecoveryTimeInSeconds = 3.00f;
    this->PlayerHasExploded = false;
    this->FlashlightBlendAlpha = 0.00f;
    this->IsCold = false;
    this->NextColdBreathTime = 0.00f;
    this->ApocalypseCrisisBeatenGame = false;
    this->ApocalypseCrisisRoundEnded = false;
    this->ApocalypseCrisisRoundStarted = false;
    this->ApocalypseCrisisTimerSeconds = 60.00f;
    this->ApocalypseCrisisActiveComboTime = 0.00f;
    this->ApocalypseCrisisComboAmount = 0;
    this->ActiveDialogueConversation = NULL;
    this->ActiveNPCTalker = NULL;
    this->InDialogueConversation = false;
    this->NextDialogueLineTime = 0.00f;
    this->ActiveSwimVolume = NULL;
    this->TemporaryInputIsDisabled = false;
    this->BlockMusicChanges = false;
    this->SeenShopIntro = false;
    this->LastUsedDoor = NULL;
    this->ActiveGasLeakVolume = NULL;
    this->ActiveTrainBossArmTrigger = NULL;
    this->SingleplayerGradeScoreTable = NULL;
    this->CharacterSwitchDataTable = NULL;
    this->DisabledScanner = false;
    this->UpgradedScanner = false;
    this->WaitingToDropFlare = false;
    this->HoldingFlare = false;
    this->FlareSwitchTime = 0.00f;
    this->AutoScanEnemies = false;
    this->IsRappelling = false;
    this->NextRappelDescendTime = 0.00f;
    this->RappelStartZHeight = 0.00f;
    this->InfectionPinPointShotShakeCurve = NULL;
    this->PinpointShotMeter = 0.00f;
    this->PinPointCycleHideTime = 0.00f;
    this->PinpointCycleTimeInSeconds = 2.00f;
    this->IFramesDuration = 0.00f;
    this->CurrentExpression = ExpressionNeutral;
    this->UsePressed = false;
    this->ActivePushableActor = NULL;
    this->ActiveSqueezeWall = NULL;
    this->ActiveZipLine = NULL;
    this->StoredActorUnderLaserSight = NULL;
    this->ModernControlsCameraReorientBlockTime = 0.00f;
    this->CameraReorientJoystickValue = 0.15f;
    this->CameraReorientUnblockJoystickValue = 0.65f;
    this->MinimumYawDeltaBeforeChangeDirection = 0.00f;
    this->YawInterpSpeed = 4.00f;
    this->CurrentMovementDirectionIndex = 0;
    this->CurrentDodgeDirection = 0.00f;
    this->CachedHeadingYaw = 0.00f;
    this->IsCurrentlyMoving = false;
    this->EnableModernControls = false;
    this->SlidingChecksActive = false;
    this->TimeBeforeBlockActive = 0.20f;
    this->BlockParryWindow = 0.50f;
    this->IsBlocking = false;
    this->BlockStartTime = 0.00f;
    this->DodgeAnimationActiveTime = 0.00f;
    this->DodgeActiveTime = 0.00f;
    this->CurrentHeadingYaw = 0.00f;
    this->DisableCameraSwitches = false;
    this->DisableCameraTriggers = false;
    this->CachedDeltaX = 0.00f;
    this->CachedDeltaY = 0.00f;
    this->EnableHints = true;
    this->PotentialExecutionCandiate = NULL;
    this->ActiveBoat = NULL;
    this->ActiveUfo = NULL;
    this->SeenDocumentTutorial = false;
    this->SeenPhoneTutorial = false;
    this->ActiveCCTVManager = NULL;
    this->ScanBodyTime = 0.00f;
    this->InLoadingTransition = false;
    this->CharacterIsFlying = false;
    this->IsUnderwater = false;
    this->IsSwimming = false;
    this->CharacterFlyingTime = 0.00f;
    this->FlyingWallHitDamage = 0.00f;
    this->CharacterHasHitWallWhenFlying = false;
    this->FlyingCharacterWallHitCheckTime = 0.00f;
    this->LastPressedUseTime = 0.00f;
    this->LastPressedUseTimeWhileAiming = 0.00f;
    this->InCallUsePressed = false;
    this->InCallLastPressedUseTime = 0.00f;
    this->SessionID = 0;
    this->EscapedGrapple = false;
    this->ActiveGrapplingEnemy = NULL;
    this->CurrentGrapplingState = GrapplingState_None;
    this->NextPoisonTick = 0.00f;
    this->NextVampireModeTick = 0.00f;
    this->NextGenomePointIncrementTime = 0.00f;
    this->GenomePointsQueuedToAdd = 0;
    this->GenomePoints = 0;
    this->ParryActiveTime = 0.00f;
    this->IncomingAttackingEnemy = NULL;
    this->ActiveCutscene = NULL;
    this->ActiveApocalypseCrisisIntroScene = NULL;
    this->PerformingMeleeAttackTime = 0.00f;
    this->ShowEcgTime = 0.00f;
    this->EcgAlpha = 0.00f;
    this->CurrentHealthStatus = 0;
    this->PlayerType = PlayerTypeSeoYeon;
    this->DisableExecutionCheck = false;
    this->CullLightsPerRoom = false;
    this->TimePerPoisonTick = 5.00f;
    this->CameraTriggerCheckRadius = 16.00f;
    this->PreciseCameraTriggerChecks = true;
    this->HealthToRemovePerPoisonTick = 5;
    this->IsInfected = false;
    this->ForceAlignedCinematicDeath = false;
    this->CinematicKiller = NULL;
    this->BlackWorld = false;
    this->ActiveMapSegment = NULL;
    this->TimeUntilCriticalAimTime = 1.00f;
    this->ThirdPersonModeEnabled = false;
    this->ActivePreRenderCamera = NULL;
    this->ActiveDoorForTransition = NULL;
    this->MindControlledAI = NULL;
    this->ActiveCameraTriggerBeforeMindControlledEnemy = NULL;
    this->HidePlayer = false;
    this->NextOneEightyDegreeTurnTime = 0.00f;
    this->CurrentMontagePriority = 0;
    this->CurrentMontagePlayingTime = 0.00f;
    this->ActiveElevatorGenerator = NULL;
    this->ActiveClawMachine = NULL;
    this->TempGodMode = false;
    this->TempNoTarget = false;
    this->ForceCrippleEnemies = false;
    this->ForceHeadPops = false;
    this->Notarget = false;
    this->GodMode = false;
    this->GoingThroughDoor = false;
    this->BuddhaMode = false;
    this->InfiniteAmmo = false;
    this->InfiniteReloads = false;
    this->EnemyWeAreAimingAt = NULL;
    this->TimeWeHaveBeenAimingAtEnemy = 0.00f;
    this->CameraTriggerCheck = CreateDefaultSubobject<UBoxComponent>(TEXT("CameraTriggerCheck"));
    this->WeaponHideDuration = 0.00f;
    this->CurrentBossTimer = 0.00f;
    this->TotalBossTimer = 0.00f;
    this->TotalBossesKilled = 0;
    this->BossTimerActive = false;
    this->BossTimerPaused = false;
    this->OnScreenTimerActive = false;
    this->GrappleEscapeTimerIncreasePerClick = 0.10f;
    this->DisableActivationOptimizations = false;
    this->GrappleEscapeTimerDecreaseMultiplier = 0.00f;
    this->GrappleEscapeTimer = 0.00f;
    this->BlackBarsEnabled = false;
    this->IsFalling = false;
    this->AimTurnSpeed = 50.00f;
    this->TurnSpeed = 100.00f;
    this->WalkSpeed = 100.00f;
    this->SprintSpeed = 180.00f;
    this->BikeSpeed = 0.00f;
    this->ClimbHeight = 105.00f;
    this->IsSprinting = false;
    this->SprintHeldTime = 0.00f;
    this->IsCriticalAiming = false;
    this->CriticalAimTime = 0.00f;
    this->TimeSpentAiming = 0.00f;
    this->IsAiming = false;
    this->NoMoreCriticalAimUntilHolster = false;
    this->StrafeWhenAiming = false;
    this->EyeLocation = CreateDefaultSubobject<USceneComponent>(TEXT("EyeLocation"));
    this->WeaponManager = CreateDefaultSubobject<UGz_WeaponManagerComponent>(TEXT("WeaponManager"));
    this->InventoryManager = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryManager"));
    this->CharacterAppearance = CreateDefaultSubobject<UGzCharacterAppearance>(TEXT("CharacterAppearance"));
    this->CharacterSwitcher = CreateDefaultSubobject<UGzCharacterSwitchComponent>(TEXT("CharacterSwitcher"));
    this->AchievementManager = CreateDefaultSubobject<UGzAchievementManager>(TEXT("AchievementManager"));
    this->LastSprintPressedTime = 0.00f;
    this->SprintToggleActive = false;
    this->AppearanceIndex = 0;
    this->ActivePropDataAssetIndex = 0;
    this->LaserSight = CreateDefaultSubobject<UGzLaserSightComponent>(TEXT("LaserSight"));
    this->ExpressionParameterCollection = NULL;
    this->ShadowRenderingMaterialCollection = NULL;
    this->HeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HeadMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->VocalSoundPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("VocalSoundPlayer"));
    this->TemporarySkeletalHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TemporarySkeletalHandMesh"));
    this->ActiveTemporaryHandMeshMontage = NULL;
    this->WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->MagazineMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MagazineMesh"));
    this->SilencerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SilencerMesh"));
    this->ScopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScopeMesh"));
    this->HeightToConsiderFalling = 40.00f;
    this->ShadowCaptureComponentRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ShadowCaptureComponentRoot"));
    this->ShadowCaptureComponentMover = CreateDefaultSubobject<USceneComponent>(TEXT("ShadowCaptureComponentMover"));
    this->ShadowCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ShadowCaptureComponent"));
    this->FirstPersonScopeSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("FirstPersonScopeSpringArm"));
    this->FirstPersonScopeCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("FirstPersonScopeCaptureComponent"));
    this->FootstepDataTable = NULL;
    this->HintsMaximumTable = NULL;
    this->LeftStep = false;
    this->FootstepWalkMixSound = NULL;
    this->FootstepRunMixSound = NULL;
    this->FlashlightSound = NULL;
    this->FlashlightOnSound = NULL;
    this->FlashlightOffSound = NULL;
    this->ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
    this->ExecutionCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ExecutionCamera"));
    this->NumberOfSaves = 0;
    this->PlayerDisabled = false;
    this->UseAutoAim = false;
    this->AutoAimSpeed = 2.00f;
    this->MaxHealth = 100.00f;
    this->Health = 0.00f;
    this->GlobalUseDisableTime = 0.00f;
    this->GlobalAttackDisableTime = 0.00f;
    this->ExecutionCandidate = NULL;
    this->ParryActiveWindow = 0.50f;
    this->TimeUntilCriticalAim = 0.50f;
    this->NextChokeTime = 0.00f;
    this->ActiveChokingVolume = NULL;
    this->ActiveHotAndColdVolume = NULL;
    this->OxygenLevel = 1.00f;
    this->InFirstPerson = false;
    this->SavingManually = false;
    this->WeaponAimPitch = 0.00f;
    this->MaxParryCounterAttacks = 0;
    this->TimeUntilGameOverDeathScreen = 5.00f;
    this->ActiveKeypad = NULL;
    this->DrawPerceptionDebugInfo = false;
    this->DrawWeaponDebugInfo = false;
    this->FlyingMeleeTime = 0.00f;
    this->ActiveCameraTrigger = NULL;
    this->ActivePreRenderCameraTrigger = NULL;
    this->QueuedDodgeDirection = 0;
    this->HoldingDodge = false;
    this->NextDodgeTime = 0.00f;
    this->InDodgeParryTime = 0.00f;
    this->CurrentDamageType = DamageTypeSmall;
    this->CurrentDamageDirection = DamageDirectionForward;
    this->BlockInsteadOfParry = false;
    this->BlockPreventTime = 0.00f;
    this->PickUpItemCandidate = NULL;
    this->InvulnerabilityTime = 0.00f;
    this->NextUseTime = 0.00f;
    this->NextMeleeTime = 0.00f;
    this->LockPlayerMovementTime = 0.00f;
    this->FoundSecretCoin = false;
    this->CriticalAimDrawTime = 0.00f;
    this->NumPenguinsWon = 0;
    this->StartWithFlashlightOn = false;
    this->FlashlightState = false;
    this->RootMotionRotationModeEnabled = false;
    this->PinpointShotReady = false;
    this->FollowAutoAimEnemyTime = 0.00f;
    this->PinPointShotRunningTime = 0.00f;
    this->PinPointShotRandomSeed = -41.72f;
    this->CannotChoosePathOnGamepadHack = false;
    this->HoldUseCutsceneSkipTime = 0.00f;
    this->TimeToHoldUseToSkipCutscenes = 0.50f;
    this->AwaitingUseReleaseToSkipCutscene = false;
    this->AutoAimCandidate = NULL;
    this->AutoAimCandidateEnvironment = NULL;
    this->NextCounterAttackTime = 0.00f;
    this->CounterAttackWindowTime = 0.00f;
    this->ForceCounterAttackWindowTime = 0.00f;
    this->NumberOfCounterAttacks = 0;
    this->NextPrimaryAttackTime = 0.00f;
    this->NextSecondaryAttackTime = 0.00f;
    this->LockOnViewConeHalfAngleDegrees = 30.00f;
    this->MaxAimingDistBeforeUseDistInsteadOfAngle = 1000.00f;
    this->ViewConeDotThreshold = 0.87f;
    this->InReload = false;
    this->ReloadTime = 0.00f;
    this->ForwardSpeed = 0.00f;
    this->SideSpeed = 0.00f;
    this->AnimationSwitchIdleBlockingTime = 0.00f;
    this->CameraTriggerCheck->SetupAttachment(RootComponent);
    this->ExecutionCamera->SetupAttachment(RootComponent);
    this->EyeLocation->SetupAttachment(RootComponent);
    this->FirstPersonScopeCaptureComponent->SetupAttachment(FirstPersonScopeSpringArm);
    this->FirstPersonScopeSpringArm->SetupAttachment(RootComponent);
    this->HeadMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->MagazineMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ScopeMesh->SetupAttachment(WeaponMesh);
    this->ShadowCaptureComponent->SetupAttachment(ShadowCaptureComponentMover);
    this->ShadowCaptureComponentMover->SetupAttachment(ShadowCaptureComponentRoot);
    this->ShadowCaptureComponentRoot->SetupAttachment(RootComponent);
    this->SilencerMesh->SetupAttachment(WeaponMesh);
    this->TemporarySkeletalHandMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ThirdPersonCamera->SetupAttachment(RootComponent);
    this->VocalSoundPlayer->SetupAttachment(RootComponent);
    this->WeaponMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}


void AGzCharacter::UseSyringe() {
}

void AGzCharacter::UseSafeCrackingExplosive() {
}

void AGzCharacter::UseCipher() {
}

void AGzCharacter::UnlockDoorGroup(const FString& DoorGroup) {
}

void AGzCharacter::TurnFlashlightOn(const bool NoSound) {
}

void AGzCharacter::TurnFlashlightOff(const bool NoSound) {
}

void AGzCharacter::TryDestroyBike() {
}

void AGzCharacter::TryDamagePlayer(const float Damage, TEnumAsByte<EPlayerDamageType> DamageType, AActor* Causer, USoundBase* ImpactSound, const bool SpawnBloodParticles, const FVector BloodLocation, UAnimMontage* CustomHurtAnimation, const float CustomHurtAnimationPriority, bool HideWeaponDuringHurtAnimation, const float InvulnerabilityDuration) {
}



void AGzCharacter::TriggerFlinchAnimation(FVector DamageLocation, TEnumAsByte<EPlayerDamageType> DamageType) const {
}

void AGzCharacter::ThrowFlare_Implementation() {
}

bool AGzCharacter::TeleportGzPlayer(const FVector Location, const FRotator Rotation, const bool DontOffsetPlayerHeight) {
    return false;
}

void AGzCharacter::TakeControlOfEnemy(AGzEnemyAI* EnemyAI) {
}

void AGzCharacter::SwitchPlayerModel(FModelChangeParameters NewModel) {
}

void AGzCharacter::SwapInventoryItem(const FName From, const FName To, const bool SilentGive, bool AppendToBeginningHack, const int32 AmountOverride, const bool ReplaceAllInstances) {
}

void AGzCharacter::SubtractFromInventoryAmount(int32 Slot, int32 Amount) {
}

void AGzCharacter::StopMoving(bool StopAiming) {
}

void AGzCharacter::StopIngameDialogue(const bool FireOnDialogueEnded) {
}

void AGzCharacter::StopControllingEnemyEnd() {
}

void AGzCharacter::StopBossTimer() {
}

void AGzCharacter::StartRappelling(const FVector& TeleportPosition, const FRotator& TeleportRotation, const FRappelData& RappelData) {
}

void AGzCharacter::StartPostCombatMusic(UMusicDataAsset* Music, const float FadeInTime) const {
}

void AGzCharacter::StartIngameDialogue(UGzIngameDialogueConversation* DialogueConversation) {
}

void AGzCharacter::StartBossTimer() {
}

void AGzCharacter::SpawnBloodPool() {
}


void AGzCharacter::SimulateGGGBug(const int32 TimesJuicedGreenAmount) {
}

void AGzCharacter::ShowWeaponVisible() const {
}

bool AGzCharacter::ShouldChoke() const {
    return false;
}

void AGzCharacter::SetWeaponHiddenDuration(const float duration) {
}

void AGzCharacter::SetWeaponHidden(const bool Hidden) const {
}

void AGzCharacter::SetupPlayerModel() {
}

void AGzCharacter::SetupItemsMarkedForDelete() {
}

void AGzCharacter::SetUnderwater(const bool Underwater) {
}

void AGzCharacter::SetThirdPersonModeEnabled(bool Enabled) {
}

void AGzCharacter::SetSwimming(const bool Swimming) {
}

void AGzCharacter::SetSprintEnabled(const bool Enabled) {
}

void AGzCharacter::SetSlidingChecksActive(const bool Active) {
}

void AGzCharacter::SetScannerUpgraded() {
}

void AGzCharacter::SetRootMotionRotationMode(const bool Enabled) {
}

void AGzCharacter::SetRidingBoat(const bool Riding) const {
}

void AGzCharacter::SetRichPresenceOnLoad() {
}

void AGzCharacter::SetPlayerSpeed(const float Side, const float Forward) {
}

void AGzCharacter::SetPlayerExpression(TEnumAsByte<EPlayerExpression> Expression, bool BlinkReset) {
}

void AGzCharacter::SetPlayerDisabled(bool Locked) {
}

void AGzCharacter::SetOnScreenTimer(const int32 Minutes, const int32 Seconds, const FString& ActorTagToFireAtZero, const FString& FunctionName, const float HoldOnZeroTime, const float FlashRedWhenTimeLessThan, const float FlashSpeed) {
}


void AGzCharacter::SetNextSecondaryAttackTime(const float Time) {
}

void AGzCharacter::SetNextPrimaryAttackTime(const float Time) {
}

void AGzCharacter::SetMapSegmentExplored(AGzMapSegmentEntity* Segment) {
}

void AGzCharacter::SetMapSegmentCompleted(AGzMapSegmentEntity* MapSegment, const bool IgnoreLinkedSegments) {
}

void AGzCharacter::SetLastUsedDoorEntrance(FLastUsedDoorEntrance EntranceData) {
}

void AGzCharacter::SetInventorySlotAmount(const int32 Slot, const int32 Amount) {
}

void AGzCharacter::SetInfected(bool Infected) {
}

void AGzCharacter::SetIFramesDuration(const float duration, const bool SetEvenIfLowerThanCurrent) {
}

void AGzCharacter::SetHoldingFlare(const bool IsHolding, const float ThrowAwayTime) {
}

void AGzCharacter::SetHealth(const float NewHealth) {
}

void AGzCharacter::SetForceCounterAttackWindowTime(const float Time) {
}

void AGzCharacter::SetCurrentLocation(FText Location, const bool ShowAnimationEvenIfAlreadyVisited, const bool MinorLocation, const bool ShowMinorLocationIfAlreadyVisited, bool NoAnimation) {
}

void AGzCharacter::SetCameraAsActiveCamera_Implementation(ACameraActor* Camera) {
}

void AGzCharacter::SetBossTimerPaused(const bool Paused) {
}

void AGzCharacter::SetBlocking(const bool bLock) {
}

void AGzCharacter::SetApocalypseCrisisTimer(const float Seconds) {
}

void AGzCharacter::SetActiveUfoPawn(AGzUfoPawn* Ufo) {
}

void AGzCharacter::SetActiveBoat(AGzDriveableBoat* Boat) {
}

void AGzCharacter::ScanObject_Implementation(AActor* Object) {
}

void AGzCharacter::ScanEnemyCorpse_Implementation(AGzEnemyAI* EnemyAI) {
}

void AGzCharacter::RunActivationOptimization() const {
}

void AGzCharacter::RotatePlayer(const FRotator& Rotation) {
}


void AGzCharacter::RemoveItemFromInventory(FName ID) {
}

void AGzCharacter::RemoveItemAmountFromInventory(const FString& ID, int32 Amount) {
}

void AGzCharacter::RemoveHealth(const float Amount, const bool NoKill, const bool EvenInGodMode) {
}

void AGzCharacter::RemoveAllItemInstances(const FName ItemId, const bool RemoveAllInventory, const bool RemoveAllSafe) {
}

void AGzCharacter::RegisterSeenItem(TSoftObjectPtr<AGzInventoryItem> Item) {
}

void AGzCharacter::RegisterMapItemOfInterest(FMapItemOfInterest ItemOfInterest, bool& DidRegister) {
}

void AGzCharacter::ReEquipWeaponAfterFlareDrop() {
}

void AGzCharacter::ReduceStamina(const float Amount, const float BlockRecoveryTime) {
}

void AGzCharacter::PlayVocalSound(TEnumAsByte<EVocalSoundType> SoundType, USoundBase* SoundOverride, const bool Force) {
}

float AGzCharacter::PlayMontageSequence(UAnimMontage* Montage, bool FreezePlayer, const int32 Priority, const float FreezeDurationMultiplier, const bool HideWeaponDuring, USkeletalMesh* TemporaryHandMesh, const FString& TempHandMeshSocket, const float StartTime) {
    return 0.0f;
}

void AGzCharacter::PlayInvincibleMontage(UAnimMontage* Montage, bool UseInterp, FTransform InterpTransform, const float InterpTime, bool DisableGravity, bool DisableCollisions, const bool HideWeapon, USkeletalMesh* TempHandMesh, const FString& TempHandMeshSocket, UAnimMontage* WeaponMontage) {
}

bool AGzCharacter::PlayerIsSliding() const {
    return false;
}

bool AGzCharacter::PlayerCanMove(const bool IgnoreCriticalAiming) const {
    return false;
}

bool AGzCharacter::PerformUseCheck(const bool CheckingUnlock, const int32 InventorySlot, const FString& KeyItem, bool ReleasingUse, bool PulseCheck) {
    return false;
}

void AGzCharacter::PerformPickUp() {
}



void AGzCharacter::Parry_Implementation() {
}

void AGzCharacter::OpenMap() {
}



void AGzCharacter::OnTakenControlOfEnemy_Implementation(AGzEnemyAI* Enemy, AGzPreRenderCameraTrigger* CameraTrigger) {
}






void AGzCharacter::OnSwappedInventoryItems_Implementation(const int32 From, const int32 To) {
}
























void AGzCharacter::OnPlayerKilled_Implementation(bool KilledByGrapple) {
}

void AGzCharacter::OnPlayerExploded_Implementation(bool ApocalypseCrisisExplosion) {
}

void AGzCharacter::OnPlayerEvictedScreenMessage(const int32 Index) {
}


void AGzCharacter::OnMeleeKickHitEnemy_Implementation() {
}


void AGzCharacter::OnIncrementedGenomePoints_Implementation(const int32 NewValue, const int32 OldValue) {
}









void AGzCharacter::OnGotNewItem_Implementation(FInventoryTableItem Item) {
}







void AGzCharacter::OnFlareBurntOut_Implementation() {
}




void AGzCharacter::OnEquippedFlare_Implementation() {
}



void AGzCharacter::OnDropFlare_Implementation(const bool PlayAnimation) {
}

void AGzCharacter::OnDodged() {
}

void AGzCharacter::OnDialogueStarted_Implementation() {
}

void AGzCharacter::OnDialogueEnded_Implementation() {
}


void AGzCharacter::OnColdBreath_Implementation() {
}


void AGzCharacter::OnClickedInventorySlot(const int32 Slot, bool& DidSomething, bool& DidHeal, bool& DrewWeapon, bool& UnlockedSomething, bool& DidHealPoison) {
}










void AGzCharacter::OnApocalypseCrisisComboReset_Implementation() {
}


void AGzCharacter::KillPlayer() {
}

bool AGzCharacter::ItemShouldBlink(AActor* Item, const float MaxDistance, float& OutAlpha, const FVector2D& BoxSize, FVector2D& ScreenLocation) const {
    return false;
}

bool AGzCharacter::IsInCall() const {
    return false;
}

bool AGzCharacter::IsCarryingHeavyWeapon() const {
    return false;
}

bool AGzCharacter::IsAlive() const {
    return false;
}

bool AGzCharacter::IsAimingThroughScope() const {
    return false;
}


bool AGzCharacter::InventoryIsFull() {
    return false;
}

void AGzCharacter::InventoryButtonReleased() {
}

void AGzCharacter::InventoryButtonPressed() {
}

void AGzCharacter::InterpolateTo(const FVector Location, const FRotator Rotation, const float Time, const bool UseLocationAsFeetPosition) {
}

bool AGzCharacter::InsertIntoSyringe(const int32 ItemIndex) {
    return false;
}


void AGzCharacter::InputLockOnToTarget() {
}

void AGzCharacter::InputAutoAimChangeTarget() {
}

bool AGzCharacter::InMovingCameraTrigger() const {
    return false;
}

bool AGzCharacter::HasScannedThisEnemy(const AGzEnemyAI* Enemy) const {
    return false;
}

ACharacter* AGzCharacter::HasScannableObjectNearby() {
    return NULL;
}

int32 AGzCharacter::HasRoomForExtraOfItem(FName ID, int32& SlotID) {
    return 0;
}

bool AGzCharacter::HasItemInInventoryOrSafe(FName ID) {
    return false;
}

bool AGzCharacter::HasItemInInventory(FName ID) {
    return false;
}

bool AGzCharacter::HasGodMode() const {
    return false;
}

void AGzCharacter::HandlePreRenderCameraTriggers() {
}

void AGzCharacter::HandleModernControlsMovement(const bool ForceFromDodge, const FVector2D ForceDirection) {
}

void AGzCharacter::GiveStamina(const float Amount) {
}

void AGzCharacter::GiveItemToPlayerOrSpawnAtFeet(const FName ItemName, const FString& DoNotGiveIfOwnedWeapon, bool& DidGiveGiveItem, bool ForceSpawnLocation, const FVector LocationToSpawnAt) {
}

UAnimMontage* AGzCharacter::GetWeaponParryMontage() {
    return NULL;
}

UGz_WeaponManagerComponent* AGzCharacter::GetWeaponManager() const {
    return NULL;
}

UAimOffsetBlendSpace1D* AGzCharacter::GetWeaponAimingBlendSpace() {
    return NULL;
}

AActor* AGzCharacter::GetTargetEnemy(float DeltaTime) {
    return NULL;
}

FVector2D AGzCharacter::GetStrafeSpeeds() {
    return FVector2D{};
}

UPlayerStatsManagerComponent* AGzCharacter::GetStatsComponent() {
    return NULL;
}

float AGzCharacter::GetStamina() const {
    return 0.0f;
}

USoundBase* AGzCharacter::GetSoundForVocalType_Implementation(EVocalSoundType SoundType) {
    return NULL;
}

float AGzCharacter::GetSideSpeedSafeNormalized() const {
    return 0.0f;
}

float AGzCharacter::GetSideSpeedSafe() const {
    return 0.0f;
}

float AGzCharacter::GetSideSpeed(bool Normalized) const {
    return 0.0f;
}

float AGzCharacter::GetScreenMessageAlpha(int32 MessageIndex, float FadeInTime) {
    return 0.0f;
}


float AGzCharacter::GetRunSpeedMultiplier() const {
    return 0.0f;
}

TArray<UFXSystemComponent*> AGzCharacter::GetParticleComponents() const {
    return TArray<UFXSystemComponent*>();
}

int32 AGzCharacter::GetNumberOfSafeCrackingExplosives() const {
    return 0;
}

int32 AGzCharacter::GetNumberOfCiphers() const {
    return 0;
}

int32 AGzCharacter::GetMaxSyringeCapacity() const {
    return 0;
}

void AGzCharacter::GetMapSegmentOffsets(AGzMapSegmentEntity* Segment, FVector ActorLocation, FVector2D CanvasLocation, FVector2D CanvasSize, float& OffsetX, float& OffsetY, float& OutPositionX, float& OutPositionY, AActor* ItemOverride) {
}

FText AGzCharacter::GetLocationFromInfo(FText NewLocation, FText MinorLocationIfNewLocationVisitedAlready, bool& IsMinorLocation, bool DoorMinorLocation) {
    return FText::GetEmpty();
}

float AGzCharacter::GetKnifeChargeAmount() const {
    return 0.0f;
}

int32 AGzCharacter::GetInventorySlotForInventoryID(const FString& ID) {
    return 0;
}

int32 AGzCharacter::GetInventorySlotAmount(int32 Slot) {
    return 0;
}

UInventoryComponent* AGzCharacter::GetInventoryManager() {
    return NULL;
}

FVector2D AGzCharacter::GetInputSensitivities_Implementation() {
    return FVector2D{};
}

TEnumAsByte<EHealthStatus> AGzCharacter::GetHealthStatus(TEnumAsByte<EHealthStatus>& PureHealthStatusWithoutInfection) const {
    return Fine;
}

float AGzCharacter::GetHealthRatio() const {
    return 0.0f;
}


float AGzCharacter::GetForwardSpeedSafeNormalized() const {
    return 0.0f;
}

float AGzCharacter::GetForwardSpeedSafe() const {
    return 0.0f;
}

float AGzCharacter::GetForwardSpeed(bool Normalized) const {
    return 0.0f;
}

FVector AGzCharacter::GetFootPosition() const {
    return FVector{};
}

FWeaponAnimationData AGzCharacter::GetFlareWeaponData_Implementation() {
    return FWeaponAnimationData{};
}

UGzCharacterSwitchComponent* AGzCharacter::GetCharacterSwitcher() const {
    return NULL;
}


UGzCharacterAppearance* AGzCharacter::GetCharacterAppearance() {
    return NULL;
}


AGzMapSegmentEntity* AGzCharacter::GetActiveMapSegment(FVector2D CanvasLocation, FVector2D CanvasSize, float& OffsetX, float& OffsetY, float& OutPositionX, float& OutPositionY) {
    return NULL;
}

UGzAchievementManager* AGzCharacter::GetAchievementManager() const {
    return NULL;
}

void AGzCharacter::GatherMapSegments() {
}

void AGzCharacter::GatherAllItemsInMap() {
}


bool AGzCharacter::FlashlightIsOn() const {
    return false;
}

void AGzCharacter::FinishExecutingEnemy() {
}

void AGzCharacter::ExplodePlayer(bool ApocalypseCrisisExplosion, bool ForceExplode) {
}

void AGzCharacter::ExplodeControlledEnemy() {
}

void AGzCharacter::ExecuteEnemy(AGzEnemyAI* EnemyAI) {
}

void AGzCharacter::EvictOldScreenMessages() {
}

void AGzCharacter::Dodge_Implementation(int32 Direction) {
}

void AGzCharacter::DieByCinematic(AActor* Killer, USkeletalMeshComponent* KillerMesh, UAnimMontage* PlayerDeathSequence, UAnimMontage* KillerKillSequence, bool ShowOnlyBlackWorld, float TimeUntilGameOverScreen, bool UseMeshTransform, const FVector AdditionalMeshLocation, const FRotator AdditionalMeshRotation, const FTransform ForceAdditionalPlayerTransform, const FTransform ForceAdditionalEnemyTransform, const bool ForceAlignment) {
}

void AGzCharacter::DeployWeapon(int32 SlotID) {
}

void AGzCharacter::DamagePlayer(const float Damage, TEnumAsByte<EPlayerDamageType> DamageType, AActor* Causer, USoundBase* ImpactSound, const bool SpawnBloodParticles, const FVector BloodLocation, UAnimMontage* CustomHurtAnimation, const float CustomHurtAnimationPriority, bool HideWeaponDuringHurtAnimation, const float InvulnerabilityDuration, const bool DoTryDamageInstead) {
}

void AGzCharacter::ClearShrineLevelTravelData() {
}

void AGzCharacter::ClearMapItemsOfInterest() {
}

void AGzCharacter::ChokeCough_Implementation() {
}

void AGzCharacter::CheckThrowAwayFlare() {
}

bool AGzCharacter::CanTakeDamage(AActor* DamageCauser) const {
    return false;
}

bool AGzCharacter::CanShowHint(const FString& HintName) {
    return false;
}

bool AGzCharacter::CanShowGrappleTimer() const {
    return false;
}

bool AGzCharacter::CanSeeActor(const AActor* Actor) const {
    return false;
}

bool AGzCharacter::CanRotatePlayer() const {
    return false;
}

bool AGzCharacter::CanParry() const {
    return false;
}

bool AGzCharacter::CanMindControlEnemy(AGzEnemyAI* EnemyAI) {
    return false;
}

bool AGzCharacter::CanDodge() {
    return false;
}

bool AGzCharacter::CanCounterAttack() const {
    return false;
}

void AGzCharacter::CancelBossTimer() {
}

int32 AGzCharacter::CalculateSinglePlayerGrade(const FString& RowName, const bool UseFakeData, const FTimespan FakeTime, const int32 FakeDamage, const int32 FakeSaves) {
    return 0;
}

void AGzCharacter::CalculateNormalizedPositionInMapSegmentByLocation(AGzMapSegmentEntity* Segment, const FVector Location, bool& InsideSegment, float& NormalizedX, float& NormalizedY) {
}

void AGzCharacter::CalculateNormalizedPositionInMapSegment(AGzMapSegmentEntity* Segment, const AActor* Actor, bool& InsideSegment, float& NormalizedX, float& NormalizedY) {
}

void AGzCharacter::CalculateModernControlsDodgeDirection() {
}

int32 AGzCharacter::CalculateApocalypseCrisisGrade(const int32 MaxBountyEnemies, const int32 MapLengthInCm, const int32 NumEnemiesInCampaign) {
    return 0;
}

void AGzCharacter::CachePlaythroughSaveInfo(UEMSObject* Object) {
}

void AGzCharacter::BuildVisibleTargets(const float DeltaTime) {
}

void AGzCharacter::BuildVisibleItems(const float DeltaTime) {
}

bool AGzCharacter::BPOnClickedKeyItemInInventory_Implementation(const int32& InventorySlot, const FString& KeyItem) {
    return false;
}

bool AGzCharacter::BPMovementIsBlocked_Implementation() {
    return false;
}

bool AGzCharacter::BPInputIsBlocked_Implementation() {
    return false;
}


void AGzCharacter::BlueprintExecuteEnemy_Implementation(AGzEnemyAI* EnemyAI) {
}

bool AGzCharacter::BlockCanParry() const {
    return false;
}

void AGzCharacter::Blink() {
}

void AGzCharacter::BeginPickUp_Implementation() {
}

bool AGzCharacter::AreModernControlsEnabled() const {
    return false;
}

void AGzCharacter::ArchiveDocument(UGzWristGadgetDataAsset* Document, const bool NoMessage) {
}

void AGzCharacter::ApplySavethroughSaveInfo(UEMSObject* Object) {
}

void AGzCharacter::ApplyLoadOut() {
}

void AGzCharacter::ApplyCharacterProp(const int32 Index) {
}

void AGzCharacter::AddToInventoryAmount(int32 Slot, int32 Amount) {
}

void AGzCharacter::AddScreenMessage(FName Message, float DisplayTime, FName AppendText, bool FreezeWorld, AGzPreRenderedCamera* CameraToView, bool IsInspectMessage, UObject* CallbackObject, FName FunctionName, bool IsYesNoMessage, UObject* YesCallbackObject, FName YesFunctionName, UObject* NoCallbackObject, FName NoFunctionName, AActor* CallingActor, bool AppendToBeginning, const bool AutoScroll, UGzWristGadgetDataAsset* ArchiveDocumentAfterReading, int32 MessageIndex, const FString& TextTableOverride) {
}

void AGzCharacter::AddHintSeen(const FString& HintName) {
}

void AGzCharacter::AddHealth(float Amount) {
}

void AGzCharacter::AddGenomePointsToCollection(int32 Amount) {
}

void AGzCharacter::ActivateCameraOnPlayerBP(USceneComponent* Camera, FViewTargetTransitionParams TransitionParams) {
}


