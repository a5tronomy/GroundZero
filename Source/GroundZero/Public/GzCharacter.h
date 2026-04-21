#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Character.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "Camera/PlayerCameraManager.h"
#include "AchievementDefinition.h"
#include "ActiveCharacterSwitchData.h"
#include "ApocalypseCrisisStats.h"
#include "CachedSaveSlot.h"
#include "CinematicKillerData.h"
#include "CombatMusic.h"
#include "DisplayMessageData.h"
#include "DoorTravelInfo.h"
#include "DoorUnlockGroup.h"
#include "EControlSelectionObjective.h"
#include "EGrapplingState.h"
#include "EHealthStatus.h"
#include "EPlayerDamageDirection.h"
#include "EPlayerDamageType.h"
#include "EPlayerExpression.h"
#include "EPlayerType.h"
#include "EVocalSoundType.h"
#include "FootstepMaterialData.h"
#include "GoneThroughDoorDelegateDelegate.h"
#include "GzRenderInterface.h"
#include "HintsSeen.h"
#include "InventoryTableItem.h"
#include "LastUsedDoorEntrance.h"
#include "LevelEventData.h"
#include "MapItemOfInterest.h"
#include "ModelChangeParameters.h"
#include "MontageTranslation.h"
#include "NamedTimer.h"
#include "OnPlayerSwimStateChangedDelegate.h"
#include "OnPlayerTripDelegate.h"
#include "OnScreenTimer.h"
#include "OnSwitchedCameraDelegate.h"
#include "RappelData.h"
#include "RichPresenceKeyValuePair.h"
#include "SavedMap.h"
#include "ShrineLevelTravelData.h"
#include "TakeEnemyDamageDelegate.h"
#include "Templates/SubclassOf.h"
#include "WeaponAnimationData.h"
#include "WeaponData.h"
#include "GzCharacter.generated.h"

class AActor;
class ACameraActor;
class AGzApocalypseCrisisCutscene;
class AGzBikeModeBike;
class AGzCCTVManager;
class AGzCameraTriggerBox;
class AGzChokingGasVolume;
class AGzClawMachine;
class AGzClimbVolumeActor;
class AGzCutsceneRouter;
class AGzDocument;
class AGzDriveableBoat;
class AGzElevatorGenerator;
class AGzEnemyAI;
class AGzGasLeakVolume;
class AGzHotAndColdVolume;
class AGzHowitzer;
class AGzHumanNpcCharacter;
class AGzInterDoor;
class AGzInventoryItem;
class AGzKeypad;
class AGzMapSegmentEntity;
class AGzPreRenderCameraTrigger;
class AGzPreRenderedCamera;
class AGzPushableActor;
class AGzSqueezeWallManager;
class AGzSwimVolume;
class AGzTrainBossArmTrigger;
class AGzUfoPawn;
class AGzZipLine;
class AGznpcCharacter;
class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class UAimOffsetBlendSpace1D;
class UAnimMontage;
class UAnimSequenceBase;
class UAudioComponent;
class UBoxComponent;
class UCameraComponent;
class UCurveFloat;
class UDataTable;
class UEMSObject;
class UFXSystemComponent;
class UGzAchievementManager;
class UGzCharacterAppearance;
class UGzCharacterSwitchComponent;
class UGzIngameDialogueConversation;
class UGzLaserSightComponent;
class UGzPlayerAppearanceDataAsset;
class UGzSoundAmbienceAsset;
class UGzWristGadgetDataAsset;
class UGz_WeaponManagerComponent;
class UInventoryComponent;
class UMaterialParameterCollection;
class UMusicDataAsset;
class UNiagaraComponent;
class UObject;
class UPlayerStatsManagerComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundBase;
class USoundCue;
class USpringArmComponent;
class UStaticMeshComponent;
class UUserWidget;

