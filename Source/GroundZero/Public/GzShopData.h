#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GzShopData.generated.h"

USTRUCT(BlueprintType)
struct FGzShopData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGzShopData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Cost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AmountForSale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString InventoryItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AmountOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString HideIfYouOwnThisItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ShowInDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsNewGamePlusItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsNewGamePlusAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsNewGamePlusAttachment;
    
    FGzShopData();
};

