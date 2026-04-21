#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CutsceneCameraIngameCamera.h"
#include "CutsceneCameraMesh.h"
#include "GzCutsceneCameraRig.generated.h"

class AGzPreRenderedCamera;
class ALevelSequenceActor;
class UPoseableMeshComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzCutsceneCameraRig : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzCutsceneCameraRig_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CameraCutList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* CameraRigRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPoseableMeshComponent* CameraRigMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AdditionalCameraRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CameraPrefix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CameraSuffix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGuid RigGuid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AGzPreRenderedCamera*> AssociatedCameras;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ALevelSequenceActor* CameraSequencePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCutsceneCameraMesh> AllCutsceneCameraData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCutsceneCameraIngameCamera> AllIngameCameras;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* CameraBPToSpawn;
    
public:
    AGzCutsceneCameraRig(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneTransform(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void CreateCameras();
    
};

