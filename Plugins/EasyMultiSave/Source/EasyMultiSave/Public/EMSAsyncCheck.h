#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CheckCompletedPinDelegate.h"
#include "CheckFailedPinDelegate.h"
#include "ESaveFileCheckType.h"
#include "EMSAsyncCheck.generated.h"

class UEMSAsyncCheck;
class UEMSObject;
class UObject;

UCLASS()
class EASYMULTISAVE_API UEMSAsyncCheck : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSAsyncCheck_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FCheckCompletedPin OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FCheckFailedPin OnFailed;
    
private:
    UPROPERTY()
    UEMSObject* EMS;
    
public:
    UEMSAsyncCheck();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEMSAsyncCheck* CheckSaveFiles(UObject* WorldContextObject, ESaveFileCheckType CheckType);
    
};

