#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MapItemOfInterest.generated.h"

class AActor;
class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FMapItemOfInterest {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FMapItemOfInterest_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<AActor> ItemOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector2D IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FLinearColor Colour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UMaterialInterface* Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText TextToDisplay;
    
    GROUNDZERO_API FMapItemOfInterest();
};

