#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMSCompSaveInterface.generated.h"

UINTERFACE(Blueprintable)
class UEMSCompSaveInterface : public UInterface {
    GENERATED_BODY()
};

class IEMSCompSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void ComponentPreSave();
    
    UFUNCTION(BlueprintNativeEvent)
    void ComponentLoaded();
    
};

