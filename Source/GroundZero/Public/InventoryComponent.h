#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInventoryDragAndDropResult.h"
#include "EInventorySortType.h"
#include "EItemTransferResult.h"
#include "HeldInventoryItem.h"
#include "InventoryComponent.generated.h"

class AGzCharacter;
class USoundWave;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UInventoryComponent_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FHeldInventoryItem> ItemsInSafe;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FHeldInventoryItem> InventoryItems;
    
    UPROPERTY(EditDefaultsOnly)
    USoundWave* PickUpItemSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundWave* PickUpKeyItemSound;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 MaxItemsInSafe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 MaxSlots;
    
    UPROPERTY()
    AGzCharacter* PlayerOwner;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryTakeItemOutOfSafe(const int32 SafeItemSlot);
    
    UFUNCTION(BlueprintCallable)
    bool TryPutItemInSafe(FHeldInventoryItem& Item, const int32 FromSlot);
    
    UFUNCTION(BlueprintCallable)
    EItemTransferResult TransferStandaloneItem(UPARAM(Ref) FHeldInventoryItem& Item, int32& TransferAmountRemaining, bool DontGoIntoSafe);
    
    UFUNCTION(BlueprintCallable)
    EItemTransferResult TransferItem(int32 SourceIndex, bool ComingFromSafe, FHeldInventoryItem& CustomSourceItem, int32& TransferAmountRemaining, bool DontGoIntoSafe);
    
    UFUNCTION(BlueprintCallable)
    void SwapSlots(const int32 SlotA, const int32 SlotB, bool SlotAIsSafeItem, bool SlotBIsSafeItem);
    
    UFUNCTION(BlueprintCallable)
    bool SwapInventoryItemToSafeItem(int32 InventoryIndex, int32 SafeIndex, bool IntoSafe);
    
    UFUNCTION(BlueprintCallable)
    void SortInventoryItems(const TEnumAsByte<EInventorySortType> SortType, const bool SafeItems, TArray<int32>& RearrangedIndices);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSlots(const int32 NewMaxSlots);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInSafe(int32 Slot, FName ItemName, int32 OverrideAmount);
    
    UFUNCTION(BlueprintCallable)
    bool SetDefenseSlotActive(const int32 Slot, const bool Active);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFlagFromSlot(const int32 BitMask, const int32 Slot, const bool SafeItem);
    
    UFUNCTION(BlueprintCallable)
    void RandomizeInventoryItems(const bool SafeItems, TArray<int32>& RearrangedIndices);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EInventoryDragAndDropResult> OnSlotDragAndDropped(int32 SlotA, int32 SlotB, bool SlotAIsSafeItem, bool SlotBIsSafeItem, int32& ChangedSlot);
    
    UFUNCTION(BlueprintPure)
    bool HasSilencerAttached(const int32 Slot, const bool SafeItem);
    
    UFUNCTION(BlueprintPure)
    bool HasScopeAttached(const int32 Slot, const bool SafeItem);
    
    UFUNCTION(BlueprintCallable)
    int32 HasRoomForExtraOfItem(FName ID, int32& SlotID);
    
    UFUNCTION(BlueprintCallable)
    bool HasItemFlag(const int32 Slot, int32 BitMask, bool SafeItem);
    
    UFUNCTION(BlueprintPure)
    bool HasCompensatorAttached(const int32 Slot, const bool SafeItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GiveNamedItem(const FString& ItemId, const int32 AmountOverride, bool SilentGive, int32 ItemFlagsOverride, const FString& DoNotGiveIfOwnedWeapon, bool AppendToBeginningHack, const bool ForceEquip);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetTotalAmountInAllSlotsForItem(const FName ItemId);
    
    UFUNCTION(BlueprintPure)
    bool GetSafeItemFromSlot(const int32 Slot, FHeldInventoryItem& Item);
    
    UFUNCTION(BlueprintPure)
    bool GetInventoryItemFromSlot(const int32 Slot, FHeldInventoryItem& Item);
    
    UFUNCTION(BlueprintPure)
    int32 FindEmptySlot() const;
    
    UFUNCTION(BlueprintPure)
    int32 FindEmptySafeSlot() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipDefenseSlot();
    
    UFUNCTION(BlueprintCallable)
    EItemTransferResult CreateItemInSafe(UPARAM(Ref) FHeldInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void ClearSlot(int32 Slot, bool All);
    
    UFUNCTION(BlueprintCallable)
    void ClearSafeSlot(int32 Slot, bool All);
    
};

