#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FSaveSlotInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSaveSlotInfo_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadOnly)
    FName Level;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> Players;
    
    EASYMULTISAVE_API FSaveSlotInfo();
};

