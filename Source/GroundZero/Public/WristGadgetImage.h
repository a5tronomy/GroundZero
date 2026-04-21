#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WristGadgetImage.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FWristGadgetImage {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWristGadgetImage_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ImageMetaData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* AnimatedImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor ImageTint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool NoTintAtAll;
    
    GROUNDZERO_API FWristGadgetImage();
};

