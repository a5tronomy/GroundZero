#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzStomachActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzStomachActor : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzStomachActor_Statics;
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool IsIgnited;
    
    UPROPERTY(SaveGame)
    float Health;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHealth;
    
    AGzStomachActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopIgnite(const float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ignite();
    

    // Fix for true pure virtual functions not being implemented
};

