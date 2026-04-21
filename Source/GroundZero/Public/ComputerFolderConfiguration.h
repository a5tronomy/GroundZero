#pragma once
#include "CoreMinimal.h"
#include "ComputerUIFolder.h"
#include "ComputerFolderConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FComputerFolderConfiguration {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FComputerFolderConfiguration_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FComputerUIFolder folder;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Row;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Column;
    
    GROUNDZERO_API FComputerFolderConfiguration();
};

