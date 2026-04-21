#pragma once
#include "CoreMinimal.h"
#include "CheckMessageData.h"
#include "GzTriggerVolume.h"
#include "MessageLockData.h"
#include "OnPickedNoDelegate.h"
#include "OnPickedYesDelegate.h"
#include "OnReadMessageDelegate.h"
#include "GzTextCheckVolume.generated.h"

class AGzCharacter;

UCLASS()
class GROUNDZERO_API AGzTextCheckVolume : public AGzTriggerVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTextCheckVolume_Statics;
public:
    UPROPERTY(SaveGame)
    TArray<bool> DisabledTextValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCheckMessageData> DisplayTexts;
    
protected:
    UPROPERTY()
    int32 CurrentMessageIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool AutoAdvanceText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool MessageEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool RandomMessageOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool OnceOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PauseGameWhileReading;
    
    UPROPERTY(SaveGame)
    int32 TimesUsed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ResetToMessageNumberAtEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMessageLockData MessageLockData;
    
    UPROPERTY(BlueprintAssignable)
    FOnPickedNo OnPickedNo;
    
    UPROPERTY(BlueprintAssignable)
    FOnPickedYes OnPickedYes;
    
    UPROPERTY(BlueprintAssignable)
    FOnReadMessage OnReadMessage;
    
public:
    AGzTextCheckVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ShowMessage(AGzCharacter* Character, const int32 Index, TArray<FCheckMessageData> messages);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageIndexEnabled(const int32 Index, const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedYes();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedNo();
    
    UFUNCTION()
    void AutoAdvance();
    
};

