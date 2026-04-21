#pragma once
#include "CoreMinimal.h"
#include "RawObjectSaveData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FRawObjectSaveData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FRawObjectSaveData_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite)
    FString ID;
    
    EASYMULTISAVE_API FRawObjectSaveData();
};

