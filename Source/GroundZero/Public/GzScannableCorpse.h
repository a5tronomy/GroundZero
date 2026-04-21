#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "EMaximumDamageAmount.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "GzScannableCorpse.generated.h"

class AGzCharacter;
class UBoxComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzScannableCorpse : public AActor, public IEMSActorSaveInterface, public IGzRenderInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzScannableCorpse_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* MeshRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* ScanOverrideVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool HasBeenScanned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool MeshIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 GenomePointsToGive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeScanActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScanDistanceOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseScanOverrideVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMaximumDamageAmount> CurrentDamageAmount;
    
    AGzScannableCorpse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMeshVisible(const bool Visible);
    
    UFUNCTION()
    void ScanHack() const;
    
    UFUNCTION(BlueprintCallable)
    void PerformScan(AGzCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttacked(const FVector Location);
    

    // Fix for true pure virtual functions not being implemented
};

