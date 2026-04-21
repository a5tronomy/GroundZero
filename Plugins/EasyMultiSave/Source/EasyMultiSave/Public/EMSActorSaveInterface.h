#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMSActorSaveInterface.generated.h"

class UActorComponent;

UINTERFACE(Blueprintable)
class EASYMULTISAVE_API UEMSActorSaveInterface : public UInterface {
    GENERATED_BODY()
};

class EASYMULTISAVE_API IEMSActorSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void ComponentsToSave(TArray<UActorComponent*>& Components);
    
    UFUNCTION(BlueprintNativeEvent)
    void ActorSaved();
    
    UFUNCTION(BlueprintNativeEvent)
    void ActorPreSave();
    
    UFUNCTION(BlueprintNativeEvent)
    void ActorLoaded();
    
};

