#include "GzAIControllerNpcHuman.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Templates/SubclassOf.h"

AGzAIControllerNpcHuman::AGzAIControllerNpcHuman(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->NextTargetSwitchTime = 0.00f;
    this->ChasingPlayer = false;
    this->FaceDirectionOfMovement = false;
    this->TrackingTarget = NULL;
    this->NextStatusUpdateTime = 0.00f;
    this->PatrolBlockTime = 0.00f;
    this->IsPatrolling = false;
    this->TimeUntilNextPatrolDestinationChange = 0.00f;
    this->PatrolTime = 0.00f;
    this->NextGrenadeThrowTime = 0.00f;
    this->NextGrenadeThrowCheckTime = 0.00f;
    this->NextBackUpTime = 0.00f;
    this->NextMeleeHitTime = 0.00f;
    this->EnemyLkpSet = false;
    this->LoseEnemyTime = 0.00f;
    this->EnemyCurrentlyVisible = false;
    this->NextEnemySpottedTime = 0.00f;
    this->NextHumanSpottedTime = 0.00f;
    this->CurrentlyInCombat = false;
    this->TimeSinceLastCombatEncounter = 0.00f;
    this->TimeToReloadAfterCombatEnds = 0.00f;
    this->EnemyTarget = NULL;
    this->MaximumDistanceForAllyToBeInSameRoom = 7000.00f;
    this->SightSense3 = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightSense3"));
    this->HearingSense3 = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingSense3"));
    this->SmoothFocusInterpSpeed = 30.00f;
    this->NextRetreatTime = 0.00f;
    this->AngleThresholdBeforeTurning = 70.00f;
    this->DistanceBeforeRetreat = 200.00f;
    this->AllowFiringPositionChecks = false;
    this->ProbeRadius = 150.00f;
    this->MaxProbeDistance = 300.00f;
    this->ProbeHeightOffset = 50.00f;
    this->RepositionInterval = 0.25f;
    this->NextRepositionCheckTime = 0.00f;
}

void AGzAIControllerNpcHuman::TryRetreatFromActor(const AActor* Actor, const float DistanceToRetreat) {
}

void AGzAIControllerNpcHuman::ThrowGrenade(TSubclassOf<AActor> GrenadeToThrow, FCharacterMontage ThrowAnimation, FVector Location, const float ZOffset, const float DelayBeforeRelease, const float Speed, const bool BlindThrow, TEnumAsByte<EHumanVoiceLine> VoiceLine) {
}

void AGzAIControllerNpcHuman::StopSpeaking() {
}

void AGzAIControllerNpcHuman::StartFollowingActor(AActor* ActorToFollow, const float AcceptanceRadius) {
}

void AGzAIControllerNpcHuman::SpeakLineDelayed(TEnumAsByte<EHumanVoiceLine> VoiceLine, const float Delay) const {
}

void AGzAIControllerNpcHuman::SpeakLine(TEnumAsByte<EHumanVoiceLine> VoiceLine) const {
}

void AGzAIControllerNpcHuman::SpawnThrownGrenade_Implementation(FHumanTaskThrowGrenade TaskInfo) {
}

void AGzAIControllerNpcHuman::SetTrackingTarget(AActor* Target) {
}

void AGzAIControllerNpcHuman::SetTemporaryFocus(FVector Location, const float duration, AActor* FocusActor) {
}

void AGzAIControllerNpcHuman::SetRunning(const bool Running) const {
}

void AGzAIControllerNpcHuman::SetFocusLocation(const FVector Location) {
}

void AGzAIControllerNpcHuman::SetEnemyTarget(AActor* Target, AActor* PreviousTarget, const bool ToldByAlly) {
}

void AGzAIControllerNpcHuman::ResetFocusStraightForward() {
}

void AGzAIControllerNpcHuman::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors) {
}

void AGzAIControllerNpcHuman::InternalThrowGrenade(FHumanTaskThrowGrenade TaskInfo) {
}

AActor* AGzAIControllerNpcHuman::GetEnemyTarget() {
    return NULL;
}

void AGzAIControllerNpcHuman::FaceTarget(AActor* ActorToFace, float ForTime) {
}

void AGzAIControllerNpcHuman::FaceLocation(const FVector LocationToFace, float ForTime) {
}

void AGzAIControllerNpcHuman::ClearTemporaryFocus() {
}

bool AGzAIControllerNpcHuman::CheckProjectilePathValidity_Implementation(FVector StartLocation, FVector EndLocation, float Speed, FVector& OutputVelocity) {
    return false;
}

void AGzAIControllerNpcHuman::CheckIfKilledEnemy(AActor* Enemy) {
}


