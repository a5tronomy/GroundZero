#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Components/SplineComponent.h"
#include "InputCoreTypes.h"
#include "Styling/SlateTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "AchievementDefinition.h"
#include "CombatMusic.h"
#include "ConsoleCompileFriendlyDiscordPresence.h"
#include "EActiveCheats.h"
#include "EDifficultyMode.h"
#include "EGZNetworkSwitch.h"
#include "EGamepadGridMoveDirection.h"
#include "GzMonitorInfo.h"
#include "GzTempSubtitleImport.h"
#include "LiveConfigPropertyCondition.h"
#include "MalformationCustomKeyBinding.h"
#include "MapPositionResult.h"
#include "RichPresenceKeyValuePair.h"
#include "SaveSlotMetaData.h"
#include "SubtitleLengthChecker.h"
#include "Templates/SubclassOf.h"
#include "TextCipherOffset.h"
#include "TypewriterTag.h"
#include "GzBlueprintFunctionLibrary.generated.h"

class AActor;
class ACharacter;
class AGzCharacter;
class AGzEnemyAI;
class AGzHumanNpcCharacter;
class AGzPreRenderedCamera;
class ATriggerVolume;
class IBlendableInterface;
class UBlendableInterface;
class UBoxComponent;
class UCheckBox;
class UDataTable;
class UFont;
class UFontFace;
class UGridSlot;
class UGzSoundAmbienceAsset;
class UGzWristGadgetDataAsset;
class ULevel;
class ULevelStreaming;
class UMaterial;
class UMaterialInterface;
class UMovieScene;
class UMusicDataAsset;
class UObject;
class UPhysicalMaterial;
class UPostProcessComponent;
class UPrimitiveComponent;
class USceneComponent;
class USlateBrushAsset;
class USplineComponent;
class UStaticMeshComponent;
class UTexture2D;
class UUniformGridSlot;
class UUserWidget;
class UWidget;
class UWorld;

