#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "MovieSceneBindingProxy.h"
#include "GzCameraSubsystem.generated.h"

class AGzCutsceneRouter;
class AGzPreRenderedCamera;
class UMovieSceneSequence;

UCLASS()
class GROUNDZERO_API UGzCameraSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzCameraSubsystem_Statics;
public:
private:
    UPROPERTY(Transient)
    bool bUseLoading;
    
    UPROPERTY(Transient)
    bool bInCutscene;
    
    UPROPERTY()
    TArray<AGzCutsceneRouter*> Cutscenes;
    
    UPROPERTY()
    TArray<AGzPreRenderedCamera*> CutsceneCameras;
    
    UPROPERTY()
    TArray<AGzPreRenderedCamera*> AnimatedCameras;
    
    UPROPERTY()
    TArray<FVector> AnimatedCamerasLocation;
    
    UPROPERTY()
    TArray<AGzPreRenderedCamera*> PreRenderedCameras;
    
    UPROPERTY()
    TArray<FVector> PreRenderedCamerasLocation;
    
    UPROPERTY()
    AGzPreRenderedCamera* PreviousCamera;
    
    UPROPERTY()
    TMap<int32, float> SortedPreRenderedCameras;
    
public:
    UGzCameraSubsystem();

    UFUNCTION()
    void SetInCutscene(bool bEnable);
    
    UFUNCTION()
    void LoadNearbyCameras(AGzPreRenderedCamera* CurrentCamera);
    
    UFUNCTION()
    static TArray<FMovieSceneBindingProxy> GetSequenceBinding(UMovieSceneSequence* Sequence);
    
};

