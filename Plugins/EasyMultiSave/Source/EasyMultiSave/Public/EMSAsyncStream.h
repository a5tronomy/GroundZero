#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MultiLevelStreamingData.h"
#include "EMSAsyncStream.generated.h"

class AActor;
class UEMSObject;
class ULevel;

UCLASS()
class EASYMULTISAVE_API UEMSAsyncStream : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSAsyncStream_Statics;
public:
    UPROPERTY()
    ULevel* StreamingLevel;
    
private:
    UPROPERTY()
    UEMSObject* EMS;
    
    UPROPERTY()
    TArray<AActor*> StreamActors;
    
    UPROPERTY(Transient)
    TMap<FName, TWeakObjectPtr<AActor>> StreamActorsMap;
    
    UPROPERTY(Transient)
    FMultiLevelStreamingData PrunedData;
    
public:
    UEMSAsyncStream();

    UFUNCTION()
    static bool InitStreamingLoadTask(UEMSObject* EMSObject, const ULevel* InLevel);
    
};

