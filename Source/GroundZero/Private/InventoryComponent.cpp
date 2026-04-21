#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickUpItemSound = NULL;
    this->PickUpKeyItemSound = NULL;
    this->MaxItemsInSafe = 90;
    this->MaxSlots = 8;
    this->PlayerOwner = NULL;
}

bool UInventoryComponent::TryTakeItemOutOfSafe(const int32 SafeItemSlot) {
    return false;
}

bool UInventoryComponent::TryPutItemInSafe(FHeldInventoryItem& Item, const int32 FromSlot) {
    return false;
}

EItemTransferResult UInventoryComponent::TransferStandaloneItem(FHeldInventoryItem& Item, int32& TransferAmountRemaining, bool DontGoIntoSafe) {
    return EItemTransferResult::Inserted;
}

EItemTransferResult UInventoryComponent::TransferItem(int32 SourceIndex, bool ComingFromSafe, FHeldInventoryItem& CustomSourceItem, int32& TransferAmountRemaining, bool DontGoIntoSafe) {
    return EItemTransferResult::Inserted;
}

void UInventoryComponent::SwapSlots(const int32 SlotA, const int32 SlotB, bool SlotAIsSafeItem, bool SlotBIsSafeItem) {
}

bool UInventoryComponent::SwapInventoryItemToSafeItem(int32 InventoryIndex, int32 SafeIndex, bool IntoSafe) {
    return false;
}

void UInventoryComponent::SortInventoryItems(const TEnumAsByte<EInventorySortType> SortType, const bool SafeItems, TArray<int32>& RearrangedIndices) {
}

void UInventoryComponent::SetMaxSlots(const int32 NewMaxSlots) {
}

void UInventoryComponent::SetItemInSafe(int32 Slot, FName ItemName, int32 OverrideAmount) {
}

bool UInventoryComponent::SetDefenseSlotActive(const int32 Slot, const bool Active) {
    return false;
}

void UInventoryComponent::RemoveFlagFromSlot(const int32 BitMask, const int32 Slot, const bool SafeItem) {
}

void UInventoryComponent::RandomizeInventoryItems(const bool SafeItems, TArray<int32>& RearrangedIndices) {
}

TEnumAsByte<EInventoryDragAndDropResult> UInventoryComponent::OnSlotDragAndDropped(int32 SlotA, int32 SlotB, bool SlotAIsSafeItem, bool SlotBIsSafeItem, int32& ChangedSlot) {
    return NoResult;
}

bool UInventoryComponent::HasSilencerAttached(const int32 Slot, const bool SafeItem) {
    return false;
}

bool UInventoryComponent::HasScopeAttached(const int32 Slot, const bool SafeItem) {
    return false;
}

int32 UInventoryComponent::HasRoomForExtraOfItem(FName ID, int32& SlotID) {
    return 0;
}

bool UInventoryComponent::HasItemFlag(const int32 Slot, int32 BitMask, bool SafeItem) {
    return false;
}

bool UInventoryComponent::HasCompensatorAttached(const int32 Slot, const bool SafeItem) {
    return false;
}

bool UInventoryComponent::GiveNamedItem(const FString& ItemId, const int32 AmountOverride, bool SilentGive, int32 ItemFlagsOverride, const FString& DoNotGiveIfOwnedWeapon, bool AppendToBeginningHack, const bool ForceEquip) {
    return false;
}

int32 UInventoryComponent::GetTotalAmountInAllSlotsForItem(const FName ItemId) {
    return 0;
}

bool UInventoryComponent::GetSafeItemFromSlot(const int32 Slot, FHeldInventoryItem& Item) {
    return false;
}

bool UInventoryComponent::GetInventoryItemFromSlot(const int32 Slot, FHeldInventoryItem& Item) {
    return false;
}

int32 UInventoryComponent::FindEmptySlot() const {
    return 0;
}

int32 UInventoryComponent::FindEmptySafeSlot() const {
    return 0;
}

void UInventoryComponent::EquipDefenseSlot() {
}

EItemTransferResult UInventoryComponent::CreateItemInSafe(FHeldInventoryItem& Item) {
    return EItemTransferResult::Inserted;
}

void UInventoryComponent::ClearSlot(int32 Slot, bool All) {
}

void UInventoryComponent::ClearSafeSlot(int32 Slot, bool All) {
}


