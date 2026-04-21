#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GzGlobalShopPrices.generated.h"

USTRUCT(BlueprintType)
struct FGzGlobalShopPrices : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGzGlobalShopPrices_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Cost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString FallbackItemIdIfOwnedAlready;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FallbackCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SellCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsNewGamePlusWeapon;
    
    FGzGlobalShopPrices();
};

