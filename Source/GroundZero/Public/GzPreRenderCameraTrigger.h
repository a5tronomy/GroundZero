#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "Engine/TriggerBox.h"
#include "OnPreRenderCameraTriggerActivatedDelegate.h"
#include "GzPreRenderCameraTrigger.generated.h"

class AActor;
class AGzPreRenderedCamera;
class ALevelSequenceActor;
class ATriggerVolume;
class UMaterialParameterCollection;
class USceneComponent;
class USplineComponent;

UCLASS()
class GROUNDZERO_API AGzPreRenderCameraTrigger : public ATriggerBox, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPreRenderCameraTrigger_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* FollowerActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzPreRenderedCamera* CameraA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzPreRenderedCamera* CameraB;
    
    UPROPERTY(BlueprintAssignable)
    FOnPreRenderCameraTriggerActivated OnPlayerView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TriggerPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATriggerVolume* CustomTriggerVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ALevelSequenceActor* CameraSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CameraTriggerDisabled;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* SplineRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USplineComponent* MovingCameraSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovingCameraSnapSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseMovingCameraSnap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseMovingCameraCorrection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ClampMinMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ZAxisAsSplineDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseClampHack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseInverseClampHack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialParameterCollection* CameraParameterCollection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CameraSequencePositionParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IsAnimatedCameraParameterName;
    
    UPROPERTY()
    float DesiredSplineTime;
    
    UPROPERTY()
    float PrevDesiredSplineTime;
    
    UPROPERTY()
    float PrevSnappedTarget;
    
    UPROPERTY()
    float SnappedTarget;
    
    UPROPERTY()
    float PrevTargetDist;
    
    UPROPERTY()
    float CurrentSplineTime;
    
    UPROPERTY()
    uint8 IsCorrecting;
    
    UPROPERTY()
    float LoadWarmup;
    
    UPROPERTY()
    AGzPreRenderedCamera* CurrentCamera;
    
public:
    AGzPreRenderCameraTrigger(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

