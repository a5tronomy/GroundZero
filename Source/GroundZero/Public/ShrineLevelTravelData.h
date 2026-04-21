#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShrineLevelTravelData.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FShrineLevelTravelData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FShrineLevelTravelData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool ShrineDataSet;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FTransform OutputTransform;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TSoftObjectPtr<UWorld> LevelToReturnTo;
    
    GROUNDZERO_API FShrineLevelTravelData();
};

