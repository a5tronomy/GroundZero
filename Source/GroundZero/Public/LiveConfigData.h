#pragma once
#include "CoreMinimal.h"
#include "LiveConfigProperty.h"
#include "LiveConfigData.generated.h"

USTRUCT(BlueprintType)
struct FLiveConfigData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLiveConfigData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FLiveConfigProperty> Properties;
    
    GROUNDZERO_API FLiveConfigData();
};

