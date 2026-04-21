#pragma once
#include "CoreMinimal.h"
#include "EWeaponNotifyType.generated.h"

UENUM()
enum EWeaponNotifyType {
    EjectShell,
    HideMagazine,
    ShowMagazine,
    DropMagazine,
    MuzzleFlash,
    ThrowProjectile,
    FinishReload,
    ReloadInsertSingleBullet,
};

