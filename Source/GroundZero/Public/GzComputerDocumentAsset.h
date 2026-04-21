#pragma once
#include "CoreMinimal.h"
#include "GzComputerFileAsset.h"
#include "GzComputerDocumentAsset.generated.h"

UCLASS()
class GROUNDZERO_API UGzComputerDocumentAsset : public UGzComputerFileAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzComputerDocumentAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText FileContents;
    
    UGzComputerDocumentAsset();

};

