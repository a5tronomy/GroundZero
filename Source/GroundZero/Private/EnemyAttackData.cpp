#include "EnemyAttackData.h"

FEnemyAttackData::FEnemyAttackData() {
    this->AttackStartsLocked = false;
    this->PreAttackMontage = NULL;
    this->Montage = NULL;
    this->ForcedByTrigger = false;
    this->MustBeAtAttackLocation = false;
    this->MinimumDistanceToAttackLocation = 0.00f;
    this->OnlyWhenMindControlled = false;
    this->MindControlSecondaryAttack = false;
    this->MovingAttack = false;
    this->OnlyWhileMoving = false;
    this->AttackHitSound = NULL;
    this->CannotKill = false;
    this->Damage = 0;
    this->CooldownTime = 0.00f;
    this->AttackTimeOverride = 0.00f;
    this->MindControlAttackTime = 0.00f;
    this->ResetAnimationTranslator = false;
    this->OnlyWithActiveAnimationTranslatorIndex = 0;
    this->OnlyAgainstNpcs = false;
    this->HeightAttackFallbackIfPlayerTooHigh = false;
    this->MaximumZValueDifference = 0.00f;
    this->MinimumHealth = 0.00f;
    this->ClearDistanceAhead = 0.00f;
    this->CanAttackThroughWalls = false;
    this->MinimumAngleToTarget = 0.00f;
    this->CheckBehindActor = false;
    this->AttackTurnSpeedOverride = 0.00f;
    this->MinimumAttackDistance = 0;
    this->AttackDistance = 0;
    this->AttackWidth = 0;
    this->AttackForwardOffset = 0;
    this->PlayChance = 0;
    this->PoisonChance = 0;
    this->AttackFacePlayerTimeSeconds = 0.00f;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DrawDebugTime = 0.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->LaunchVictimOnHit = false;
    this->DamageWhenVictimHitWall = 0.00f;
    this->DamageType = DamageTypeSmall;
    this->PostAttackRetreatTimeInSeconds = 0.00f;
    this->AttackProjectileBlueprint = NULL;
    this->AttackProjectilePathMustBeValid = false;
    this->ProjectileSpeed = 0.00f;
    this->ProjectileRadius = 0.00f;
    this->GlobalProjectileCooldownTime = 0.00f;
    this->OverrideGlobalProjectileCooldown = false;
    this->ChanceMultiplier = 0.00f;
    this->FinalChanceCheck = 0;
    this->CinematicKillIfKillsPlayer = false;
}

