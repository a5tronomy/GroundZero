#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveSlotMetaData.generated.h"

USTRUCT(BlueprintType)
struct FSaveSlotMetaData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSaveSlotMetaData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TimesSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Difficulty;
    
    GROUNDZERO_API FSaveSlotMetaData();
};

