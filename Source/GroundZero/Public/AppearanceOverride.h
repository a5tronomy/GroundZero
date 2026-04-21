#pragma once
#include "CoreMinimal.h"
#include "PlayerModelParameters.h"
#include "AppearanceOverride.generated.h"

class UGzPlayerAppearanceDataAsset;

USTRUCT(BlueprintType)
struct FAppearanceOverride {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FAppearanceOverride_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzPlayerAppearanceDataAsset* AppearanceToOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayerModelParameters OverrideParameters;
    
    GROUNDZERO_API FAppearanceOverride();
};

