#pragma once
#include "CoreMinimal.h"
#include "ComputerFileConfiguration.generated.h"

class UGzComputerFileAsset;

USTRUCT(BlueprintType)
struct FComputerFileConfiguration {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FComputerFileConfiguration_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGzComputerFileAsset* File;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Row;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Column;
    
    GROUNDZERO_API FComputerFileConfiguration();
};

