#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GzMonitorInfo.generated.h"

USTRUCT(BlueprintType)
struct FGzMonitorInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGzMonitorInfo_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MonitorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint MaxResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PrimaryMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ActiveMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    GROUNDZERO_API FGzMonitorInfo();
};

