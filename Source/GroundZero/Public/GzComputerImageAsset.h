#pragma once
#include "CoreMinimal.h"
#include "GzComputerFileAsset.h"
#include "GzComputerImageAsset.generated.h"

class UTexture2D;

UCLASS()
class GROUNDZERO_API UGzComputerImageAsset : public UGzComputerFileAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzComputerImageAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Image;
    
    UGzComputerImageAsset();

};

