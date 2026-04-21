#pragma once
#include "CoreMinimal.h"
#include "ECreditsObjectType.h"
#include "CreditsSequenceData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCreditsSequenceData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCreditsSequenceData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECreditsObjectType> Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NameTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpacingHeight;
    
    GROUNDZERO_API FCreditsSequenceData();
};

