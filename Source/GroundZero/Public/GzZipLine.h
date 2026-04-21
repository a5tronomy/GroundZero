#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzZipLine.generated.h"

class AGzCharacter;
class UCapsuleComponent;
class UCurveFloat;
class UGzInteractComponent;
class USceneComponent;
class USplineComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzZipLine : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzZipLine_Statics;
public:
protected:
    UPROPERTY()
    AGzCharacter* ActivePlayer;
    
    UPROPERTY(SaveGame)
    bool ZipLineInUse;
    
    UPROPERTY(SaveGame)
    float ZipLineAlpha;
    
    UPROPERTY()
    bool EndingZipLine;
    
private:
    UPROPERTY()
    bool PreviousNoTargetValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseConstantSplineVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeWhenPlayerDetachesZipline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZipLineTimeInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ZipLineAttachmentPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ZipLineSplineMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ZipLineSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ZipRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ZipLineMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGzInteractComponent* InteractVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* AlignCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedCurve;
    
public:
    AGzZipLine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseZipLine(AGzCharacter* Character);
    
    UFUNCTION()
    void StartZipLineSequence();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnZipLineStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZipLineStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZipLinePlayerDetached();
    

    // Fix for true pure virtual functions not being implemented
};

