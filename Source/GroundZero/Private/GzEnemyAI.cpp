#include "GzEnemyAI.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"

AGzEnemyAI::AGzEnemyAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StimuliSourceComponent = NULL;
    this->ExplodeOnLand = false;
    this->ExplodeOnLandTimer = 0.00f;
    this->TimeToDeaggro = 0.00f;
    this->CanDeAggroAfterTime = false;
    this->DeaggroTimer = 0.00f;
    this->NoOptimizations = false;
    this->UseTimerTickOptimizations = false;
    this->InitialGagTimer = 0.00f;
    this->IgnoreDeathForPacifistAchievement = false;
    this->NewGamePlusOnly = false;
    this->RemovedDueToNewGamePlus = false;
    this->DebugThroughWallAttacks = false;
    this->CheckThroughWallAttackCooldown = 0.00f;
    this->IsInvisibleEnemy = false;
    this->HasBeenKilled = false;
    this->AcidBurnTime = 0.00f;
    this->NextAcidTickTime = 0.00f;
    this->ExecutionYawHack = 180.00f;
    this->ImpactPushbackMultiplier = 1.00f;
    this->TimePerAcidTick = 1.00f;
    this->DamagePerAcidTick = 5.00f;
    this->CanBeFrozen = false;
    this->FrozenDuration = 5.00f;
    this->FrozenOverlay = NULL;
    this->FrozenTime = 0.00f;
    this->IsFrozen = false;
    this->DesiredAnimationsPaused = false;
    this->ActiveAnimationTranslator = NULL;
    this->ActiveAnimationTranslatorIndex = -1;
    this->DontAttackBeginPlayTime = 2.00f;
    this->CurrentCrippleMultiplier = 1.00f;
    this->HasExploded = false;
    this->DisablePerceptionOptimizations = false;
    this->IsBossEnemy = false;
    this->ShowInDifficulty = 0;
    this->TimeInFrontOfPlayerDoingNothing = 0.00f;
    this->IsBountyEnemy = false;
    this->SliceOffHeadBlueprint = NULL;
    this->IsHeadless = false;
    this->ScriptedSequenceStarted = false;
    this->DebugMe = false;
    this->IgnorePathFindingChecksForAttacks = false;
    this->OnlyValidTargetIfGrapplingPlayer = false;
    this->ForceIntoExecution = false;
    this->InvincibleEnabled = false;
    this->ExecutingPlayer = false;
    this->AwardedApocalypseCrisisPoints = false;
    this->LastDamagedPlayerType = DamageTypeSmall;
    this->SecondaryDataConditionsExpired = false;
    this->ResetAggroOnPositionSet = false;
    this->ScriptedSequenceIdleAnimation = NULL;
    this->ScriptedSequenceActionAnimation = NULL;
    this->NoExtractedMovementSpeed = false;
    this->CantBeCrippled = false;
    this->AllowVocalizeWhenHidden = false;
    this->ForceChasePlayerTimeAfterScriptedSequence = 0.00f;
    this->InScriptedSequence = false;
    this->TakeDamageWhenPlayingScriptedSequence = false;
    this->CanVocalizeInScriptedSequence = false;
    this->ScriptedSequenceInterruptFlags = 0;
    this->CannotBeExploded = false;
    this->BuddhaMode = false;
    this->HiddenBeforeScriptedSequence = false;
    this->BuddhaModeInScriptedSequence = false;
    this->OverrideMaxHealth = 0.00f;
    this->IsIgnited = false;
    this->ScanBodyTime = 0.00f;
    this->DamageBeforeFlinch = -1.00f;
    this->CriticalRecoverTime = 0.00f;
    this->RotationLockTime = 0.00f;
    this->FlinchLockTime = 0.00f;
    this->CurrentAccumulatedDamage = 0.00f;
    this->HealthMultiplier = 1.00f;
    this->FullyDisabled = false;
    this->RemovedDueToDifficulty = false;
    this->KilledByBarrel = false;
    this->DefaultMovementMode = MOVE_None;
    this->GrappleInterpolationSpeed = 0.00f;
    this->DesiredGrappleMeshOffset = 0.00f;
    this->CurrentGrappleMeshOffset = 0.00f;
    this->ActiveMapSegment = NULL;
    this->PreviousGrapplingState = GrapplingState_None;
    this->GrapplingState = GrapplingState_None;
    this->NextGrappleTime = 0.00f;
    this->NextFlinchTime = 0.00f;
    this->StartingMeshOffset = 0.00f;
    this->EnemyRetreatTime = 0.00f;
    this->QueuedRetreatTime = 0.00f;
    this->DesiredGrapplingAttackLoops = 0;
    this->CurrentGrapplingAttackLoops = 0;
    this->GrappleVictim = NULL;
    this->ForceGrappleDetach = false;
    this->NextGrappleStateTime = 0.00f;
    this->NextDistanceAheadCheck = 0.00f;
    this->NextIdleSound = 0.00f;
    this->AttackFacePlayerTime = 0.00f;
    this->GrappleBlendBackTimeDelay = 0.00f;
    this->CriticalStateBlockTime = 0.00f;
    this->CrawlRecoverTime = 0.00f;
    this->InCrawlState = false;
    this->MindControlNextAttackTime = 0.00f;
    this->InActiveAttackTime = 0.00f;
    this->AngleToMovementTarget = 0.00f;
    this->UsesTriggerForceAttacks = false;
    this->DeadBurnOutTime = 6.00f;
    this->BurnDamagePerTick = 12.00f;
    this->BurnTickDelay = 0.25f;
    this->NextThreatenWalkCheckTime = 0.00f;
    this->NextThreatenTime = 0.00f;
    this->ExecuteWhenPlayerHealthLessThan = 0.00f;
    this->ThreatenCooldown = 15.00f;
    this->ThreatenWalkCheckFrequency = 1.00f;
    this->MinimumThreatenWalkDistance = 500.00f;
    this->ThreatenWalkChance = 25;
    this->OverrideCriticalHitMaxChance = 0;
    this->CannotBeDecapitated = false;
    this->MaxRetreatDistance = 500.00f;
    this->FootstepSound = NULL;
    this->FootstepRunningSound = NULL;
    this->ShotSounds = NULL;
    this->AlertSounds = NULL;
    this->NextAlertSound = 0.00f;
    this->WalkSpeedMultiplier = 1.00f;
    this->CurrentVocalTime = 0.00f;
    this->DontInterruptSelf = false;
    this->IdleSounds = NULL;
    this->PainSounds = NULL;
    this->DeathSounds = NULL;
    this->AttackSounds = NULL;
    this->NoIdleSoundsIfAggroed = false;
    this->PlayAttackSoundOnAttackStart = false;
    this->LastDamageInfo = NULL;
    this->HasBeenExecuted = false;
    this->CriticalState = CriticalState_None;
    this->IsPassive = false;
    this->NPCLookAtSocket = TEXT("DEF-Head");
    this->HeadPopChanceMultiplier = 1.00f;
    this->CannotDodgePlayer = false;
    this->AlternateAnimationData = NULL;
    this->VocalSoundPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("VocalSoundPlayer"));
    this->DefaultMaxSpeed = 0.00f;
    this->CrawlFallAnimationTime = 0.00f;
    this->WaitingToDetachFromGrapple = NULL;
    this->NextPainSound = 0.00f;
    this->StunnedTime = 0.00f;
    this->AutoToggleSmoothRotation = false;
    this->CanSprint = false;
    this->ForceTakeDamage = false;
    this->AIDisabled = false;
    this->Health = 0.00f;
    this->CurrentDamageAmount = DamageAmountPerfect;
    this->MindController = NULL;
    this->CurrentMindControlSwell = 0.00f;
    this->DesiredMindControlSwell = 0.00f;
    this->AIGuid = 0;
    this->IsAggroed = false;
    this->NoAggroOnEasyMode = false;
    this->AttackingCausesAggroRunning = false;
    this->DamageCausedAggroRunning = false;
    this->BackUpBlockTime = 0.00f;
    this->TimeAfterBackUpUntilNextBackUp = 10.00f;
    this->CanBeDecapitatedCloseQuarters = false;
    this->EnemyAIData = NULL;
    this->EnemyAIDataSecondary = NULL;
    this->EnemyCrawlAIDataSecondary = NULL;
    this->EnemyCrawlAIData = NULL;
    this->EyeLocation = CreateDefaultSubobject<USceneComponent>(TEXT("EyeLocation"));
    this->NextAdditiveFlinch = 0.00f;
    this->DeathAlpha = 0.00f;
    this->AlternateAnimationDataIndex = -1;
    this->RandomSequences.AddDefaulted(15);
    this->UsingSecondaryDataAsset = false;
    this->NextBurnTick = 0.00f;
    this->NextAttackTime = 0.00f;
    this->SwitchToSecondaryAnimationTime = 0.00f;
    this->HeadScale = 1.00f;
    this->LongestAttackDistance = 0;
    this->ActiveAttackDataIndex = -1;
    this->EyeLocation->SetupAttachment(RootComponent);
    this->VocalSoundPlayer->SetupAttachment(RootComponent);
}

