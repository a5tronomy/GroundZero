#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GzDamageableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGzDamageableInterface : public UInterface {
    GENERATED_BODY()
};

class GROUNDZERO_API IGzDamageableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsUntargetable();
    
};

