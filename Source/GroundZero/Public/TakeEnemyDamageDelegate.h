#pragma once
#include "CoreMinimal.h"
#include "EPlayerDamageDirection.h"
#include "EPlayerDamageType.h"
#include "TakeEnemyDamageDelegate.generated.h"

class AGzEnemyAI;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTakeEnemyDamage, AGzEnemyAI*, Damager, TEnumAsByte<EPlayerDamageDirection>, DamageDirection, TEnumAsByte<EPlayerDamageType>, DamageType);

