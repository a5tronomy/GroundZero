#include "GzInventoryItemTrigger.h"

AGzInventoryItemTrigger::AGzInventoryItemTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractDisabled = false;
}

bool AGzInventoryItemTrigger::TryUnlockWithKey(AGzCharacter* Player, int32 InventorySlot, const FString& KeyToTry, TArray<FString> KeysRequiredToUnlock, FString& KeyUsed) const {
    return false;
}

void AGzInventoryItemTrigger::SetDisabled(const bool Disabled) {
}


