#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimationType.generated.h"

UENUM()
enum EWeaponAnimationType {
    WeaponAnimation_Idle,
    WeaponAnimation_MoveStart,
    WeaponAnimation_MoveLoop,
    WeaponAnimation_MoveEnd,
};

