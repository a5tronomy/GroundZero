#pragma once
#include "CoreMinimal.h"
#include "EEnemyHitbox.generated.h"

UENUM()
enum EEnemyHitbox {
    HitBoxNone,
    HitBoxHead,
    HitBoxChest,
    HitBoxLeftArm,
    HitBoxRightArm,
    HitBoxStomach,
    HitBoxLeftLeg,
    HitBoxRightLeg,
    HitBoxWeakSpot1,
    HitBoxInvulnerable,
};

