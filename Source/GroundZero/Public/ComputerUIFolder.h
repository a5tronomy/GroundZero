#pragma once
#include "CoreMinimal.h"
#include "ComputerFileConfiguration.h"
#include "ComputerUIFolder.generated.h"

USTRUCT(BlueprintType)
struct FComputerUIFolder {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FComputerUIFolder_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString FolderName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FComputerFileConfiguration> FolderFiles;
    
    GROUNDZERO_API FComputerUIFolder();
};