void AGzEnemyAI::Stunned(bool MeleeKicked) {
}


void AGzEnemyAI::StopAggro() {
}

void AGzEnemyAI::SpawnBloodPool() {
}

void AGzEnemyAI::SetupVariablesForLivingEnemy() {
}

void AGzEnemyAI::SetSmoothRotationModeEnabled(const bool Enabled) {
}

void AGzEnemyAI::SetRotationLockTime(const float Time) {
}

void AGzEnemyAI::SetResetPositionAndLocation(const FVector& Location, const FRotator& Rotation, const bool UseAsFootPosition) {
}

void AGzEnemyAI::SetRandomSequences() {
}

void AGzEnemyAI::SetRandomSequence(TEnumAsByte<EEnemySequenceType> SequenceType) {
}

void AGzEnemyAI::SetMovementLockTime(const float Time) const {
}

void AGzEnemyAI::SetHeadScale(const float Scale) {
}

void AGzEnemyAI::SetFullyDisabled(const bool Disabled) {
}

void AGzEnemyAI::SetFlinchLockTime(const float Time) {
}

void AGzEnemyAI::SetCapsuleDynamicObstacleEnabled(const bool Enabled) const {
}

void AGzEnemyAI::SetAttackLocked(const bool Locked, const int32 AttackIndex) {
}

