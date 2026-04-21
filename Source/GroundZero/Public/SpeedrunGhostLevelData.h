#pragma once
#include "CoreMinimal.h"
#include "SpeedrunGhostBreadcrumb.h"
#include "SpeedrunGhostLevelData.generated.h"

class ULevel;

USTRUCT(BlueprintType)
struct FSpeedrunGhostLevelData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSpeedrunGhostLevelData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TSoftObjectPtr<ULevel> Level;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FSpeedrunGhostBreadcrumb> Breadcrumbs;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float TimeInLevel;
    
    GROUNDZERO_API FSpeedrunGhostLevelData();
};

