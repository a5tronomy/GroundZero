#pragma once
#include "CoreMinimal.h"
#include "MapItemOfInterest.h"
#include "SavedMap.generated.h"

class UGzMapWidget;

USTRUCT(BlueprintType)
struct FSavedMap {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSavedMap_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame)
    TSoftObjectPtr<UGzMapWidget> MapWidget;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FMapItemOfInterest> MapItemsOfInterest;
    
    GROUNDZERO_API FSavedMap();
};

