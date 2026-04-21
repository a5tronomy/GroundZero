#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncLoadFailedPinDelegate.h"
#include "AsyncLoadOutputPinDelegate.h"
#include "EMSAsyncLoadGame.generated.h"

class UEMSAsyncLoadGame;
class UEMSObject;
class UObject;

UCLASS()
class EASYMULTISAVE_API UEMSAsyncLoadGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSAsyncLoadGame_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncLoadOutputPin OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncLoadFailedPin OnFailed;
    
private:
    UPROPERTY()
    UEMSObject* EMS;
    
public:
    UEMSAsyncLoadGame();

    UFUNCTION()
    static void FinishTaskThreadSafe(const TWeakObjectPtr<UEMSAsyncLoadGame> InTask);
    
    UFUNCTION()
    static void AutoLoadLevelActors(UEMSObject* EMSObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEMSAsyncLoadGame* AsyncLoadActors(UObject* WorldContextObject, int32 Data, bool bFullReload);
    
};

