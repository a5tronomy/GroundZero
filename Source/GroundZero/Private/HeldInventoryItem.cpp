#include "HeldInventoryItem.h"

FHeldInventoryItem::FHeldInventoryItem() {
    this->ItemAmount = 0;
    this->ItemType = Ammo;
    this->ItemFlags = 0;
    this->TimesUsed = 0;
    this->IsDefenseSlot = false;
    this->MarkedForDelete = false;
}

