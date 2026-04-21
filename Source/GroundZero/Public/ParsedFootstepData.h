#pragma once
#include "CoreMinimal.h"
#include "ParsedFootstepData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FParsedFootstepData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FParsedFootstepData_Statics;
public:
    UPROPERTY()
    UDataTable* DataTable;
    
    GROUNDZERO_API FParsedFootstepData();
};

