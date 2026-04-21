#include "InventoryTableItem.h"

FInventoryTableItem::FInventoryTableItem() {
    this->ItemType = Ammo;
    this->Mesh = NULL;
    this->MaxCarry = 0;
    this->GiveAmount = 0;
    this->WeaponExhaustible = false;
    this->Exhaustible = false;
    this->PickupSound = NULL;
    this->InventoryIcon = NULL;
    this->AssociatedBlueprint = NULL;
    this->ItemFlags = 0;
    this->NumberOfUses = 0;
    this->DoorUnlockGroupUses = 0;
    this->InspectMesh = NULL;
    this->InspectStaticMesh = NULL;
    this->AdditionalInspectDistance = 0.00f;
    this->IsSeoYeonOnlyWeapon = false;
    this->IsEvanOnlyWeapon = false;
}

