#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/TimerHandle.h"
#include "ChaosChatData.h"
#include "CrossLevelSaveData.h"
#include "EActiveCheats.h"
#include "EDifficultyMode.h"
#include "EGameModeType.h"
#include "EPlayerExpression.h"
#include "EPlayerType.h"
#include "InventoryTableItem.h"
#include "ParsedFootstepData.h"
#include "PostCutsceneCleanUpDelegate.h"
#include "Templates/SubclassOf.h"
#include "GzGameModeBase.generated.h"

class AActor;
class AGzChokingGasVolume;
class AGzClimbVolumeActor;
class AGzDeathResetter;
class AGzDocument;
class AGzEnemyAI;
class AGzExplosionEntity;
class AGzFootstepOverrideVolume;
class AGzHumanNpcCharacter;
class AGzInterDoor;
class AGzInventoryItem;
class AGzMapSegmentEntity;
class AGzMonsterGagVolume;
class AGzPreRenderCameraTrigger;
class AGzSqueezeWallManager;
class AGznpcCharacter;
class UChildActorComponent;
class UDataTable;
class UGzGameModeCheatManager;
class UGzLiveConfigComponent;
class UGzWristGadgetDataAsset;
class UMaterialParameterCollection;
class UMusicDataAsset;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(NonTransient)
class GROUNDZERO_API AGzGameModeBase : public AGameModeBase, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzGameModeBase_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FPostCutsceneCleanUp OnPostCutsceneCleanUp;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* ExpressionParameterCollection;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPlayerExpression> CurrentExpressionSeoYeon;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPlayerExpression> CurrentExpressionIsabel;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPlayerExpression> CurrentExpressionEvan;
    
    UPROPERTY()
    FTimerHandle SeoYeonBlinkHandle;
    
    UPROPERTY()
    FTimerHandle EvanBlinkHandle;
    
    UPROPERTY()
    FTimerHandle IsabelBlinkHandle;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasUsedCheatsThisSession;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TEnumAsByte<EDifficultyMode> CurrentDifficulty;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TEnumAsByte<EDifficultyMode> CurrentPuzzleDifficulty;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool IsNewGamePlus;
    
    UPROPERTY()
    float NextGagGatherTime;
    
    UPROPERTY()
    float NextGlobalProjectileTime;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> PerceptibleActors;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzInterDoor*> InterDoors;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> ProximityActorsLayer1;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzMapSegmentEntity*> MapSegments;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzChokingGasVolume*> ChokingGasVolumes;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzMonsterGagVolume*> MonsterGagVolumes;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FParsedFootstepData> FootstepDataArray;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzEnemyAI*> EnemyAIs;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzHumanNpcCharacter*> Npcs;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGznpcCharacter*> NpcCharacters;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzExplosionEntity*> AllExplosivesInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> AllAdditionalVisibleToPlayerActorsInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzInventoryItem*> AllItemsInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzDocument*> AllDocumentsInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzClimbVolumeActor*> AllClimbVolumesInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzSqueezeWallManager*> AllSqueezeVolumesInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzFootstepOverrideVolume*> FootstepOverrideVolumes;
    
    UPROPERTY()
    TArray<AGzPreRenderCameraTrigger*> CameraTriggerVolumes;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzDeathResetter*> AllDeathResettersInMap;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 TimesSaved;
    
    UPROPERTY(SaveGame)
    float GameTimePlayerFacing;
    
    UPROPERTY(SaveGame)
    float GameTime;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool StopPlayerFacingGameTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HideAllMeshesInPreRendered;
    
    UPROPERTY()
    float NextLiveConfigHeartbeat;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AutoApplyLoadOut;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsRandomizerMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsTrainingLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* RandomizerDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* InventoryDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UChildActorComponent* MusicPlayerComponentBP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UGzGameModeCheatManager* CheatManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UGzLiveConfigComponent* LiveConfigComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EGameModeType> GameModeType;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EPlayerType> DesiredPlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ChaosChatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FChaosChatData ChaosChatData;
    
    UPROPERTY()
    TArray<TSubclassOf<AGzEnemyAI>> RandomEnemies;
    
private:
    UPROPERTY()
    TArray<AActor*> RenderableActors;
    
    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> RenderableComponents;
    
public:
    AGzGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayerExpression(const TEnumAsByte<EPlayerType> PlayerType, const TEnumAsByte<EPlayerExpression> Expression, const bool BlinkReset, const bool Force);
    
    UFUNCTION(BlueprintCallable)
    void SetNewDifficultyMode(TEnumAsByte<EDifficultyMode> Difficulty, const bool Puzzle);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyModeOnGameStart();
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredVolumeForLayer(const int32 LayerNumber, const float Volume, const float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMusicProximityActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterItemInMapForGlints(AGzInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponentForRendering(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActorForRendering(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PutUnlocksInSafe();
    
    UFUNCTION(BlueprintCallable)
    void PlayMusic(UMusicDataAsset* Track, float FadeOutTime, const float FadeInTime, const bool CrossfadeMusic);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PerformCameraShake(float Intensity, float duration, const float LocationX, const float LocationY, const float LocationZ, const float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPutUnlocksInSafe();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDocumentArchived(UGzWristGadgetDataAsset* Document);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCheatActivated(const EActiveCheats Cheat, bool Active);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginLevelChange(FCrossLevelSaveData SaveData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApocalypseCrisisAddedSeconds(const float Seconds);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsSinglePlayer() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsApocalypseCrisis() const;
    
    UFUNCTION(BlueprintCallable)
    void InternalDifficultyModeCheck();
    
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> GetRenderableComponents();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetRenderableActors();
    
    UFUNCTION(BlueprintPure)
    bool GetInventoryTableItem(const FName ItemName, FInventoryTableItem& Item, FString& RowName) const;
    
    UFUNCTION(BlueprintPure)
    float GetGameTimePlayerFacing() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameTime() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FString GetApocalypseCrisisTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceNewGamePlus(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLevel(const FString& LevelPath, const FString& ShortLevelName, FTransform NextLevelTransform);
    
    UFUNCTION(BlueprintCallable)
    void BuildRenderableActors();
    
    UFUNCTION()
    void Blink(const TEnumAsByte<EPlayerType> PlayerType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginLevelChange(FCrossLevelSaveData SaveData);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ApocalypseCrisisDidKillAllEnemies();
    
    UFUNCTION(BlueprintCallable)
    void ApocalypseCrisisAddSeconds(const float Seconds);
    

    // Fix for true pure virtual functions not being implemented
};

