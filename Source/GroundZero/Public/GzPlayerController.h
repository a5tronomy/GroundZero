#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionListenerInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/PlayerController.h"
#include "GzPlayerController.generated.h"

class AActor;

UCLASS()
class GROUNDZERO_API AGzPlayerController : public APlayerController, public IAIPerceptionListenerInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPlayerController_Statics;
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool InRealTimeMode;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool InThirdPersonMode;
    
    AGzPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleThirdPersonMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleRealTimeMode();
    
    UFUNCTION()
    void TogglePreRenderCulling(const bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RegisterAllEnemiesAsPerceptible() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FTransform OverridePlayerSpawnLocation(const FVector Location, const FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    bool IsInFrustum(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    void GetExpiredSeenActors(TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentlySeenActors(TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSeeActor(const AActor* Item) const;
    

    // Fix for true pure virtual functions not being implemented
};

