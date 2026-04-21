#pragma once
#include "CoreMinimal.h"
#include "SpawnLoadOutItem.generated.h"

USTRUCT(BlueprintType)
struct FSpawnLoadOutItem {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSpawnLoadOutItem_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AmountOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SilentGive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ItemFlagsOverride;
    
    GROUNDZERO_API FSpawnLoadOutItem();
};

