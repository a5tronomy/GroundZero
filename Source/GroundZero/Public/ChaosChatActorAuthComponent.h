#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EChaosChatReward.h"
#include "EChaosChatTriggerRules.h"
#include "OnSocketConnectedDelegate.h"
#include "OnSocketConnectionClosedDelegate.h"
#include "OnSocketConnectionErrorDelegate.h"
#include "OnSocketConnectionMessageDelegate.h"
#include "OnSocketConnectionMessageSentDelegate.h"
#include "OnSocketConnectionRawMessageDelegate.h"
#include "ChaosChatActorAuthComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UChaosChatActorAuthComponent : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UChaosChatActorAuthComponent_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnSocketConnected OnSocketConnected;
    
    UPROPERTY(BlueprintAssignable)
    FOnSocketConnectionError OnSocketConnectionError;
    
    UPROPERTY(BlueprintAssignable)
    FOnSocketConnectionClosed OnSocketConnectionClosed;
    
    UPROPERTY(BlueprintAssignable)
    FOnSocketConnectionMessage OnSocketConnectionMessage;
    
    UPROPERTY(BlueprintAssignable)
    FOnSocketConnectionMessageSent OnSocketConnectionMessageSent;
    
    UPROPERTY(BlueprintAssignable)
    FOnSocketConnectionRawMessage OnSocketConnectionRawMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EChaosChatTriggerRules> TriggerRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlwaysAllowModerators;
    
    UPROPERTY(EditDefaultsOnly)
    FString ServerUrl;
    
    UPROPERTY(EditDefaultsOnly)
    FString ServerProtocol;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FString> UpgradeHeaders;
    
    UChaosChatActorAuthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TriggerChaosChatReward(TEnumAsByte<EChaosChatReward> Reward);
    
    UFUNCTION(BlueprintCallable)
    void SendMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    bool GetRewardFromString(const FString& String, TEnumAsByte<EChaosChatReward>& Reward);
    
    UFUNCTION(BlueprintCallable)
    void Connect();
    
};

