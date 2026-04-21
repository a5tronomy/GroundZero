#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GzComputerFileAsset.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class GROUNDZERO_API UGzComputerFileAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzComputerFileAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Filename;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* CustomIcon;
    
    UGzComputerFileAsset();

};

