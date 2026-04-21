#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzDamageableInterface.h"
#include "GzRenderInterface.h"
#include "OnGotCriticalShotOnLockDelegate.h"
#include "OnShotLockDelegate.h"
#include "GzCritShotLock.generated.h"

UCLASS()
class GROUNDZERO_API AGzCritShotLock : public AActor, public IEMSActorSaveInterface, public IGzRenderInterface, public IGzDamageableInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzCritShotLock_Statics;
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnGotCriticalShotOnLock OnGotCriticalShot;
    
    UPROPERTY(BlueprintAssignable)
    FOnShotLock OnShotLock;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool LockBroken;
    
public:
    AGzCritShotLock(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

