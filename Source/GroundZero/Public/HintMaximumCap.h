#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HintMaximumCap.generated.h"

USTRUCT(BlueprintType)
struct FHintMaximumCap : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FHintMaximumCap_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString HintName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaximumTimesShown;
    
    GROUNDZERO_API FHintMaximumCap();
};

