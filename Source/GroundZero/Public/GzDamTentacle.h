#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzRenderInterface.h"
#include "GzDamTentacle.generated.h"

class AGzCharacter;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class GROUNDZERO_API AGzDamTentacle : public AActor, public IEMSActorSaveInterface, public IGzRenderInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzDamTentacle_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceAttackActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasHitPlayerThisAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* TentacleRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* TentacleMesh;
    
    AGzDamTentacle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnHitPlayer(AGzCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