UCLASS()
class GROUNDZERO_API AGzCharacter : public ACharacter, public IGzRenderInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzCharacter_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* ActiveLockOnTarget;
    
    UPROPERTY(BlueprintReadOnly)
    float LockOnTargetTrackTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D CrazyKineticParryVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> VisibleItems;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HackCheatMakePlayerVeryFast;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> VisibleTargets;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDistanceForRegisteringEnemiesAsPerceptible;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAISenseConfig_Sight* SightSense4;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool PauseCountdownTimer;
    
    UPROPERTY(BlueprintReadOnly)
    float DialogueHoldUseTime;
    
    UPROPERTY()
    AGzHowitzer* ActiveHowitzer;
    
    UPROPERTY(BlueprintReadWrite)
    AGzBikeModeBike* ActiveBike;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAnimSequenceBase*> BikeModeAnimations;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 TimesJuicedGreen;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 TimesJuicedRed;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 TimesJuicedBlue;
    
    UPROPERTY()
    bool HasLockedTargetThisAiming;
    
    UPROPERTY(BlueprintReadOnly)
    FCinematicKillerData CinematicKillerData;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasBeenKilled;
    
    UPROPERTY(BlueprintReadWrite)
    bool AbleToOpenInventory;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<AActor> WhoDamagedMeLast;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<AActor> ParriedEnemy;
    
    UPROPERTY(BlueprintReadWrite)
    bool InControlSelection;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EControlSelectionObjective> ControlSelectionObjective;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FLastUsedDoorEntrance LastUsedDoorEntrance;
    
    UPROPERTY(SaveGame)
    bool RunToggleValue;
    
    UPROPERTY(SaveGame)
    bool AutoRunValue;
    
    UPROPERTY()
    float ModernControlsDodgeYawDirection;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FString CurrentBuildVersion;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionLikelihoodMultiplier;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionPermanentLikelihoodBooster;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionTemporaryLikelihoodReductionTimer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionTemporaryLikelihoodReductionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionImmunityTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionDamageReductionTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionDamageReductionTimeDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfectionDamageReductionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float DamageDefenceBoostTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CurrentTemporaryDamageDefenceBoost;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float DamageDefence;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> SyringeContents;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    float OutOfBreathTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float StaminaRecoverBlockTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InfiniteStaminaTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CurrentAdrenalineBoostTimer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CurrentStamina;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinStaminaToDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float StaminaRecoveryTimeInSeconds;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TSoftObjectPtr<UMusicDataAsset> ActiveMusicTrack;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TSoftObjectPtr<UGzSoundAmbienceAsset> ActiveAmbience;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerHasExploded;
    
    UPROPERTY(SaveGame)
    FTransform StandardFlashlightTransform;
    
    UPROPERTY(SaveGame)
    FTransform FlashlightTransformBeforeBlending;
    
    UPROPERTY(SaveGame)
    float FlashlightBlendAlpha;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsCold;
    
    UPROPERTY(SaveGame)
    float NextColdBreathTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FApocalypseCrisisStats ApocalypseCrisisStats;
    
    UPROPERTY(BlueprintReadWrite)
    bool ApocalypseCrisisBeatenGame;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool ApocalypseCrisisRoundEnded;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool ApocalypseCrisisRoundStarted;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float ApocalypseCrisisTimerSeconds;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float ApocalypseCrisisActiveComboTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 ApocalypseCrisisComboAmount;
    
    UPROPERTY(BlueprintReadOnly)
    UGzIngameDialogueConversation* ActiveDialogueConversation;
    
    UPROPERTY(BlueprintReadOnly)
    AGznpcCharacter* ActiveNPCTalker;
    
    UPROPERTY(BlueprintReadOnly)
    bool InDialogueConversation;
    
    UPROPERTY(BlueprintReadOnly)
    float NextDialogueLineTime;
    
    UPROPERTY(BlueprintReadOnly)
    AGzSwimVolume* ActiveSwimVolume;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerSwimStateChanged OnPlayerSwimStateChanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMontageTranslation> TranslatedMontages;
    
    UPROPERTY(BlueprintReadWrite)
    bool TemporaryInputIsDisabled;
    
    UPROPERTY(Instanced)
    TArray<UAudioComponent*> ActiveDialogueComponents;
    
    UPROPERTY(BlueprintAssignable)
    FGoneThroughDoorDelegate OnGoneThroughDoor;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool BlockMusicChanges;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SeenShopIntro;
    
    UPROPERTY()
    AGzInterDoor* LastUsedDoor;
    
    UPROPERTY()
    AGzGasLeakVolume* ActiveGasLeakVolume;
    
    UPROPERTY(BlueprintReadWrite)
    AGzTrainBossArmTrigger* ActiveTrainBossArmTrigger;
    
    UPROPERTY(SaveGame)
    FActiveCharacterSwitchData ActiveCharacterSwitchData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* SingleplayerGradeScoreTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* CharacterSwitchDataTable;
    
    UPROPERTY(SaveGame)
    FString ActiveCharacterSwitchRowName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool DisabledScanner;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool UpgradedScanner;
    
    UPROPERTY(SaveGame)
    FName WeaponEquippedBeforeEquippedFlare;
    
    UPROPERTY()
    FTimerHandle FlareThrowHandle;
    
    UPROPERTY(SaveGame)
    bool WaitingToDropFlare;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FString> Objectives;
    
    UPROPERTY(BlueprintReadOnly)
    bool HoldingFlare;
    
    UPROPERTY(BlueprintReadOnly)
    float FlareSwitchTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool AutoScanEnemies;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsRappelling;
    
    UPROPERTY()
    float NextRappelDescendTime;
    
    UPROPERTY(BlueprintReadOnly)
    FRappelData ActiveRappelData;
    
    UPROPERTY()
    float RappelStartZHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* InfectionPinPointShotShakeCurve;
    
    UPROPERTY(BlueprintReadOnly)
    float PinpointShotMeter;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D PinpointInfo;
    
    UPROPERTY(BlueprintReadOnly)
    float PinPointCycleHideTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PinpointCycleTimeInSeconds;
    
    UPROPERTY(BlueprintReadOnly)
    float IFramesDuration;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<bool> PerfTestBools;
    
    UPROPERTY()
    FTimerHandle BlinkHandle;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPlayerExpression> CurrentExpression;
    
    UPROPERTY(BlueprintReadOnly)
    bool UsePressed;
    
    UPROPERTY(BlueprintReadOnly)
    AGzPushableActor* ActivePushableActor;
    
    UPROPERTY(BlueprintReadOnly)
    AGzSqueezeWallManager* ActiveSqueezeWall;
    
    UPROPERTY(BlueprintReadOnly)
    AGzZipLine* ActiveZipLine;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerTrip OnPlayerTrip;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* StoredActorUnderLaserSight;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StoredLaserSightStartLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StoredLaserSightEndLocation;
    
    UPROPERTY(Instanced)
    TArray<UNiagaraComponent*> ExecutionParticles;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FHintsSeen> HintsSeen;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FMapItemOfInterest> MapItemsOfInterest;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FSavedMap> SavedMaps;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator CachedStrafingCameraDirection;
    
    UPROPERTY()
    float ModernControlsCameraReorientBlockTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraReorientJoystickValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraReorientUnblockJoystickValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumYawDeltaBeforeChangeDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YawInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator DesiredModernControlsRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator ModernControlsLockedAimRotation;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentMovementDirectionIndex;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentDodgeDirection;
    
    UPROPERTY()
    float CachedHeadingYaw;
    
    UPROPERTY()
    bool IsCurrentlyMoving;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool EnableModernControls;
    
    UPROPERTY(SaveGame)
    bool SlidingChecksActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBeforeBlockActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockParryWindow;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsBlocking;
    
    UPROPERTY(BlueprintReadOnly)
    float BlockStartTime;
    
    UPROPERTY(BlueprintReadWrite)
    float DodgeAnimationActiveTime;
    
    UPROPERTY(BlueprintReadOnly)
    float DodgeActiveTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FRotator CurrentMovementDirection;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FVector MovementRightDirection;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FVector MovementForwardDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentHeadingYaw;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FVector2D CachedMovementInput;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FVector2D CurrentMovementInput;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D StoredMovementInput;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool DisableCameraSwitches;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool DisableCameraTriggers;
    
    UPROPERTY()
    float CachedDeltaX;
    
    UPROPERTY()
    float CachedDeltaY;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool EnableHints;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FModelChangeParameters CurrentPlayerModel;
    
    UPROPERTY(BlueprintReadOnly)
    FCachedSaveSlot CachedSaveSlot;
    
    UPROPERTY()
    FTimerHandle StartInvincibleMontageTimer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<TSoftObjectPtr<AGzInventoryItem>> AllSeenItems;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzInventoryItem*> AllItemsInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzDocument*> AllDocumentsInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzEnemyAI*> AllEnemiesInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzHumanNpcCharacter*> AllNpcsInMap;
    
    UPROPERTY(BlueprintReadOnly)
    AGzEnemyAI* PotentialExecutionCandiate;
    
    UPROPERTY(BlueprintReadOnly)
    AGzDriveableBoat* ActiveBoat;
    
    UPROPERTY(BlueprintReadOnly)
    AGzUfoPawn* ActiveUfo;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzClimbVolumeActor*> AllClimbVolumesInMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzSqueezeWallManager*> AllSqueezeVolumesInMap;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SeenDocumentTutorial;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SeenPhoneTutorial;
    
    UPROPERTY(BlueprintReadOnly)
    AGzCCTVManager* ActiveCCTVManager;
    
    UPROPERTY(BlueprintReadWrite)
    float ScanBodyTime;
    
    UPROPERTY(SaveGame)
    TArray<FDoorUnlockGroup> DoorUnlockGroups;
    
    UPROPERTY()
    TSoftObjectPtr<AGzInterDoor> QueuedDoorToUnlock;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FCombatMusic ActiveCombatMusic;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool InLoadingTransition;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FDoorTravelInfo DoorTravelInfo;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FShrineLevelTravelData ShrineLevelTravelData;
    
    UPROPERTY(BlueprintReadOnly)
    bool CharacterIsFlying;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsUnderwater;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsSwimming;
    
    UPROPERTY(BlueprintReadWrite)
    float CharacterFlyingTime;
    
    UPROPERTY()
    float FlyingWallHitDamage;
    
    UPROPERTY()
    bool CharacterHasHitWallWhenFlying;
    
    UPROPERTY()
    float FlyingCharacterWallHitCheckTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnSwitchedCamera OnSwitchedCamera;
    
    UPROPERTY()
    float LastPressedUseTime;
    
    UPROPERTY()
    float LastPressedUseTimeWhileAiming;
    
    UPROPERTY()
    bool InCallUsePressed;
    
    UPROPERTY()
    float InCallLastPressedUseTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 SessionID;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString ActiveCameraGUID;
    
    UPROPERTY()
    bool EscapedGrapple;
    
    UPROPERTY(BlueprintReadOnly)
    AGzEnemyAI* ActiveGrapplingEnemy;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EGrapplingState> CurrentGrapplingState;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<UGzWristGadgetDataAsset*> SavedDocuments;
    
    UPROPERTY(SaveGame)
    float NextPoisonTick;
    
    UPROPERTY(SaveGame)
    float NextVampireModeTick;
    
    UPROPERTY()
    float NextGenomePointIncrementTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 GenomePointsQueuedToAdd;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<int32> QueuedGenomePointCollection;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 GenomePoints;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float ParryActiveTime;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* IncomingAttackingEnemy;
    
    UPROPERTY(BlueprintReadOnly)
    AGzCutsceneRouter* ActiveCutscene;
    
    UPROPERTY(BlueprintReadWrite)
    AGzApocalypseCrisisCutscene* ActiveApocalypseCrisisIntroScene;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float PerformingMeleeAttackTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float ShowEcgTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float EcgAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentHealthStatus;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TEnumAsByte<EPlayerType> PlayerType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DisableExecutionCheck;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CullLightsPerRoom;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimePerPoisonTick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraTriggerCheckRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool PreciseCameraTriggerChecks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 HealthToRemovePerPoisonTick;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsInfected;
    
    UPROPERTY()
    bool ForceAlignedCinematicDeath;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* CinematicKiller;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool BlackWorld;
    
    UPROPERTY(BlueprintReadOnly)
    AGzMapSegmentEntity* ActiveMapSegment;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<TSoftObjectPtr<AGzMapSegmentEntity>> ExploredMapSegments;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<TSoftObjectPtr<AGzMapSegmentEntity>> CompletedMapSegments;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float TimeUntilCriticalAimTime;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGzMapSegmentEntity*> MapSegments;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TSoftObjectPtr<AGzInterDoor>> DoorsForMapSegment;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<UClass*> FoundMaps;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool ThirdPersonModeEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    AGzPreRenderedCamera* ActivePreRenderCamera;
    
    UPROPERTY()
    AGzInterDoor* ActiveDoorForTransition;
    
    UPROPERTY(BlueprintReadOnly)
    AGzEnemyAI* MindControlledAI;
    
    UPROPERTY(BlueprintReadOnly)
    AGzPreRenderCameraTrigger* ActiveCameraTriggerBeforeMindControlledEnemy;
    
    UPROPERTY(SaveGame)
    bool HidePlayer;
    
    UPROPERTY()
    float NextOneEightyDegreeTurnTime;
    
    UPROPERTY(SaveGame)
    TArray<FString> ObtainedWeapons;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FNamedTimer> NamedTimers;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FLevelEventData> LevelEventData;
    
    UPROPERTY()
    int32 CurrentMontagePriority;
    
    UPROPERTY()
    float CurrentMontagePlayingTime;
    
    UPROPERTY(BlueprintReadOnly)
    AGzElevatorGenerator* ActiveElevatorGenerator;
    
    UPROPERTY(BlueprintReadOnly)
    AGzClawMachine* ActiveClawMachine;
    
    UPROPERTY(BlueprintReadOnly)
    bool TempGodMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool TempNoTarget;
    
    UPROPERTY(SaveGame)
    TArray<FString> KeysMarkedForDelete;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool ForceCrippleEnemies;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool ForceHeadPops;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool Notarget;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool GodMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool GoingThroughDoor;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool BuddhaMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    bool InfiniteAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    bool InfiniteReloads;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* EnemyWeAreAimingAt;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeWeHaveBeenAimingAtEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UBoxComponent* CameraTriggerCheck;
    
    UPROPERTY()
    TArray<AGzPreRenderCameraTrigger*> ViableOverlappedTriggers;
    
    UPROPERTY(BlueprintReadOnly)
    float WeaponHideDuration;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FRichPresenceKeyValuePair> RichPresenceKeyValuePair;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString RichPresenceValue;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CurrentBossTimer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float TotalBossTimer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 TotalBossesKilled;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool BossTimerActive;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool BossTimerPaused;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool OnScreenTimerActive;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float GrappleEscapeTimerIncreasePerClick;
    
    UPROPERTY(EditAnywhere)
    bool DisableActivationOptimizations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FOnScreenTimer ActiveOnScreenTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrappleEscapeTimerDecreaseMultiplier;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float GrappleEscapeTimer;
    
    UPROPERTY(BlueprintAssignable)
    FTakeEnemyDamage OnTakeEnemyDamage;
    
    UPROPERTY()
    TArray<AGzPreRenderCameraTrigger*> CurrentlyOverlappedTriggers;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool BlackBarsEnabled;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsFalling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimTurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float WalkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float BikeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float ClimbHeight;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsSprinting;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float SprintHeldTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool IsCriticalAiming;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CriticalAimTime;
    
    UPROPERTY()
    float TimeSpentAiming;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool IsAiming;
    
    UPROPERTY()
    bool NoMoreCriticalAimUntilHolster;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool StrafeWhenAiming;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* EyeLocation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGz_WeaponManagerComponent* WeaponManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UInventoryComponent* InventoryManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UGzCharacterAppearance* CharacterAppearance;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGzCharacterSwitchComponent* CharacterSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGzAchievementManager* AchievementManager;
    
    UPROPERTY()
    float LastSprintPressedTime;
    
    UPROPERTY(SaveGame)
    bool SprintToggleActive;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 AppearanceIndex;
    
    UPROPERTY(SaveGame)
    int32 ActivePropDataAssetIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UGzLaserSightComponent* LaserSight;
    
    UPROPERTY(BlueprintReadWrite)
    FVector DesiredAimingLocation;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* ExpressionParameterCollection;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* ShadowRenderingMaterialCollection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* HeadMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* VocalSoundPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* TemporarySkeletalHandMesh;
    
    UPROPERTY()
    UAnimMontage* ActiveTemporaryHandMeshMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* MagazineMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* SilencerMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* ScopeMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HeightToConsiderFalling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* ShadowCaptureComponentRoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* ShadowCaptureComponentMover;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneCaptureComponent2D* ShadowCaptureComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USpringArmComponent* FirstPersonScopeSpringArm;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneCaptureComponent2D* FirstPersonScopeCaptureComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* FootstepDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* HintsMaximumTable;
    
    UPROPERTY()
    bool LeftStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* FootstepWalkMixSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* FootstepRunMixSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* FlashlightSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* FlashlightOnSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* FlashlightOffSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UCameraComponent* ThirdPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UCameraComponent* ExecutionCamera;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FDisplayMessageData> ActiveScreenMessages;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 NumberOfSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, SaveGame)
    bool PlayerDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool UseAutoAim;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float AutoAimSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float Health;
    
    UPROPERTY(BlueprintReadWrite)
    float GlobalUseDisableTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float GlobalAttackDisableTime;
    
    UPROPERTY(BlueprintReadOnly)
    AGzEnemyAI* ExecutionCandidate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ParryActiveWindow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeUntilCriticalAim;
    
