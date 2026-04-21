#pragma once
#include "CoreMinimal.h"
#include "EPlayerDamageType.generated.h"

UENUM()
enum EPlayerDamageType {
    DamageTypeSmall,
    DamageTypeMedium,
    DamageTypeLarge,
    DamageTypeGrapple,
    DamageTypeSpecial,
    DamageTypeNoAnimation,
};