void AGzEnemyAI::SetAggroed() {
}

void AGzEnemyAI::SetActiveAnimationTranslator(const int32 Index, const bool PlayStartSequence, const bool PlayEndSequence) {
}

void AGzEnemyAI::ResetPosition() {
}

void AGzEnemyAI::PlaySound(USoundBase* Sound, bool Vocal, const float FadeInTime, const bool ForcePlay) {
}

void AGzEnemyAI::PlayScriptedSequence() {
}

float AGzEnemyAI::PlayMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool StopAllMontages, bool StopMovement, bool DisableAttacks, bool DisableRotation, bool DisableFlinches) {
    return 0.0f;
}

void AGzEnemyAI::PerformSpecificAttack(const int32 Index) {
}

bool AGzEnemyAI::PerformingKillingBlow() const {
    return false;
}

void AGzEnemyAI::PerformActiveBoneTraceAttack() {
}

void AGzEnemyAI::ParryStunned(const bool Kicked, UAnimMontage* CustomAnimation) {
}

void AGzEnemyAI::ParriedByPlayer(UAnimMontage* CustomFlinchAnimation) {
}

float AGzEnemyAI::OverrideHitboxDamageMultiplier_Implementation(EEnemyHitbox HitBox) {
    return 0.0f;
}










void AGzEnemyAI::OnHeadExplodeFallOverDead(AActor* WhoDitIt) {
}



void AGzEnemyAI::OnExecutePlayerFromAttack_Implementation(const AGzCharacter* Player) {
}

