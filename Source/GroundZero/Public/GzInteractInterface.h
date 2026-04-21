#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GzInteractInterface.generated.h"

class AActor;
class AGzCharacter;

UINTERFACE(Blueprintable, MinimalAPI)
class UGzInteractInterface : public UInterface {
    GENERATED_BODY()
};

class GROUNDZERO_API IGzInteractInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUsedKeyItem(AGzCharacter* Player, const int32& InventorySlot, const FString& KeyItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUsedByPlayer(AGzCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnScannedByPlayer(AGzCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleasedHeldUse(AGzCharacter* Player, const float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickedYes(AGzCharacter* Player, AActor* CallingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickedNo(AGzCharacter* Player, AActor* CallingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeldUsePulse(AGzCharacter* Player, const float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsScanningDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInteractDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetInteractPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteractUsingHoldPulseCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteractUsingHoldKey();
    
};

