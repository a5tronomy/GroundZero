#include "EnemyAIGrapplingData.h"

FEnemyAIGrapplingData::FEnemyAIGrapplingData() {
    this->TeleportPlayerToMe = false;
    this->GrappleInstantlyKills = false;
    this->MinimumAttackLoops = 0;
    this->MaximumAttackLoops = 0;
    this->GrappleVocalLoop = NULL;
    this->GrappleVocalEnd = NULL;
    this->GrappleAttackLoopHitSound = NULL;
    this->GrappleForwardOffset = 0.00f;
    this->GrappleInterpolationSpeed = 0;
    this->DontGrappleAgainTime = 0.00f;
}

