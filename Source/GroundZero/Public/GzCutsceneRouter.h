#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "OnCutsceneEndedDelegate.h"
#include "OnCutsceneEventFiredDelegate.h"
#include "GzCutsceneRouter.generated.h"

class AGzPreRenderedCamera;
class ALevelSequenceActor;
class UMusicDataAsset;

UCLASS()
class GROUNDZERO_API AGzCutsceneRouter : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzCutsceneRouter_Statics;
public:
    UPROPERTY(EditAnywhere)
    bool KeepPlayerVisible;
    
    UPROPERTY(EditAnywhere)
    bool StopMusicAfterSceneEnded;
    
    UPROPERTY(EditAnywhere)
    bool HideCutsceneActorsAfterCutscene;
    
    UPROPERTY(EditAnywhere)
    bool MakeCutsceneActorsNonSolidAfterCutscene;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> PreviousActiveCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMusicDataAsset* MusicToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMusicDataAsset* MusicAfterCutsceneEnds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DontStopMusicWhenCutsceneEnds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float MusicCrossfadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool CrossfadeMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool DisableCutsceneSkip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float MusicAfterCutsceneFadesCrossFadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float DelayAfterNewCutsceneMusicPlays;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBeforeMusicStart;
    
    UPROPERTY(EditAnywhere)
    bool ShowBlackBarsOnCutsceneStart;
    
    UPROPERTY(EditAnywhere)
    bool FreezePlayerOnCutsceneStart;
    
    UPROPERTY(EditAnywhere)
    bool UnhideCutsceneActorsOnCutsceneStart;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FString> WorldAffectingEventFunctionNames;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool CutsceneFinished;
    
    UPROPERTY(EditAnywhere)
    TArray<AActor*> CutsceneActors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<ALevelSequenceActor> SequencePlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> CameraToViewOnFinished;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AGzPreRenderedCamera*> OwnedCameras;
    
    UPROPERTY()
    bool PlayerFlashlightState;
    
    UPROPERTY()
    bool PlayerNotargetState;
    
    UPROPERTY()
    bool PlayerGodState;
    
    UPROPERTY(BlueprintAssignable)
    FOnCutsceneEnded OnCutsceneEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOnCutsceneEventFired OnCutsceneEventFired;
    
    AGzCutsceneRouter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnfreezePlayer() const;
    
    UFUNCTION()
    void StartPostCutsceneMusic();
    
    UFUNCTION()
    void StartMusic();
    
    UFUNCTION(BlueprintCallable)
    void SkipCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowBlackBars() const;
    
    UFUNCTION(BlueprintCallable)
    void PlayCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCutsceneStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideBlackBars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FreezePlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void FireNextWorldAffectingEvent();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpEntities();
    

    // Fix for true pure virtual functions not being implemented
};

