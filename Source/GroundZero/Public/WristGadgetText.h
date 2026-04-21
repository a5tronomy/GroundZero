#pragma once
#include "CoreMinimal.h"
#include "WristGadgetText.generated.h"

USTRUCT(BlueprintType)
struct FWristGadgetText {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FWristGadgetText_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText TextMetaData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText TextBody;
    
    GROUNDZERO_API FWristGadgetText();
};

