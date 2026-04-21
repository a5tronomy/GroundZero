#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncWaitOutputPinDelegate.h"
#include "EAsyncCheckType.h"
#include "EMSAsyncWait.generated.h"

class UEMSAsyncWait;
class UEMSObject;
class UObject;

UCLASS()
class EASYMULTISAVE_API UEMSAsyncWait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSAsyncWait_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncWaitOutputPin OnCompleted;
    
private:
    UPROPERTY()
    UEMSObject* EMS;
    
public:
    UEMSAsyncWait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEMSAsyncWait* AsyncWaitForOperation(UObject* WorldContextObject, EAsyncCheckType CheckType);
    
};

