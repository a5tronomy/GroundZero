#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzHowitzer.generated.h"

class AGzCharacter;
class UGzInteractComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class GROUNDZERO_API AGzHowitzer : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzHowitzer_Statics;
public:
protected:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool ActivelyRaisingCannon;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasBeenLoaded;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasBeenCranked;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 TimesFired;
    
    UPROPERTY(BlueprintReadWrite)
    AGzCharacter* ActivePlayer;
    
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HowitzerRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PlayerShootAlign;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PlayerReloadAlign;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGzInteractComponent* ShootInteractVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGzInteractComponent* ReloadInteractVolume;
    
public:
    AGzHowitzer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerStoppedHoldingUse();
    

    // Fix for true pure virtual functions not being implemented
};

