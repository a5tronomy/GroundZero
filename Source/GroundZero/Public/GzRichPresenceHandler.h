#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "RichPresenceKeyValuePair.h"
#include "GzRichPresenceHandler.generated.h"

UCLASS()
class GROUNDZERO_API AGzRichPresenceHandler : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzRichPresenceHandler_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool HasBeenFired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRichPresenceKeyValuePair> RichPresenceKeyValuePairs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString RichPresenceValue;
    
public:
    AGzRichPresenceHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRichPresence();
    
    UFUNCTION()
    void DelaySetRichPresence();
    

    // Fix for true pure virtual functions not being implemented
};

