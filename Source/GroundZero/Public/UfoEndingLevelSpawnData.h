#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UfoEndingLevelSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FUfoEndingLevelSpawnData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FUfoEndingLevelSpawnData_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    FString Letter;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    GROUNDZERO_API FUfoEndingLevelSpawnData();
};

