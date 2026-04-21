#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GzEventDataTable.generated.h"

USTRUCT(BlueprintType)
struct FGzEventDataTable : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGzEventDataTable_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString Value;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Description;
    
    GROUNDZERO_API FGzEventDataTable();
};

