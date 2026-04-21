#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.generated.h"

UENUM()
enum EInventoryItemType {
    Ammo,
    Weapon,
    Key,
    SaveModulator,
    HealthItem,
    HealthItemBooster,
    HealthItemAntibody,
    HealthItemHealthkit,
    HealthItemHealthkitBlue,
    WeaponAttachmentSilencer,
    WeaponAttachmentScope,
    SafeCrackingExplosive,
    Cipher,
    KnifeUpgradeAcid,
    KnifeUpgradeElectric,
    WeaponAttachmentCompensator,
    HealthItemAdrenaline,
    HealthItemGarlic,
};

