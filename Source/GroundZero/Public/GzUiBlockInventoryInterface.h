#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GzUiBlockInventoryInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGzUiBlockInventoryInterface : public UInterface {
    GENERATED_BODY()
};

class GROUNDZERO_API IGzUiBlockInventoryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPressedInventoryKey();
    
};

