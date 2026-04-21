#include "GzAnimInstanceMonster.h"

UGzAnimInstanceMonster::UGzAnimInstanceMonster() {
    this->AIYawDirection = 0.00f;
    this->IsBountyEnemy = false;
    this->ExecutingEnemy = false;
    this->AdditiveFlinchAlpha = 0.00f;
    this->HeadScale = 1.00f;
    this->CriticalState = CriticalState_None;
    this->IsAlive = true;
    this->HasEnemy = false;
    this->AdditiveFlinchSpeed = 3.00f;
    this->CurrentMindControlSwell = 1.00f;
    this->WalkingSpeedMultiplier = 1.00f;
    this->LookingDirectionPitch = 0.00f;
    this->LookingDirectionYaw = 0.00f;
    this->DisableAnimationNotifies = false;
}

void UGzAnimInstanceMonster::SetRandomSequences() const {
}

void UGzAnimInstanceMonster::SetRandomSequence(TEnumAsByte<EEnemySequenceType> SequenceType) const {
}

void UGzAnimInstanceMonster::SetLookingDirection(const float Pitch, const float Yaw) {
}

UAnimSequence* UGzAnimInstanceMonster::GetRandomAISequence(TEnumAsByte<EEnemySequenceType> SequenceType) const {
    return NULL;
}

AGzEnemyAI* UGzAnimInstanceMonster::GetEnemyAIOwner() const {
    return NULL;
}


