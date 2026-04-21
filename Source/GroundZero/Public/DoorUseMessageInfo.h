#pragma once
#include "CoreMinimal.h"
#include "DoorUseMessageInfo.generated.h"

class AGzPreRenderedCamera;

USTRUCT(BlueprintType)
struct FDoorUseMessageInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FDoorUseMessageInfo_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MessageToDisplay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DisplayWhenUsesLessThanOrEqualTo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraToView;
    
    GROUNDZERO_API FDoorUseMessageInfo();
};

