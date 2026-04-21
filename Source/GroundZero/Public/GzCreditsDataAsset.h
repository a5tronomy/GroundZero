#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreditsSequenceData.h"
#include "GzCreditsDataAsset.generated.h"

UCLASS(BlueprintType)
class GROUNDZERO_API UGzCreditsDataAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzCreditsDataAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCreditsSequenceData> CreditsSequenceData;
    
    UGzCreditsDataAsset();

};

