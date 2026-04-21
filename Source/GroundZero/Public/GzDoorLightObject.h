#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzRenderInterface.h"
#include "GzDoorLightObject.generated.h"

UCLASS()
class GROUNDZERO_API AGzDoorLightObject : public AActor, public IGzRenderInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzDoorLightObject_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool DoorLocked;
    
public:
    AGzDoorLightObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorLockStateChanged(const bool Locked);
    

    // Fix for true pure virtual functions not being implemented
};

