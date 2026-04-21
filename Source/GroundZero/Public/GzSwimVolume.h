#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "GzSwimVolume.generated.h"

class AGzBlockingVolume;
class AGzCharacter;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzSwimVolume : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSwimVolume_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzBlockingVolume> CollisionWhenWaterDisabled;
    
    UPROPERTY()
    AGzCharacter* ActivePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FootDistanceBelowOriginToStartSwimming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* SwimRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* SwimCollision;
    
    UPROPERTY(BlueprintReadOnly)
    float MeshOverlapFraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool IsDisabled;
    
    AGzSwimVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool Disabled);
    
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

