#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "HeldInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FHeldInventoryItem {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FHeldInventoryItem_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName ItemIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ItemAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TEnumAsByte<EInventoryItemType> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ItemFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 TimesUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool IsDefenseSlot;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool MarkedForDelete;
    
    GROUNDZERO_API FHeldInventoryItem();
};

