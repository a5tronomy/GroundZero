#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GzAutoAimInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGzAutoAimInterface : public UInterface {
    GENERATED_BODY()
};

class GROUNDZERO_API IGzAutoAimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseAutoAimLocationAsEyePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TreatAutoAimLogicAsAnEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OverrideAutoAimLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnvironmentProp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAutoAimLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceAllowTrackTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceAllowSwitchTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CannotBeAimedAt();
    
};

