#pragma once
#include "CoreMinimal.h"
#include "ShopTableDataPair.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FShopTableDataPair {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FShopTableDataPair_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* ShopTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* NewGamePlusShopTable;
    
    GROUNDZERO_API FShopTableDataPair();
};

