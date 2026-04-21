#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "GzExplosionEntity.generated.h"

class AGzEnemyAI;
class USceneComponent;
class USphereComponent;

UCLASS()
class GROUNDZERO_API AGzExplosionEntity : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzExplosionEntity_Statics;
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    AActor* WhoShotMeLast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<AGzEnemyAI>> EnemiesThatCannotBeGibbedByThis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* ExplosionRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USphereComponent* DeathSphere;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USphereComponent* DamageSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerDamageIfHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PlayerLaunchVelocity;
    
public:
    AGzExplosionEntity(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Explode();
    
};

