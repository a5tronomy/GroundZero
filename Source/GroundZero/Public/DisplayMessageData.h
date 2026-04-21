#pragma once
#include "CoreMinimal.h"
#include "DisplayMessageData.generated.h"

class AActor;
class AGzPreRenderedCamera;
class UGzWristGadgetDataAsset;
class UObject;

USTRUCT(BlueprintType)
struct FDisplayMessageData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FDisplayMessageData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MessageText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CreatedTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AppendText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool FreezeWorld;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    AGzPreRenderedCamera* ViewingCamera;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InspectMessage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsYesNoMessage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* CallbackObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FunctionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* YesCallbackObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName YesFunctionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* NoCallbackObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NoFunctionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    AActor* CallingActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AutoScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGzWristGadgetDataAsset* ArchiveDocumentAfterReading;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MessageIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString TextTableOverride;
    
    GROUNDZERO_API FDisplayMessageData();
};