void AGzEnemyAI::OnEnemyExploded_Implementation() {
}





void AGzEnemyAI::LaunchEnemy(const FVector Direction) {
}

bool AGzEnemyAI::IsPointWithinFacingAngle(const FVector& Point, float MinAngleDegrees, float MaxAngleDegrees, bool bDrawDebug, float DebugDuration) {
    return false;
}

bool AGzEnemyAI::IsAlive() {
    return false;
}



bool AGzEnemyAI::HasSpaceFreeInFront_Implementation(FVector BoxDimensions, const float Distance, const bool MustIncludePlayer, FEnemyAttackData& AttackData) {
    return false;
}


float AGzEnemyAI::GetTurnSpeed() const {
    return 0.0f;
}

UAnimSequence* AGzEnemyAI::GetTranslatedSequence(UAnimSequence* From) const {
    return NULL;
}

UAnimMontage* AGzEnemyAI::GetTranslatedMontage(UAnimMontage* From) const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeWalk() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeStun() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeIdle() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeFlinchKicked() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeFlinch() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeFlashbanged() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCriticalStart() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCriticalRecover() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCriticalIdle() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCriticalExecuted() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCriticalDie() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCrawlGetUp() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCrawlFall() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceTypeCrawl() const {
    return NULL;
}

UAnimSequence* AGzEnemyAI::GetSequenceForSequenceType(TEnumAsByte<EEnemySequenceType> SequenceType) const {
    return NULL;
}

float AGzEnemyAI::GetRotationLockTime() const {
    return 0.0f;
}

UAnimSequence* AGzEnemyAI::GetRandomAISequence(TEnumAsByte<EEnemySequenceType> SequenceType) const {
    return NULL;
}

FEnemyAIAnimationData AGzEnemyAI::GetRandomAIAnimationData(const TEnumAsByte<EEnemySequenceType> SequenceType) const {
    return FEnemyAIAnimationData{};
}

TEnumAsByte<EMaximumDamageAmount> AGzEnemyAI::GetMostDamagedAmount() {
    return DamageAmountPoor;
}

float AGzEnemyAI::GetFlinchLockTime() const {
    return 0.0f;
}

FVector AGzEnemyAI::GetAutoAimLocation_Implementation() const {
    return FVector{};
}

int32 AGzEnemyAI::GetAIGuid() const {
    return 0;
}

void AGzEnemyAI::Freeze() {
}

void AGzEnemyAI::ForceGrappleStop() {
}

void AGzEnemyAI::ForceEnemyRetreat(const float Time, const FVector Location) {
}

void AGzEnemyAI::ForceChasePlayer(const float LoseTime) const {
}

void AGzEnemyAI::Flinch(const bool Additive) {
}

void AGzEnemyAI::ExplodeHead(AActor* WhoDidIt, const bool SliceHeadOff) {
}

void AGzEnemyAI::ExplodeEnemy(AActor* WhoDidIt) {
}

void AGzEnemyAI::EnemyRetreat() {
}

void AGzEnemyAI::EndActiveBoneTraceAttack() {
}

void AGzEnemyAI::DrawDebugConeFan(float MinAngleDegrees, float MaxAngleDegrees, float Radius, int32 Segments, FColor LineColor, float duration) {
}

bool AGzEnemyAI::DoesPathExist(const FVector& Location) const {
    return false;
}

void AGzEnemyAI::DifficultyModeCheck() {
}

void AGzEnemyAI::ClearActiveAnimationTranslator() {
}

bool AGzEnemyAI::CheckProjectilePathValidity_Implementation(FVector StartLocation, FVector EndLocation, FEnemyAttackData AttackData, FVector& OutputVelocity) {
    return false;
}


bool AGzEnemyAI::CanVocalize() {
    return false;
}

bool AGzEnemyAI::CannotBeTargeted_Implementation() {
    return false;
}

void AGzEnemyAI::BecomeVisibleAfterSpawn() {
}

void AGzEnemyAI::AddDamage(TEnumAsByte<EMaximumDamageAmount> DamageType, float Amount) {
}