public:
    UPROPERTY()
    float NextChokeTime;
    
    UPROPERTY()
    AGzChokingGasVolume* ActiveChokingVolume;
    
    UPROPERTY(BlueprintReadOnly)
    AGzHotAndColdVolume* ActiveHotAndColdVolume;
    
    UPROPERTY(BlueprintReadOnly)
    float OxygenLevel;
    
    UPROPERTY()
    TArray<ACharacter*> GrapplingEnemyCollisionArray;
    
    UPROPERTY(BlueprintReadWrite)
    bool InFirstPerson;
    
    UPROPERTY(BlueprintReadWrite)
    bool SavingManually;
    
    UPROPERTY(BlueprintReadWrite)
    float WeaponAimPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxParryCounterAttacks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimMontage*> ActionBlockingAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimMontage*> ParryCounterAttackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TimeUntilGameOverDeathScreen;
    
    UPROPERTY(SaveGame)
    TArray<int32> ScannedEnemyGUIDs;
    
    UPROPERTY(BlueprintReadWrite)
    AGzKeypad* ActiveKeypad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DrawPerceptionDebugInfo;
    
    UPROPERTY(EditAnywhere)
    bool DrawWeaponDebugInfo;
    
    UPROPERTY()
    TArray<AActor*> FlyingMeleeHitVictims;
    
    UPROPERTY()
    float FlyingMeleeTime;
    
    UPROPERTY(BlueprintReadOnly)
    AGzCameraTriggerBox* ActiveCameraTrigger;
    
    UPROPERTY(BlueprintReadOnly)
    AGzPreRenderCameraTrigger* ActivePreRenderCameraTrigger;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FString CurrentThoughts;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FText CurrentLocation;
    
    UPROPERTY(SaveGame)
    TArray<FString> LocationsVisited;
    
    UPROPERTY(BlueprintReadOnly)
    int32 QueuedDodgeDirection;
    
    UPROPERTY(BlueprintReadOnly)
    bool HoldingDodge;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float NextDodgeTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float InDodgeParryTime;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPlayerDamageType> CurrentDamageType;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPlayerDamageDirection> CurrentDamageDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlockInsteadOfParry;
    
    UPROPERTY(BlueprintReadWrite)
    float BlockPreventTime;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* PickUpItemCandidate;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float InvulnerabilityTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float NextUseTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float NextMeleeTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float LockPlayerMovementTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool FoundSecretCoin;
    
    UPROPERTY()
    float CriticalAimDrawTime;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 NumPenguinsWon;
    
    UPROPERTY(EditDefaultsOnly)
    bool StartWithFlashlightOn;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool FlashlightState;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool RootMotionRotationModeEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool PinpointShotReady;
    
    UPROPERTY(BlueprintReadOnly)
    float FollowAutoAimEnemyTime;
    
    UPROPERTY()
    float PinPointShotRunningTime;
    
    UPROPERTY()
    float PinPointShotRandomSeed;
    
    UPROPERTY(BlueprintReadOnly)
    bool CannotChoosePathOnGamepadHack;
    
    UPROPERTY(BlueprintReadOnly)
    float HoldUseCutsceneSkipTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeToHoldUseToSkipCutscenes;
    
