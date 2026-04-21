#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GzParryableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGzParryableInterface : public UInterface {
    GENERATED_BODY()
};

class GROUNDZERO_API IGzParryableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnParried();
    
};

