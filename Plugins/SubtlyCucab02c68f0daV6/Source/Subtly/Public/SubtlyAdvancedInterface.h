#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SubtlyAdvancedInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USubtlyAdvancedInterface : public UInterface {
    GENERATED_BODY()
};

class ISubtlyAdvancedInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UpdateSubtitleText(const FText& SubtitleText) PURE_VIRTUAL(UpdateSubtitleText,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetAutoUpdateText(bool Enable) PURE_VIRTUAL(SetAutoUpdateText,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAutoUpdateText() const PURE_VIRTUAL(GetAutoUpdateText, return false;);
    
};

