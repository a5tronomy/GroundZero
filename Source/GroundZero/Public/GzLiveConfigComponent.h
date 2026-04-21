#pragma once
#include "CoreMinimal.h"
#include "EMSCompSaveInterface.h"
#include "Components/ActorComponent.h"
#include "LiveConfigData.h"
#include "LiveConfigProperty.h"
#include "LiveConfigPropertyCondition.h"
#include "GzLiveConfigComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzLiveConfigComponent : public UActorComponent, public IEMSCompSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzLiveConfigComponent_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FLiveConfigPropertyCondition> CurrentEventConditions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FLiveConfigData LiveConfigData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LiveConfigURL;
    
    UGzLiveConfigComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLiveEventCondition(const FLiveConfigPropertyCondition LiveEventCondition);
    
    UFUNCTION(BlueprintCallable)
    void ParseLiveConfig();
    
    UFUNCTION(BlueprintCallable)
    bool GetLiveConfigDataFloatValue(const FString& PropertyName, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetLiveConfigDataBoolValue(const FString& PropertyName, bool& OutValue);
    
    UFUNCTION(BlueprintCallable)
    FString GenerateTempJson();
    
    UFUNCTION(BlueprintCallable)
    bool AreConditionsMet(const FLiveConfigProperty Property);
    

    // Fix for true pure virtual functions not being implemented
};