private:
    UPROPERTY(SaveGame)
    bool AwaitingUseReleaseToSkipCutscene;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AActor* AutoAimCandidate;
    
    UPROPERTY()
    TArray<AActor*> AutoAimCandidates;
    
    UPROPERTY()
    AActor* AutoAimCandidateEnvironment;
    
    UPROPERTY()
    TArray<AActor*> AutoAimCandidatesEnvironment;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    float NextCounterAttackTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    float CounterAttackWindowTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    float ForceCounterAttackWindowTime;
    
    UPROPERTY()
    int32 NumberOfCounterAttacks;
    
    UPROPERTY(SaveGame)
    float NextPrimaryAttackTime;
    
    UPROPERTY(SaveGame)
    float NextSecondaryAttackTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnViewConeHalfAngleDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAimingDistBeforeUseDistInsteadOfAngle;
    
    UPROPERTY()
    float ViewConeDotThreshold;
    
    UPROPERTY(SaveGame)
    bool InReload;
    
    UPROPERTY(SaveGame)
    float ReloadTime;
    
    UPROPERTY(SaveGame)
    float ForwardSpeed;
    
    UPROPERTY(SaveGame)
    float SideSpeed;
    
    UPROPERTY()
    float AnimationSwitchIdleBlockingTime;
    
