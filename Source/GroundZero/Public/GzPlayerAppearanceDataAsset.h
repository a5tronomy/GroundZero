#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerModelParameters.h"
#include "GzPlayerAppearanceDataAsset.generated.h"

UCLASS(BlueprintType)
class GROUNDZERO_API UGzPlayerAppearanceDataAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzPlayerAppearanceDataAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayerModelParameters PlayerModelParameters;
    
    UGzPlayerAppearanceDataAsset();

};