UCLASS(BlueprintType)
class GROUNDZERO_API UGzBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzBlueprintFunctionLibrary_Statics;
public:
    UGzBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ZoomMouseOnWidget(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, const FVector2D MousePosition, UWidget* ZoomTarget, UPARAM(Ref) FVector2D& ZoomOrigin, UPARAM(Ref) float& ZoomLevel);
    
    UFUNCTION(BlueprintCallable)
    static void WriteFile(const FString& File, const FString& contents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnregisterAsVisibleToPlayer(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockAchievement(UObject* WorldContextObject, const FString& Achievement, bool ForceSteamNotify, bool ForceThisAchievement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnbindKeyFromAllMappings(UObject* WorldContextObject, const FKey& TargetKey, const FName& ExceptionMappingName, TArray<FString>& UnboundMappings, const TArray<FString> AdditionalExceptions, const TArray<FString> LinkedInputs, const bool OnlyLinkedOnGamepad, const FString& ActionName);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIGamePadMoveDirectionGrid(int32 CurrentIndex, int32 NumColumns, int32 NumRows, EGamepadGridMoveDirection Direction, const int32 OverrideMaxIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TryUnlockAchievement(UObject* WorldContextObject, const FString& Achievement, const bool NotOnApocalypseCrisis);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerShowHint(UObject* WorldContextObject, const FString& HintText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerPlayerKnockback(UObject* WorldContextObject, AGzCharacter* Player, const FRotator Angle, const FVector Velocity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleDistanceCulling(UObject* WorldContextObject, UPrimitiveComponent* Component, const bool EnableCulling);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleAllCullDistanceVolumes(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SwitchOnDifficulty(UObject* WorldContextObject, TEnumAsByte<EDifficultyMode>& Difficulties, TEnumAsByte<EDifficultyMode>& CurrentDifficulty, const bool PuzzleDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FColor> StringToRGBArray(const FString& Input);
    
    UFUNCTION(BlueprintCallable)
    static bool StringTableToString(const FString& FilenameIn, const FString& FilenameOut);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopMusic(UObject* WorldContextObject, const float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void StopInterpolateActorMeshesTo(const AActor* Actor, const float InterpTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopAmbientSound(UObject* WorldContextObject, const float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> SplitStringByNewlines(const FString& In);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> SplitByTokenBrackets(const FString& Input);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSubtitleLengthChecker> SortSubtitleChecksByLength(TArray<FSubtitleLengthChecker> Subtitles);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UGridSlot*> SortGridSlotsByRowAndColumn(const TArray<UGridSlot*>& InputSlots);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USceneComponent*> SortComponentsByDistance(AActor* Actor, TArray<USceneComponent*> Components, const bool RemoveComponentsUnsafeForPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void SetWidgetNavigation(bool AllowAnalog, bool AllowKey, bool AllowTab);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupFontLanguageOverrideDefaults(UObject* WorldContextObject, UFont* Font, UFontFace* SimplifiedChineseFont, UFontFace* TraditionalChineseFont, UFontFace* JapaneseFont, UFontFace* KoreanFont, UFontFace* RussianFont);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSinglePostProcessMaterialEnabled(UObject* WorldContextObject, AActor* Actor, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveMetaData(UObject* WorldContextObject, const FString& SaveSlotName, FSaveSlotMetaData SaveMetaData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRichPresenceKeyValuePairs(UObject* WorldContextObject, TArray<FRichPresenceKeyValuePair> KeyValuePairs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRichPresence(UObject* WorldContextObject, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcessMaterialBlendWeight(UPostProcessComponent* PostProcess, const int32 Index, const float Weight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOnScreenTimer(UObject* WorldContextObject, const int32 Minutes, const int32 Seconds, const FString& ActorTagToFireAtZero, const FString& FunctionName, const float HoldOnZeroTime, const float FlashRedWhenTimeLessThan, const float FlashSpeed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetObjective(UObject* WorldContextObject, const FString& Objective);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNamedTimerValid(UObject* WorldContextObject, const FString& TimerName, const bool IsValid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNamedTimer(UObject* WorldContextObject, const FString& TimerName, float TimerValue, const bool ValidValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMousePosition(UObject* WorldContextObject, const float X, const float Y);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLiveEventCondition(UObject* WorldContextObject, const FLiveConfigPropertyCondition LiveEventCondition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName, const FString& Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDiscordPresence(UObject* WorldContextObject, const bool Clear, const FConsoleCompileFriendlyDiscordPresence& RichPresence);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDesiredVolumeForLayer(UObject* WorldContextObject, const int32 LayerNumber, const float Volume, const float FadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrentPlayerThoughts(UObject* WorldContextObject, const FString& Thoughts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrentLocation(UObject* WorldContextObject, FText Location, const bool ShowAnimationEvenIfAlreadyVisited, const bool MinorLocation, const bool ShowMinorLocationIfAlreadyVisited, const bool NoAnimation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCrankedModeTemporarilyPaused(UObject* WorldContextObject, const float duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCrankedModePaused(UObject* WorldContextObject, const bool Paused);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCombatMusic(UObject* WorldContextObject, FCombatMusic CombatMusicData);
    
    UFUNCTION(BlueprintCallable)
    static void SetCheckedStateAndBroadcast(UCheckBox* CheckBox, ECheckBoxState NewState);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllMeshesWet(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAllAIPaused(UObject* WorldContextObject, bool Paused, AGzEnemyAI* ExceptionAI, AGzHumanNpcCharacter* ExceptionBlackOps);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActivePreRenderedBackground(UObject* WorldContextObject, AGzCharacter* Player, TScriptInterface<IBlendableInterface> InBlendableObject, UMaterial* ParentClassToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveMonitor(int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAchievementStatInt(const FString& StatName, const int32 Value, const bool ShowNotification, FAchievementDefinition AchievementToShowNotificationFor, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAchievementStatFloat(const FString& StatName, const float Value, const bool ShowNotification, FAchievementDefinition AchievementToShowNotificationFor, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AGzPreRenderedCamera*> SelectCamerasFromFile(TArray<AActor*> AllCameras, const FString& Filename);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ScreenFadeGz(UObject* WorldContextObject, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* SaveRGBArrayAsTexture(const TArray<FColor>& ColorArray, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D RotateNormalizedRoomPos(const FVector2D& NormalizedRoomPos, const float RotationDegrees, const FVector2D PivotPoint);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D RotateItemWithinRoom(const FVector2D& LocalItemPos, const FVector2D& RoomSize, const float RoomRotationDegrees);
    
    UFUNCTION(BlueprintCallable)
    static FRotator RInterpToShortestPath(FRotator current, FRotator Target, float DeltaTime, float InterpSpeed, bool bShortestPath);
    
    UFUNCTION(BlueprintCallable)
    static FString RGBArrayToString(const TArray<FColor>& ColorArray);
    
    UFUNCTION(BlueprintCallable)
    static void ResetToDefaultControls();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetLevelCache(UObject* WorldContextObject, const bool DeleteEvents, const bool DeleteMemory, TArray<FString> DontDeleteEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetCrankedTimer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAchievement(const FString& AchievementName);
    
    UFUNCTION(BlueprintCallable)
    static void RequestUserStats();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBlendable(UPostProcessComponent* PostProcessComponent, TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAllItemInstances(UObject* WorldContextObject, const FName ItemId, const bool RemoveAllInventory, const bool RemoveAllSafe);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterComponentForRendering(UObject* WorldContextObject, UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterAsVisibleToPlayer(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterActorForRendering(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterActorAsPerceptibleToPlayer(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterActorAsPerceptibleToEnemies(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ReduceTimerDeltaTime(UPARAM(Ref) float& Value, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessLionbridgeCsvFiles(const FString& FolderPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PostEditChange(UObject* WorldContextObject, AActor* Actor, const bool MarkDirty);
    
    UFUNCTION(BlueprintCallable)
    static bool PointOverlapsThisVolume(const UBoxComponent* Box, const FVector Point, float& OutDistanceToPoint, float SphereRadius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PointIsEncompassedByVolume(UObject* WorldContextObject, const FVector Location, const ATriggerVolume* Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayMusic(UObject* WorldContextObject, UMusicDataAsset* Track, const float FadeOutTime, const float FadeInTime, const bool CrossfadeMusic, const bool DontPlaySameMusic, const bool ApocalypseCrisis);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayFootstepSound(UObject* WorldContextObject, UDataTable* Table, const FVector StartLocation, const FVector EndLocation, const FVector SoundLocation, AActor* IgnoreActor, const bool LeftStep, const bool IsSprinting, UPhysicalMaterial* OverrideMaterial, ACharacter* AttachActor, const float VolumeOverride, const bool UseSpatialization);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayerHasKey(UObject* WorldContextObject, AGzCharacter* CheckingPlayer, FName InventoryKey, bool RemoveKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayAmbientSound(UObject* WorldContextObject, UGzSoundAmbienceAsset* Asset, const float FadeInTime, const bool DontPlaySameSound);
    
    UFUNCTION(BlueprintPure)
    static bool PlatformIsXbox();
    
    UFUNCTION(BlueprintPure)
    static bool PlatformIsSteamDeck();
    
    UFUNCTION(BlueprintPure)
    static bool PlatformIsPS5();
    
    UFUNCTION(BlueprintPure)
    static bool PlatformIsPC();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PerformCameraShake(UObject* WorldContextObject, float Intensity, float duration, const float LocationX, const float LocationY, const float LocationZ, const float Distance);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D PanWithinThreshold(const FVector2D& MousePos, const float Threshold, const bool FlipX, const bool FlipY);
    
    UFUNCTION(BlueprintCallable)
    static bool MeshHasVertexColours(UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkKeyItemForDelete(UObject* WorldContextObject, const FString& KeyItem);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeTypewriterEffectWithSpaces(const FString& FullTextIn, int32 DesiredLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LockAchievement(UObject* WorldContextObject, const FString& Achievement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsVisibleForDifficulty(UObject* WorldContextObject, const int32 DifficultyValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTeleportLocationSafe(ACharacter* Character, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IsServerOrClientSide(UObject* WorldContextObject, EGZNetworkSwitch& Branches);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPreCertBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGameWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsEventReplyHandled(FEventReply Reply);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsEditorWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsDraggingAndDropping(FEventReply Reply);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCheatActiveIndex(UObject* WorldContextObject, const TEnumAsByte<EActiveCheats> Cheat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCheatActive(UObject* WorldContextObject, const FString& Cheat);
    
    UFUNCTION(BlueprintPure)
    static bool IsAllowedRebindKey(const FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static void InterpolateActorMeshesTo(const AActor* Actor, const FVector Location, const FRotator Rotation, const float InterpTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncrementEnemiesKilled(UObject* WorldContextObject, const bool Melee);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncrementAchievementStatInt(const FString& StatName, const int32 Amount, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementAchievementStatFloat(const FString& StatName, const float Amount);
    
    UFUNCTION(BlueprintCallable)
    static bool HasUnlockedAchievement(const FString& Achievement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasNamedTimer(UObject* WorldContextObject, const FString& TimerName, float& TimerValue, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWorldPositionInBox(UBoxComponent* Box, float NormalizedX, float NormalizedY);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> GetWidgetChildrenOfClassRecursive(UUserWidget* Widget, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetWalkSpeedFromAnimationCurve(UObject* WorldContextObject, ACharacter* Character, float DefaultWalkSpeed, const FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetUntranslatedKeys(UObject* Object, const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTypewriterTextWithoutTags(const FString& FullTextIn, TArray<FTypewriterTag>& TagsArray);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetSpawnableFromGuid(UMovieScene* Scene, const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetSaveSlotNames(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveMetaData(UObject* WorldContextObject, const FString& SaveSlotName, FSaveSlotMetaData& SaveMetaData);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetRoomPivotInMapSpace(UWidget* RoomWidget);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULevel* GetPersistentLevel(UObject* WorldContextObject, FString& LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetPackageName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetNormalizedPositionRelativeToMap(UWidget* PlayerWidget, UWidget* MapWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNormalisedMousePositionInGeometry(UObject* WorldContextObject, FGeometry Geometry, FVector2D& Position);
    
    UFUNCTION(BlueprintCallable)
    static void GetNearestPositionAlongSpline(USplineComponent* Spline, FVector SourcePosition, const TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, const bool bUseConstantVelocity, float& SplineTime, FVector& SplinePosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetNearestActor(UObject* WorldContextObject, TArray<AActor*> Actors, const FVector ReferencePoint);
    
    UFUNCTION(BlueprintCallable)
    static FString GetNativeCultureName(const FString& CultureCode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevelStreaming*> GetLoadedLevels(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLiveConfigDataFloatValue(UObject* WorldContextObject, const FString& PropertyName, float& OutValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLiveConfigDataBoolValue(UObject* WorldContextObject, const FString& PropertyName, bool& OutValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGzGameTime(UObject* WorldContextObject, const bool PlayerFacing);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGzCharacter* GetGzCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetGamerTag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetForRGBArray(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPhysicalMaterial* GetFootstepOverlapMaterialForPoint(UObject* WorldContextObject, const FVector Location);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetFontDimensions(const FString& Text, FSlateFontInfo FontInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GetDoorMapPositionAndSize(AActor* DoorActor, AActor* RoomVolume, UWidget* RoomWidget, FVector2D& OutMapPosition, FVector2D& OutMapSize);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetCurrentlyFocusedWidget();
    
    UFUNCTION(BlueprintCallable)
    static void GetComponentOrientedBoundingBox(USceneComponent* Component, FVector& Origin, FVector& Extent);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildNumber();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FGzMonitorInfo> GetAvailableMonitors(UObject* WorldContextObject, int32& ActiveMonitor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetAngleFromLocationToPoint(UObject* WorldContextObject, FVector SourcePosition, FVector ForwardVector, FVector RightVector, FVector DesiredLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetAngleFromActorToPoint(UObject* WorldContextObject, AActor* Actor, FVector Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGzCharacter*> GetAllPlayers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevel*> GetAllLevels(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<FAchievementDefinition> GetAllAchievementNames();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActiveCamera(UObject* WorldContextObject, const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAchievementStatInt(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    static float GetAchievementStatFloat(const FString& StatName);
    
    UFUNCTION(BlueprintPure)
    static bool GetAchievementNameByName(const FString& Name, FAchievementDefinition& AchievementOut);
    
    UFUNCTION(BlueprintPure)
    static FAchievementDefinition GetAchievementNameByIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAchievementName(const FString& Achievement);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAchievementMaxValueNeeded(const FString& AchievementName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAchievementDescription(const FString& Achievement);
    
    UFUNCTION(BlueprintCallable)
    static bool GenomeScannerPuzzleCheckResultNew(const TArray<bool>& Array1, const TArray<bool>& Array2, const TArray<bool>& Array3, const TArray<bool>& InputBoolArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GenomeScannerPuzzleCheckResult(UTexture2D* Texture1, UTexture2D* Texture2, UTexture2D* Texture3, const TArray<bool>& InputBoolArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GenerateRandomString(UObject* WorldContextObject, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMalformationCustomKeyBinding> GenerateCustomKeyBindings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GenerateCipheredText(UObject* WorldContextObject, const FString& InputText, TArray<FTextCipherOffset> IndicesAndOffsets);
    
    UFUNCTION(BlueprintCallable)
    static FString FormatTypewriterTextAndKeepRichTextTags(const FString& TextWithoutTags, int32 DesiredLength, TArray<FTypewriterTag> TagsArray, FString& FinalTextWithPaddedSpaces);
    
    UFUNCTION(BlueprintCallable)
    static void FocusAndZoomOnPoint(UWidget* OverlayWidget, UWidget* WidgetToMove, const FVector2D& Position, const float ZoomFactor, const FVector2D VisualCenterNormalized);
    
    UFUNCTION(BlueprintCallable)
    static UUniformGridSlot* FindNearestUniformGridSlot(const TArray<UUniformGridSlot*>& GridSlots, const UUniformGridSlot* CurrentSlot, bool MoveDown, bool MoveUp, bool MoveLeft, bool MoveRight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FVector FindNearestPointOnNavmesh(const FVector& QueryLocation, UObject* WorldContextObject, UPARAM(Ref) bool& DidFind);
    
    UFUNCTION(BlueprintCallable)
    static UGridSlot* FindNearestGridSlot(const TArray<UGridSlot*>& GridSlots, const UGridSlot* CurrentSlot, bool MoveDown, bool MoveUp, bool MoveLeft, bool MoveRight);
    
    UFUNCTION(BlueprintPure)
    static float FindDistanceAlongSplineClosestToLocation(const USplineComponent* Spline, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGzPreRenderedCamera* FindCameraByGUID(UObject* WorldContextObject, const FString& Guid);
    
    UFUNCTION(BlueprintCallable)
    static bool FileSaveString(const FString& SaveText, const FString& Filename);
    
    UFUNCTION(BlueprintPure)
    static bool FileLoadString(const FString& Filename, FString& SaveText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteFunctionForGamepadKey(UObject* WorldContextObject, FKey Key, UObject* CallbackObject);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteFunctionByName(UObject* CallbackObject, FName FunctionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndChapter(UObject* WorldContextObject, const int32 ChapterNumber);
    
    UFUNCTION(BlueprintCallable)
    static void DrawTextGz(UPARAM(Ref) FPaintContext& Context, const FText& Text, FVector2D Position, UFont* Font, float FontSize, FName FontTypeFace, FLinearColor Tint, const int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    static void DrawRotatedBox(FPaintContext Context, FVector2D Position, FVector2D Size, float RotationDegrees, FVector2D Pivot, const FSlateBrush& Brush, FLinearColor Tint, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawItemGlints(UObject* WorldContextObject, UPARAM(Ref) FPaintContext& Context, USlateBrushAsset* Brush, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DoesLevelEventDataTableValueEqual(UObject* WorldContextObject, const FString& EventName, const FString& Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeleteLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGzTempSubtitleImport> CreateTempSubtitles(const FString& File);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopySplinePoints(UObject* WorldContextObject, USplineComponent* FromSpline, USplineComponent* ToSpline);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyMirroredActorProperties(UObject* WorldContextObject, AActor* ActorToCopyFrom, AActor* ActorToCopyTo);
    
    UFUNCTION(BlueprintCallable)
    static void CopyKeyBindingsToClipboard(TArray<FMalformationCustomKeyBinding> KeyBindings);
    
    UFUNCTION(BlueprintCallable)
    static FMapPositionResult ConvertNormalizedRoomPosToMapPos(const FVector2D& NormalizedPosInRoom, UWidget* RoomWidget, UWidget* MapWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ConnectToCrowdControl(UObject* WorldContextObject, const FString& URL, const FString& Protocol);
    
    UFUNCTION(BlueprintCallable)
    static void ClickWidget(UUserWidget* TargetWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearRichPresence(UObject* WorldContextObject, const bool OnlySendUpdateToPlatform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllLevelEventsExceptGlobals(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheatWalk(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheatGhost(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeLevel(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FTransform TransformInNewMap);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CalculateValueOfItemSafeInputString(UObject* WorldContextObject, const FString& InputString, int32& NumberOfOperations);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CalculateThrowArc(UObject* WorldContextObject, const FVector& Start, const FVector& End, const float& Speed, const TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<FVector>& OutPoints, TArray<AActor*> ActorsToIgnore, FVector& OutVelocity, float StepTime, float MaxSimTime);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyCustomKeyBindings(TArray<FMalformationCustomKeyBinding> KeyBindings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AppendCurrentCameraToLevelFixList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddToStringTableCSV(const FString& RelativeCSVPath, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime AddSecondsToDateTime(FDateTime StartDate, float SecondsToAdd);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddScreenMessage(UObject* WorldContextObject, FName Message, float DisplayTime, FName AppendText, bool FreezeWorld, AGzPreRenderedCamera* CameraToView, bool IsInspectMessage, AActor* OnReadCallbackObject, FName OnReadCallbackFunctionName, bool IsYesNoMessage, AActor* YesCallbackObject, FName YesFunctionName, AActor* NoCallbackObject, FName NoFunctionName, AActor* CallingActor, bool AutoScroll, UGzWristGadgetDataAsset* ArchiveDocumentAfterReading, const FString& TextTableOverride);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSavedDocument(UObject* WorldContextObject, UGzWristGadgetDataAsset* Document);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ActorIsABlueprint(UObject* WorldContextObject, AActor* Actor);
    
};

