#pragma once
#include "CoreMinimal.h"
#include "MessageLockData.generated.h"

USTRUCT(BlueprintType)
struct FMessageLockData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FMessageLockData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName InventoryItemRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MessageIndexIfItemOwned;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MessageIndexIfItemNotOwned;
    
    GROUNDZERO_API FMessageLockData();
};