public:
    AGzCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void VampireModeSpawnOrb(const float HealthToGive, const AActor* Victim, const FVector Location);
    
    UFUNCTION()
    void UseSyringe();
    
    UFUNCTION(BlueprintCallable)
    void UseSafeCrackingExplosive();
    
    UFUNCTION(BlueprintCallable)
    void UseCipher();
    
    UFUNCTION(BlueprintCallable)
    void UnlockDoorGroup(const FString& DoorGroup);
    
    UFUNCTION(BlueprintCallable)
    void TurnFlashlightOn(const bool NoSound);
    
    UFUNCTION(BlueprintCallable)
    void TurnFlashlightOff(const bool NoSound);
    
    UFUNCTION(BlueprintCallable)
    void TryDestroyBike();
    
    UFUNCTION(BlueprintCallable)
    void TryDamagePlayer(const float Damage, TEnumAsByte<EPlayerDamageType> DamageType, AActor* Causer, USoundBase* ImpactSound, const bool SpawnBloodParticles, const FVector BloodLocation, UAnimMontage* CustomHurtAnimation, const float CustomHurtAnimationPriority, bool HideWeaponDuringHurtAnimation, const float InvulnerabilityDuration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerSlowMotion(const float Speed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerShowHint(const FString& HintText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerFlinchAnimation(FVector DamageLocation, TEnumAsByte<EPlayerDamageType> DamageType) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void ThrowFlare();
    
    UFUNCTION(BlueprintCallable)
    bool TeleportGzPlayer(const FVector Location, const FRotator Rotation, const bool DontOffsetPlayerHeight);
    
    UFUNCTION(BlueprintCallable)
    void TakeControlOfEnemy(AGzEnemyAI* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPlayerModel(FModelChangeParameters NewModel);
    
    UFUNCTION(BlueprintCallable)
    void SwapInventoryItem(const FName From, const FName To, const bool SilentGive, bool AppendToBeginningHack, const int32 AmountOverride, const bool ReplaceAllInstances);
    
    UFUNCTION(BlueprintCallable)
    void SubtractFromInventoryAmount(int32 Slot, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void StopMoving(bool StopAiming);
    
    UFUNCTION(BlueprintCallable)
    void StopIngameDialogue(const bool FireOnDialogueEnded);
    
    UFUNCTION()
    void StopControllingEnemyEnd();
    
    UFUNCTION(BlueprintCallable)
    void StopBossTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartRappelling(const FVector& TeleportPosition, const FRotator& TeleportRotation, const FRappelData& RappelData);
    
    UFUNCTION()
    void StartPostCombatMusic(UMusicDataAsset* Music, const float FadeInTime) const;
    
    UFUNCTION(BlueprintCallable)
    void StartIngameDialogue(UGzIngameDialogueConversation* DialogueConversation);
    
    UFUNCTION(BlueprintCallable)
    void StartBossTimer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBloodPool();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnBlood(const FVector Location, const FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SimulateGGGBug(const int32 TimesJuicedGreenAmount);
    
    UFUNCTION()
    void ShowWeaponVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldChoke() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponHiddenDuration(const float duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetWeaponHidden(const bool Hidden) const;
    
    UFUNCTION(BlueprintCallable)
    void SetupPlayerModel();
    
    UFUNCTION(BlueprintCallable)
    void SetupItemsMarkedForDelete();
    
    UFUNCTION(BlueprintCallable)
    void SetUnderwater(const bool Underwater);
    
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonModeEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSwimming(const bool Swimming);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSlidingChecksActive(const bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetScannerUpgraded();
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionRotationMode(const bool Enabled);
    
    UFUNCTION()
    void SetRidingBoat(const bool Riding) const;
    
    UFUNCTION()
    void SetRichPresenceOnLoad();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSpeed(const float Side, const float Forward);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerExpression(TEnumAsByte<EPlayerExpression> Expression, bool BlinkReset);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerDisabled(bool Locked);
    
    UFUNCTION(BlueprintCallable)
    void SetOnScreenTimer(const int32 Minutes, const int32 Seconds, const FString& ActorTagToFireAtZero, const FString& FunctionName, const float HoldOnZeroTime, const float FlashRedWhenTimeLessThan, const float FlashSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjective(const FString& Objective);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSecondaryAttackTime(const float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetNextPrimaryAttackTime(const float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSegmentExplored(AGzMapSegmentEntity* Segment);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSegmentCompleted(AGzMapSegmentEntity* MapSegment, const bool IgnoreLinkedSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetLastUsedDoorEntrance(FLastUsedDoorEntrance EntranceData);
    
    UFUNCTION(BlueprintCallable)
    void SetInventorySlotAmount(const int32 Slot, const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetInfected(bool Infected);
    
    UFUNCTION(BlueprintCallable)
    void SetIFramesDuration(const float duration, const bool SetEvenIfLowerThanCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldingFlare(const bool IsHolding, const float ThrowAwayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(const float NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetForceCounterAttackWindowTime(const float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLocation(FText Location, const bool ShowAnimationEvenIfAlreadyVisited, const bool MinorLocation, const bool ShowMinorLocationIfAlreadyVisited, bool NoAnimation);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetCameraAsActiveCamera(ACameraActor* Camera);
    
    UFUNCTION(BlueprintCallable)
    void SetBossTimerPaused(const bool Paused);
    
    UFUNCTION(BlueprintCallable)
    void SetBlocking(const bool bLock);
    
    UFUNCTION(BlueprintCallable)
    void SetApocalypseCrisisTimer(const float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveUfoPawn(AGzUfoPawn* Ufo);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveBoat(AGzDriveableBoat* Boat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScanObject(AActor* Object);
    
    UFUNCTION(BlueprintNativeEvent)
    void ScanEnemyCorpse(AGzEnemyAI* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RunActivationOptimization() const;
    
    UFUNCTION(BlueprintCallable)
    void RotatePlayer(const FRotator& Rotation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RingBellBikeMode();
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromInventory(FName ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemAmountFromInventory(const FString& ID, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHealth(const float Amount, const bool NoKill, const bool EvenInGodMode);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItemInstances(const FName ItemId, const bool RemoveAllInventory, const bool RemoveAllSafe);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSeenItem(TSoftObjectPtr<AGzInventoryItem> Item);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMapItemOfInterest(FMapItemOfInterest ItemOfInterest, bool& DidRegister);
    
    UFUNCTION(BlueprintCallable)
    void ReEquipWeaponAfterFlareDrop();
    
    UFUNCTION(BlueprintCallable)
    void ReduceStamina(const float Amount, const float BlockRecoveryTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayVocalSound(TEnumAsByte<EVocalSoundType> SoundType, USoundBase* SoundOverride, const bool Force);
    
    UFUNCTION(BlueprintCallable)
    float PlayMontageSequence(UAnimMontage* Montage, bool FreezePlayer, const int32 Priority, const float FreezeDurationMultiplier, const bool HideWeaponDuring, USkeletalMesh* TemporaryHandMesh, const FString& TempHandMeshSocket, const float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayInvincibleMontage(UAnimMontage* Montage, bool UseInterp, FTransform InterpTransform, const float InterpTime, bool DisableGravity, bool DisableCollisions, const bool HideWeapon, USkeletalMesh* TempHandMesh, const FString& TempHandMeshSocket, UAnimMontage* WeaponMontage);
    
    UFUNCTION(BlueprintPure)
    bool PlayerIsSliding() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool PlayerCanMove(const bool IgnoreCriticalAiming) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool PerformUseCheck(const bool CheckingUnlock, const int32 InventorySlot, const FString& KeyItem, bool ReleasingUse, bool PulseCheck);
    
    UFUNCTION(BlueprintCallable)
    void PerformPickUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PauseUse();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PauseTurnLeftRight(const float Value);
    
    UFUNCTION(BlueprintNativeEvent)
    void Parry();
    
    UFUNCTION(BlueprintCallable)
    void OpenMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUseSyringe();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnToggledControlSchemeInControlSelection();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTakenControlOfEnemy(AGzEnemyAI* Enemy, AGzPreRenderCameraTrigger* CameraTrigger);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSyringeInjected(FLinearColor Colour);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwitchPlayerModel(FModelChangeParameters NewModel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwitchedTarget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwitchedFirstPersonScopeMode(const bool ScopeEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwitchedCharacter();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSwappedInventoryItems(const int32 From, const int32 To);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopPushingObject();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStoppedSliding();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopBlocking();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartPushingObject();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartParrying();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartGrappling();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartedSliding();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartCutscene(AGzCutsceneRouter* CutsceneRouter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartBlocking();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnExecutionParticle(const FTransform Transform, const int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnBloodPool(const FVector Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlicedEnemy(const AGzEnemyAI* EnemyAI);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowMuzzleFlash(const FWeaponData WeaponData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowHitMarker(const bool KillingShot, FVector HitLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetupPlayerModelMesh(USkeletalMeshComponent* NewMesh);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetNewCameraDirection(const float DeltaX, const float DeltaY);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetCCTVEnabled(bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnScannedWithDisabledScanner();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRegisteredMapItemOfInterest();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRappelFinished(const float AnimTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnQuickTurn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerParryDamage(AActor* Enemy);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerLandedFromFalling(FFootstepMaterialData FootstepMaterialData);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnPlayerKilled(bool KilledByGrapple);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPlayerExploded(bool ApocalypseCrisisExplosion);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEvictedScreenMessage(const int32 Index);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOutOfBreath();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMeleeKickHitEnemy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockedTarget();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnIncrementedGenomePoints(const int32 NewValue, const int32 OldValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitWhileBlocking(const float Damage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHighNoonStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHighNoonEnded();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHealthStateChanged(EHealthStatus OldState, EHealthStatus NewState);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrappleTimerIncremented(const bool Succeeded);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrappleStateChanged(EGrapplingState GrapplingState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGotNewWeapon(const FString& WeaponID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGotNewItemForCollection(const FString& ItemId);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGotNewItem(FInventoryTableItem Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGotCriticalShot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlyingCharacterLandOnFloor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlyingCharacterHitWall(FHitResult Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashlightTurnedOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashlightTurnedOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashbanged(const AActor* FlashbangActor, const FVector FlashbangOrigin);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFlareBurntOut();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFiredWeaponWithScope(FVector Kick);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFiredSatelliteGun();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEscapeGrappling();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEquippedFlare();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnteredNewLocation(const FText& LocationName, const bool MinorLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndCutscene(AGzCutsceneRouter* CutsceneRouter);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDropFlare(const bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable)
    void OnDodged();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDialogueStarted();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDialogueEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCounterAttacked();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnColdBreath();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnClickedKeyItemInInventory(const int32& InventorySlot, const FString& KeyItem);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedInventorySlot(const int32 Slot, bool& DidSomething, bool& DidHeal, bool& DrewWeapon, bool& UnlockedSomething, bool& DidHealPoison);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterStartFlying(bool KillingBlow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChapterEnded(const int32 ChapterNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedAppearance(const bool DidChange);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCCTVSwitchCameraOrRoom();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBlockParry();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBikeModeStartSprint();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginSlice();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAutoAimAtEnemy(AActor* Enemy, float Degrees);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAppearanceChanged(UGzPlayerAppearanceDataAsset* NewAppearance);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnApocalypseCrisisComboReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAchievementUnlocked(const FAchievementDefinition Achievement);
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillPlayer();
    
public:
    UFUNCTION(BlueprintPure)
    bool ItemShouldBlink(AActor* Item, const float MaxDistance, float& OutAlpha, const FVector2D& BoxSize, FVector2D& ScreenLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCall() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCarryingHeavyWeapon() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimingThroughScope() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool InWater();
    
    UFUNCTION(BlueprintCallable)
    bool InventoryIsFull();
    
    UFUNCTION()
    void InventoryButtonReleased();
    
    UFUNCTION()
    void InventoryButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void InterpolateTo(const FVector Location, const FRotator Rotation, const float Time, const bool UseLocationAsFeetPosition);
    
    UFUNCTION(BlueprintCallable)
    bool InsertIntoSyringe(const int32 ItemIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputOnInventoryReleased(const float HeldTime);
    
    UFUNCTION()
    void InputLockOnToTarget();
    
    UFUNCTION()
    void InputAutoAimChangeTarget();
    
    UFUNCTION(BlueprintPure)
    bool InMovingCameraTrigger() const;
    
    UFUNCTION(BlueprintPure)
    bool HasScannedThisEnemy(const AGzEnemyAI* Enemy) const;
    
    UFUNCTION(BlueprintCallable)
    ACharacter* HasScannableObjectNearby();
    
    UFUNCTION(BlueprintCallable)
    int32 HasRoomForExtraOfItem(FName ID, int32& SlotID);
    
    UFUNCTION(BlueprintCallable)
    bool HasItemInInventoryOrSafe(FName ID);
    
    UFUNCTION(BlueprintCallable)
    bool HasItemInInventory(FName ID);
    
    UFUNCTION(BlueprintPure)
    bool HasGodMode() const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePreRenderCameraTriggers();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleModernControlsMovement(const bool ForceFromDodge, const FVector2D ForceDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void GiveStamina(const float Amount);
    
    UFUNCTION(BlueprintCallable)
    void GiveItemToPlayerOrSpawnAtFeet(const FName ItemName, const FString& DoNotGiveIfOwnedWeapon, bool& DidGiveGiveItem, bool ForceSpawnLocation, const FVector LocationToSpawnAt);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetWeaponParryMontage();
    
    UFUNCTION(BlueprintPure)
    UGz_WeaponManagerComponent* GetWeaponManager() const;
    
    UFUNCTION(BlueprintPure)
    UAimOffsetBlendSpace1D* GetWeaponAimingBlendSpace();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTargetEnemy(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetStrafeSpeeds();
    
    UFUNCTION(BlueprintPure)
    UPlayerStatsManagerComponent* GetStatsComponent();
    
    UFUNCTION(BlueprintPure)
    float GetStamina() const;
    
    UFUNCTION(BlueprintNativeEvent)
    USoundBase* GetSoundForVocalType(EVocalSoundType SoundType);
    virtual USoundBase* GetSoundForVocalType_Implementation(EVocalSoundType SoundType);
    
    UFUNCTION(BlueprintPure)
    float GetSideSpeedSafeNormalized() const;
    
    UFUNCTION(BlueprintPure)
    float GetSideSpeedSafe() const;
    
    UFUNCTION(BlueprintPure)
    float GetSideSpeed(bool Normalized) const;
    
    UFUNCTION(BlueprintCallable)
    float GetScreenMessageAlpha(int32 MessageIndex, float FadeInTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetSaveName();
    
    UFUNCTION(BlueprintPure)
    float GetRunSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UFXSystemComponent*> GetParticleComponents() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfSafeCrackingExplosives() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfCiphers() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxSyringeCapacity() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMapSegmentOffsets(AGzMapSegmentEntity* Segment, FVector ActorLocation, FVector2D CanvasLocation, FVector2D CanvasSize, float& OffsetX, float& OffsetY, float& OutPositionX, float& OutPositionY, AActor* ItemOverride);
    
    UFUNCTION(BlueprintCallable)
    FText GetLocationFromInfo(FText NewLocation, FText MinorLocationIfNewLocationVisitedAlready, bool& IsMinorLocation, bool DoorMinorLocation);
    
    UFUNCTION(BlueprintPure)
    float GetKnifeChargeAmount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetInventorySlotForInventoryID(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInventorySlotAmount(int32 Slot);
    
    UFUNCTION(BlueprintPure)
    UInventoryComponent* GetInventoryManager();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    FVector2D GetInputSensitivities();
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EHealthStatus> GetHealthStatus(TEnumAsByte<EHealthStatus>& PureHealthStatusWithoutInfection) const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthRatio() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetGrenadeThrowParameters(FVector& StartPosition, FVector& Velocity);
    
    UFUNCTION(BlueprintPure)
    float GetForwardSpeedSafeNormalized() const;
    
    UFUNCTION(BlueprintPure)
    float GetForwardSpeedSafe() const;
    
    UFUNCTION(BlueprintPure)
    float GetForwardSpeed(bool Normalized) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFootPosition() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FWeaponAnimationData GetFlareWeaponData();
    
    UFUNCTION(BlueprintPure)
    UGzCharacterSwitchComponent* GetCharacterSwitcher() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FText GetCharacterName();
    
    UFUNCTION(BlueprintPure)
    UGzCharacterAppearance* GetCharacterAppearance();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetAutoaimLocationForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    AGzMapSegmentEntity* GetActiveMapSegment(FVector2D CanvasLocation, FVector2D CanvasSize, float& OffsetX, float& OffsetY, float& OutPositionX, float& OutPositionY);
    
    UFUNCTION(BlueprintPure)
    UGzAchievementManager* GetAchievementManager() const;
    
    UFUNCTION(BlueprintCallable)
    void GatherMapSegments();
    
    UFUNCTION(BlueprintCallable)
    void GatherAllItemsInMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FlashPinpointShotBar(const float Delay);
    
    UFUNCTION(BlueprintPure)
    bool FlashlightIsOn() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishExecutingEnemy();
    
    UFUNCTION(BlueprintCallable)
    void ExplodePlayer(bool ApocalypseCrisisExplosion, bool ForceExplode);
    
    UFUNCTION()
    void ExplodeControlledEnemy();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteEnemy(AGzEnemyAI* EnemyAI);
    
private:
    UFUNCTION(BlueprintCallable)
    void EvictOldScreenMessages();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void Dodge(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void DieByCinematic(AActor* Killer, USkeletalMeshComponent* KillerMesh, UAnimMontage* PlayerDeathSequence, UAnimMontage* KillerKillSequence, bool ShowOnlyBlackWorld, float TimeUntilGameOverScreen, bool UseMeshTransform, const FVector AdditionalMeshLocation, const FRotator AdditionalMeshRotation, const FTransform ForceAdditionalPlayerTransform, const FTransform ForceAdditionalEnemyTransform, const bool ForceAlignment);
    
    UFUNCTION(BlueprintCallable)
    void DeployWeapon(int32 SlotID);
    
    UFUNCTION(BlueprintCallable)
    void DamagePlayer(const float Damage, TEnumAsByte<EPlayerDamageType> DamageType, AActor* Causer, USoundBase* ImpactSound, const bool SpawnBloodParticles, const FVector BloodLocation, UAnimMontage* CustomHurtAnimation, const float CustomHurtAnimationPriority, bool HideWeaponDuringHurtAnimation, const float InvulnerabilityDuration, const bool DoTryDamageInstead);
    
    UFUNCTION(BlueprintCallable)
    void ClearShrineLevelTravelData();
    
    UFUNCTION(BlueprintCallable)
    void ClearMapItemsOfInterest();
    
    UFUNCTION(BlueprintNativeEvent)
    void ChokeCough();
    
    UFUNCTION()
    void CheckThrowAwayFlare();
    
    UFUNCTION(BlueprintPure)
    bool CanTakeDamage(AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanShowHint(const FString& HintName);
    
    UFUNCTION(BlueprintPure)
    bool CanShowGrappleTimer() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSeeActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool CanRotatePlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool CanParry() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanMindControlEnemy(AGzEnemyAI* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    bool CanDodge();
    
    UFUNCTION(BlueprintPure)
    bool CanCounterAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelBossTimer();
    
    UFUNCTION(BlueprintPure)
    int32 CalculateSinglePlayerGrade(const FString& RowName, const bool UseFakeData, const FTimespan FakeTime, const int32 FakeDamage, const int32 FakeSaves);
    
    UFUNCTION(BlueprintCallable)
    void CalculateNormalizedPositionInMapSegmentByLocation(AGzMapSegmentEntity* Segment, const FVector Location, bool& InsideSegment, float& NormalizedX, float& NormalizedY);
    
    UFUNCTION(BlueprintCallable)
    void CalculateNormalizedPositionInMapSegment(AGzMapSegmentEntity* Segment, const AActor* Actor, bool& InsideSegment, float& NormalizedX, float& NormalizedY);
    
    UFUNCTION(BlueprintCallable)
    void CalculateModernControlsDodgeDirection();
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateApocalypseCrisisGrade(const int32 MaxBountyEnemies, const int32 MapLengthInCm, const int32 NumEnemiesInCampaign);
    
    UFUNCTION(BlueprintCallable)
    void CachePlaythroughSaveInfo(UEMSObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void BuildVisibleTargets(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void BuildVisibleItems(const float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPOnClickedKeyItemInInventory(const int32& InventorySlot, const FString& KeyItem);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPMovementIsBlocked();
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPInputIsBlocked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintOpenMap(TSubclassOf<UUserWidget> UserWidgetClass);
    
    UFUNCTION(BlueprintNativeEvent)
    void BlueprintExecuteEnemy(AGzEnemyAI* EnemyAI);
    
    UFUNCTION(BlueprintPure)
    bool BlockCanParry() const;
    
    UFUNCTION()
    void Blink();
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginPickUp();
    
    UFUNCTION(BlueprintPure)
    bool AreModernControlsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void ArchiveDocument(UGzWristGadgetDataAsset* Document, const bool NoMessage);
    
    UFUNCTION(BlueprintCallable)
    void ApplySavethroughSaveInfo(UEMSObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void ApplyLoadOut();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterProp(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void AddToInventoryAmount(int32 Slot, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddScreenMessage(FName Message, float DisplayTime, FName AppendText, bool FreezeWorld, AGzPreRenderedCamera* CameraToView, bool IsInspectMessage, UObject* CallbackObject, FName FunctionName, bool IsYesNoMessage, UObject* YesCallbackObject, FName YesFunctionName, UObject* NoCallbackObject, FName NoFunctionName, AActor* CallingActor, bool AppendToBeginning, const bool AutoScroll, UGzWristGadgetDataAsset* ArchiveDocumentAfterReading, int32 MessageIndex, const FString& TextTableOverride);
    
    UFUNCTION(BlueprintCallable)
    void AddHintSeen(const FString& HintName);
    
    UFUNCTION(BlueprintCallable)
    void AddHealth(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddGenomePointsToCollection(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraOnPlayerBP(USceneComponent* Camera, FViewTargetTransitionParams TransitionParams);
    

    // Fix for true pure virtual functions not being implemented
};

