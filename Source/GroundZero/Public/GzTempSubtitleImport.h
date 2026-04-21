#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GzTempSubtitleImport.generated.h"

USTRUCT(BlueprintType)
struct FGzTempSubtitleImport : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGzTempSubtitleImport_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Timecode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SubtitleKeyName;
    
    GROUNDZERO_API FGzTempSubtitleImport();
};

