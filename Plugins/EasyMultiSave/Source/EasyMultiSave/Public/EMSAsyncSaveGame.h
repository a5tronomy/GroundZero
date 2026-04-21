#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncSaveFailedPinDelegate.h"
#include "AsyncSaveOutputPinDelegate.h"
#include "EMSAsyncSaveGame.generated.h"

class UEMSAsyncSaveGame;
class UEMSObject;
class UObject;

UCLASS()
class EASYMULTISAVE_API UEMSAsyncSaveGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSAsyncSaveGame_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncSaveOutputPin OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncSaveFailedPin OnFailed;
    
private:
    UPROPERTY()
    UEMSObject* EMS;
    
public:
    UEMSAsyncSaveGame();

    UFUNCTION()
    static void AutoSaveLevelActors(UEMSObject* EMSObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEMSAsyncSaveGame* AsyncSaveActors(UObject* WorldContextObject, int32 Data);
    
};

