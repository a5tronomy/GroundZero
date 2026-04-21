#pragma once
#include "CoreMinimal.h"
#include "CheckMessageData.generated.h"

class AActor;
class AGzPreRenderedCamera;
class UAnimMontage;
class UGzWristGadgetDataAsset;

USTRUCT(BlueprintType)
struct FCheckMessageData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCheckMessageData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGzPreRenderedCamera* CameraToView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* OnReadCallbackObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OnReadCallbackFunctionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool YesNoMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* OnYesCallbackObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OnYesCallbackFunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* OnNoCallbackObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OnNoCallbackFunctionName;
    
    UPROPERTY(BlueprintReadWrite)
    bool Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableThisMessageOnYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableThisMessageOnNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGzWristGadgetDataAsset* ArchiveDocumentAfterReading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* InteractionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBeforeShowMessage;
    
    GROUNDZERO_API FCheckMessageData();
};

