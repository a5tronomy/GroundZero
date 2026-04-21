#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AGzLastBossNode.generated.h"

UCLASS()
class GROUNDZERO_API AAGzLastBossNode : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AAGzLastBossNode_Statics;
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool IsIgnited;
    
    UPROPERTY(BlueprintReadWrite)
    bool NodeActive;
    
    AAGzLastBossNode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopIgnite(const float Delay);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBlownUpByGrenade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ignite();
    
};

