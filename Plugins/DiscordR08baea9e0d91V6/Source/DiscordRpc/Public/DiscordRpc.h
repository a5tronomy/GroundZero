#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordConnectedDelegate.h"
#include "DiscordDisconnectedDelegate.h"
#include "DiscordErroredDelegate.h"
#include "DiscordJoinDelegate.h"
#include "DiscordJoinRequestDelegate.h"
#include "DiscordRichPresence.h"
#include "DiscordSpectateDelegate.h"
#include "DiscordRpc.generated.h"

UCLASS(BlueprintType)
class DISCORDRPC_API UDiscordRpc : public UObject {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UDiscordRpc_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsConnected;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordConnected OnConnected;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordDisconnected OnDisconnected;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordErrored OnErrored;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordJoin OnJoin;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordSpectate OnSpectate;
    
    UPROPERTY(BlueprintAssignable)
    FDiscordJoinRequest OnJoinRequest;
    
    UPROPERTY(BlueprintReadWrite)
    FDiscordRichPresence RichPresence;
    
    UDiscordRpc();

    UFUNCTION(BlueprintCallable)
    void UpdatePresence();
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    void RunCallbacks();
    
    UFUNCTION(BlueprintCallable)
    void Respond(const FString& UserId, int32 Reply);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FString& applicationId, bool autoRegister, const FString& optionalSteamId);
    
    UFUNCTION(BlueprintPure)
    int64 GetStartTimeStamp() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPresence();
    
};

