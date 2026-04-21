#include "GzBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UGzBlueprintFunctionLibrary::UGzBlueprintFunctionLibrary() {
}

void UGzBlueprintFunctionLibrary::ZoomMouseOnWidget(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, const FVector2D MousePosition, UWidget* ZoomTarget, FVector2D& ZoomOrigin, float& ZoomLevel) {
}

void UGzBlueprintFunctionLibrary::WriteFile(const FString& File, const FString& contents) {
}

void UGzBlueprintFunctionLibrary::UnregisterAsVisibleToPlayer(UObject* WorldContextObject, AActor* Actor) {
}

void UGzBlueprintFunctionLibrary::UnlockAchievement(UObject* WorldContextObject, const FString& Achievement, bool ForceSteamNotify, bool ForceThisAchievement) {
}

void UGzBlueprintFunctionLibrary::UnbindKeyFromAllMappings(UObject* WorldContextObject, const FKey& TargetKey, const FName& ExceptionMappingName, TArray<FString>& UnboundMappings, const TArray<FString> AdditionalExceptions, const TArray<FString> LinkedInputs, const bool OnlyLinkedOnGamepad, const FString& ActionName) {
}

int32 UGzBlueprintFunctionLibrary::UIGamePadMoveDirectionGrid(int32 CurrentIndex, int32 NumColumns, int32 NumRows, EGamepadGridMoveDirection Direction, const int32 OverrideMaxIndex) {
    return 0;
}

void UGzBlueprintFunctionLibrary::TryUnlockAchievement(UObject* WorldContextObject, const FString& Achievement, const bool NotOnApocalypseCrisis) {
}

void UGzBlueprintFunctionLibrary::TriggerShowHint(UObject* WorldContextObject, const FString& HintText) {
}

void UGzBlueprintFunctionLibrary::TriggerPlayerKnockback(UObject* WorldContextObject, AGzCharacter* Player, const FRotator Angle, const FVector Velocity) {
}

void UGzBlueprintFunctionLibrary::ToggleDistanceCulling(UObject* WorldContextObject, UPrimitiveComponent* Component, const bool EnableCulling) {
}

void UGzBlueprintFunctionLibrary::ToggleAllCullDistanceVolumes(UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::SwitchOnDifficulty(UObject* WorldContextObject, TEnumAsByte<EDifficultyMode>& Difficulties, TEnumAsByte<EDifficultyMode>& CurrentDifficulty, const bool PuzzleDifficulty) {
}

TArray<FColor> UGzBlueprintFunctionLibrary::StringToRGBArray(const FString& Input) {
    return TArray<FColor>();
}

bool UGzBlueprintFunctionLibrary::StringTableToString(const FString& FilenameIn, const FString& FilenameOut) {
    return false;
}

void UGzBlueprintFunctionLibrary::StopMusic(UObject* WorldContextObject, const float FadeOutTime) {
}

void UGzBlueprintFunctionLibrary::StopInterpolateActorMeshesTo(const AActor* Actor, const float InterpTime) {
}

void UGzBlueprintFunctionLibrary::StopAmbientSound(UObject* WorldContextObject, const float FadeTime) {
}

TArray<FString> UGzBlueprintFunctionLibrary::SplitStringByNewlines(const FString& In) {
    return TArray<FString>();
}

TArray<FString> UGzBlueprintFunctionLibrary::SplitByTokenBrackets(const FString& Input) {
    return TArray<FString>();
}

TArray<FSubtitleLengthChecker> UGzBlueprintFunctionLibrary::SortSubtitleChecksByLength(TArray<FSubtitleLengthChecker> Subtitles) {
    return TArray<FSubtitleLengthChecker>();
}

TArray<UGridSlot*> UGzBlueprintFunctionLibrary::SortGridSlotsByRowAndColumn(const TArray<UGridSlot*>& InputSlots) {
    return TArray<UGridSlot*>();
}

TArray<USceneComponent*> UGzBlueprintFunctionLibrary::SortComponentsByDistance(AActor* Actor, TArray<USceneComponent*> Components, const bool RemoveComponentsUnsafeForPlayer) {
    return TArray<USceneComponent*>();
}

void UGzBlueprintFunctionLibrary::SetWidgetNavigation(bool AllowAnalog, bool AllowKey, bool AllowTab) {
}

void UGzBlueprintFunctionLibrary::SetupFontLanguageOverrideDefaults(UObject* WorldContextObject, UFont* Font, UFontFace* SimplifiedChineseFont, UFontFace* TraditionalChineseFont, UFontFace* JapaneseFont, UFontFace* KoreanFont, UFontFace* RussianFont) {
}

void UGzBlueprintFunctionLibrary::SetSinglePostProcessMaterialEnabled(UObject* WorldContextObject, AActor* Actor, int32 Index) {
}

void UGzBlueprintFunctionLibrary::SetSaveMetaData(UObject* WorldContextObject, const FString& SaveSlotName, FSaveSlotMetaData SaveMetaData) {
}

void UGzBlueprintFunctionLibrary::SetRichPresenceKeyValuePairs(UObject* WorldContextObject, TArray<FRichPresenceKeyValuePair> KeyValuePairs) {
}

void UGzBlueprintFunctionLibrary::SetRichPresence(UObject* WorldContextObject, const FString& Value) {
}

void UGzBlueprintFunctionLibrary::SetPostProcessMaterialBlendWeight(UPostProcessComponent* PostProcess, const int32 Index, const float Weight) {
}

void UGzBlueprintFunctionLibrary::SetOnScreenTimer(UObject* WorldContextObject, const int32 Minutes, const int32 Seconds, const FString& ActorTagToFireAtZero, const FString& FunctionName, const float HoldOnZeroTime, const float FlashRedWhenTimeLessThan, const float FlashSpeed) {
}

void UGzBlueprintFunctionLibrary::SetObjective(UObject* WorldContextObject, const FString& Objective) {
}

void UGzBlueprintFunctionLibrary::SetNamedTimerValid(UObject* WorldContextObject, const FString& TimerName, const bool IsValid) {
}

void UGzBlueprintFunctionLibrary::SetNamedTimer(UObject* WorldContextObject, const FString& TimerName, float TimerValue, const bool ValidValue) {
}

void UGzBlueprintFunctionLibrary::SetMousePosition(UObject* WorldContextObject, const float X, const float Y) {
}

void UGzBlueprintFunctionLibrary::SetLiveEventCondition(UObject* WorldContextObject, const FLiveConfigPropertyCondition LiveEventCondition) {
}

void UGzBlueprintFunctionLibrary::SetLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName, const FString& Value) {
}

void UGzBlueprintFunctionLibrary::SetDiscordPresence(UObject* WorldContextObject, const bool Clear, const FConsoleCompileFriendlyDiscordPresence& RichPresence) {
}

void UGzBlueprintFunctionLibrary::SetDesiredVolumeForLayer(UObject* WorldContextObject, const int32 LayerNumber, const float Volume, const float FadeTime) {
}

void UGzBlueprintFunctionLibrary::SetCurrentPlayerThoughts(UObject* WorldContextObject, const FString& Thoughts) {
}

void UGzBlueprintFunctionLibrary::SetCurrentLocation(UObject* WorldContextObject, FText Location, const bool ShowAnimationEvenIfAlreadyVisited, const bool MinorLocation, const bool ShowMinorLocationIfAlreadyVisited, const bool NoAnimation) {
}

void UGzBlueprintFunctionLibrary::SetCrankedModeTemporarilyPaused(UObject* WorldContextObject, const float duration) {
}

void UGzBlueprintFunctionLibrary::SetCrankedModePaused(UObject* WorldContextObject, const bool Paused) {
}

void UGzBlueprintFunctionLibrary::SetCombatMusic(UObject* WorldContextObject, FCombatMusic CombatMusicData) {
}

void UGzBlueprintFunctionLibrary::SetCheckedStateAndBroadcast(UCheckBox* CheckBox, ECheckBoxState NewState) {
}

void UGzBlueprintFunctionLibrary::SetAllMeshesWet(UMaterialInterface* Material) {
}

void UGzBlueprintFunctionLibrary::SetAllAIPaused(UObject* WorldContextObject, bool Paused, AGzEnemyAI* ExceptionAI, AGzHumanNpcCharacter* ExceptionBlackOps) {
}

void UGzBlueprintFunctionLibrary::SetActivePreRenderedBackground(UObject* WorldContextObject, AGzCharacter* Player, TScriptInterface<IBlendableInterface> InBlendableObject, UMaterial* ParentClassToRemove) {
}

void UGzBlueprintFunctionLibrary::SetActiveMonitor(int32 Index) {
}

void UGzBlueprintFunctionLibrary::SetAchievementStatInt(const FString& StatName, const int32 Value, const bool ShowNotification, FAchievementDefinition AchievementToShowNotificationFor, UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::SetAchievementStatFloat(const FString& StatName, const float Value, const bool ShowNotification, FAchievementDefinition AchievementToShowNotificationFor, UObject* WorldContextObject) {
}

TArray<AGzPreRenderedCamera*> UGzBlueprintFunctionLibrary::SelectCamerasFromFile(TArray<AActor*> AllCameras, const FString& Filename) {
    return TArray<AGzPreRenderedCamera*>();
}

void UGzBlueprintFunctionLibrary::ScreenFadeGz(UObject* WorldContextObject, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished) {
}

UTexture2D* UGzBlueprintFunctionLibrary::SaveRGBArrayAsTexture(const TArray<FColor>& ColorArray, int32 Width, int32 Height) {
    return NULL;
}

FVector2D UGzBlueprintFunctionLibrary::RotateNormalizedRoomPos(const FVector2D& NormalizedRoomPos, const float RotationDegrees, const FVector2D PivotPoint) {
    return FVector2D{};
}

FVector2D UGzBlueprintFunctionLibrary::RotateItemWithinRoom(const FVector2D& LocalItemPos, const FVector2D& RoomSize, const float RoomRotationDegrees) {
    return FVector2D{};
}

FRotator UGzBlueprintFunctionLibrary::RInterpToShortestPath(FRotator current, FRotator Target, float DeltaTime, float InterpSpeed, bool bShortestPath) {
    return FRotator{};
}

FString UGzBlueprintFunctionLibrary::RGBArrayToString(const TArray<FColor>& ColorArray) {
    return TEXT("");
}

void UGzBlueprintFunctionLibrary::ResetToDefaultControls() {
}

void UGzBlueprintFunctionLibrary::ResetLevelCache(UObject* WorldContextObject, const bool DeleteEvents, const bool DeleteMemory, TArray<FString> DontDeleteEvents) {
}

void UGzBlueprintFunctionLibrary::ResetCrankedTimer(UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::ResetAchievement(const FString& AchievementName) {
}

void UGzBlueprintFunctionLibrary::RequestUserStats() {
}

void UGzBlueprintFunctionLibrary::RemoveBlendable(UPostProcessComponent* PostProcessComponent, TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void UGzBlueprintFunctionLibrary::RemoveAllItemInstances(UObject* WorldContextObject, const FName ItemId, const bool RemoveAllInventory, const bool RemoveAllSafe) {
}

void UGzBlueprintFunctionLibrary::RegisterComponentForRendering(UObject* WorldContextObject, UPrimitiveComponent* Component) {
}

void UGzBlueprintFunctionLibrary::RegisterAsVisibleToPlayer(UObject* WorldContextObject, AActor* Actor) {
}

void UGzBlueprintFunctionLibrary::RegisterActorForRendering(UObject* WorldContextObject, AActor* Actor) {
}

void UGzBlueprintFunctionLibrary::RegisterActorAsPerceptibleToPlayer(UObject* WorldContextObject, AActor* Actor) {
}

void UGzBlueprintFunctionLibrary::RegisterActorAsPerceptibleToEnemies(UObject* WorldContextObject, AActor* Actor) {
}

void UGzBlueprintFunctionLibrary::ReduceTimerDeltaTime(float& Value, const float DeltaTime) {
}

void UGzBlueprintFunctionLibrary::ProcessLionbridgeCsvFiles(const FString& FolderPath) {
}

void UGzBlueprintFunctionLibrary::PostEditChange(UObject* WorldContextObject, AActor* Actor, const bool MarkDirty) {
}

bool UGzBlueprintFunctionLibrary::PointOverlapsThisVolume(const UBoxComponent* Box, const FVector Point, float& OutDistanceToPoint, float SphereRadius) {
    return false;
}

bool UGzBlueprintFunctionLibrary::PointIsEncompassedByVolume(UObject* WorldContextObject, const FVector Location, const ATriggerVolume* Volume) {
    return false;
}

void UGzBlueprintFunctionLibrary::PlayMusic(UObject* WorldContextObject, UMusicDataAsset* Track, const float FadeOutTime, const float FadeInTime, const bool CrossfadeMusic, const bool DontPlaySameMusic, const bool ApocalypseCrisis) {
}

void UGzBlueprintFunctionLibrary::PlayFootstepSound(UObject* WorldContextObject, UDataTable* Table, const FVector StartLocation, const FVector EndLocation, const FVector SoundLocation, AActor* IgnoreActor, const bool LeftStep, const bool IsSprinting, UPhysicalMaterial* OverrideMaterial, ACharacter* AttachActor, const float VolumeOverride, const bool UseSpatialization) {
}

bool UGzBlueprintFunctionLibrary::PlayerHasKey(UObject* WorldContextObject, AGzCharacter* CheckingPlayer, FName InventoryKey, bool RemoveKey) {
    return false;
}

void UGzBlueprintFunctionLibrary::PlayAmbientSound(UObject* WorldContextObject, UGzSoundAmbienceAsset* Asset, const float FadeInTime, const bool DontPlaySameSound) {
}

bool UGzBlueprintFunctionLibrary::PlatformIsXbox() {
    return false;
}

bool UGzBlueprintFunctionLibrary::PlatformIsSteamDeck() {
    return false;
}

bool UGzBlueprintFunctionLibrary::PlatformIsPS5() {
    return false;
}

bool UGzBlueprintFunctionLibrary::PlatformIsPC() {
    return false;
}

void UGzBlueprintFunctionLibrary::PerformCameraShake(UObject* WorldContextObject, float Intensity, float duration, const float LocationX, const float LocationY, const float LocationZ, const float Distance) {
}

FVector2D UGzBlueprintFunctionLibrary::PanWithinThreshold(const FVector2D& MousePos, const float Threshold, const bool FlipX, const bool FlipY) {
    return FVector2D{};
}

bool UGzBlueprintFunctionLibrary::MeshHasVertexColours(UStaticMeshComponent* StaticMeshComponent) {
    return false;
}

void UGzBlueprintFunctionLibrary::MarkKeyItemForDelete(UObject* WorldContextObject, const FString& KeyItem) {
}

FString UGzBlueprintFunctionLibrary::MakeTypewriterEffectWithSpaces(const FString& FullTextIn, int32 DesiredLength) {
    return TEXT("");
}

void UGzBlueprintFunctionLibrary::LockAchievement(UObject* WorldContextObject, const FString& Achievement) {
}

bool UGzBlueprintFunctionLibrary::IsVisibleForDifficulty(UObject* WorldContextObject, const int32 DifficultyValue) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsTeleportLocationSafe(ACharacter* Character, const FVector& TargetLocation) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsShippingBuild() {
    return false;
}

void UGzBlueprintFunctionLibrary::IsServerOrClientSide(UObject* WorldContextObject, EGZNetworkSwitch& Branches) {
}

bool UGzBlueprintFunctionLibrary::IsPreCertBuild() {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsGameWorld(UObject* WorldContextObject) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsEventReplyHandled(FEventReply Reply) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsEditorWorld(UObject* WorldContextObject) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsDraggingAndDropping(FEventReply Reply) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsCheatActiveIndex(UObject* WorldContextObject, const TEnumAsByte<EActiveCheats> Cheat) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsCheatActive(UObject* WorldContextObject, const FString& Cheat) {
    return false;
}

bool UGzBlueprintFunctionLibrary::IsAllowedRebindKey(const FKey Key) {
    return false;
}

void UGzBlueprintFunctionLibrary::InterpolateActorMeshesTo(const AActor* Actor, const FVector Location, const FRotator Rotation, const float InterpTime) {
}

void UGzBlueprintFunctionLibrary::IncrementEnemiesKilled(UObject* WorldContextObject, const bool Melee) {
}

void UGzBlueprintFunctionLibrary::IncrementAchievementStatInt(const FString& StatName, const int32 Amount, UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::IncrementAchievementStatFloat(const FString& StatName, const float Amount) {
}

bool UGzBlueprintFunctionLibrary::HasUnlockedAchievement(const FString& Achievement) {
    return false;
}

bool UGzBlueprintFunctionLibrary::HasNamedTimer(UObject* WorldContextObject, const FString& TimerName, float& TimerValue, bool& IsValid) {
    return false;
}

bool UGzBlueprintFunctionLibrary::HasLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName, FString& Value) {
    return false;
}

FVector UGzBlueprintFunctionLibrary::GetWorldPositionInBox(UBoxComponent* Box, float NormalizedX, float NormalizedY) {
    return FVector{};
}

TArray<UUserWidget*> UGzBlueprintFunctionLibrary::GetWidgetChildrenOfClassRecursive(UUserWidget* Widget, TSubclassOf<UUserWidget> WidgetClass) {
    return TArray<UUserWidget*>();
}

float UGzBlueprintFunctionLibrary::GetWalkSpeedFromAnimationCurve(UObject* WorldContextObject, ACharacter* Character, float DefaultWalkSpeed, const FName KeyName) {
    return 0.0f;
}

TArray<FName> UGzBlueprintFunctionLibrary::GetUntranslatedKeys(UObject* Object, const FString& Culture) {
    return TArray<FName>();
}

FString UGzBlueprintFunctionLibrary::GetTypewriterTextWithoutTags(const FString& FullTextIn, TArray<FTypewriterTag>& TagsArray) {
    return TEXT("");
}

AActor* UGzBlueprintFunctionLibrary::GetSpawnableFromGuid(UMovieScene* Scene, const FGuid& Guid) {
    return NULL;
}

TArray<FString> UGzBlueprintFunctionLibrary::GetSaveSlotNames(UObject* WorldContextObject) {
    return TArray<FString>();
}

bool UGzBlueprintFunctionLibrary::GetSaveMetaData(UObject* WorldContextObject, const FString& SaveSlotName, FSaveSlotMetaData& SaveMetaData) {
    return false;
}

FVector2D UGzBlueprintFunctionLibrary::GetRoomPivotInMapSpace(UWidget* RoomWidget) {
    return FVector2D{};
}

ULevel* UGzBlueprintFunctionLibrary::GetPersistentLevel(UObject* WorldContextObject, FString& LevelName) {
    return NULL;
}

FString UGzBlueprintFunctionLibrary::GetPackageName(UObject* WorldContextObject) {
    return TEXT("");
}

FVector2D UGzBlueprintFunctionLibrary::GetNormalizedPositionRelativeToMap(UWidget* PlayerWidget, UWidget* MapWidget) {
    return FVector2D{};
}

bool UGzBlueprintFunctionLibrary::GetNormalisedMousePositionInGeometry(UObject* WorldContextObject, FGeometry Geometry, FVector2D& Position) {
    return false;
}

void UGzBlueprintFunctionLibrary::GetNearestPositionAlongSpline(USplineComponent* Spline, FVector SourcePosition, const TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, const bool bUseConstantVelocity, float& SplineTime, FVector& SplinePosition) {
}

AActor* UGzBlueprintFunctionLibrary::GetNearestActor(UObject* WorldContextObject, TArray<AActor*> Actors, const FVector ReferencePoint) {
    return NULL;
}

FString UGzBlueprintFunctionLibrary::GetNativeCultureName(const FString& CultureCode) {
    return TEXT("");
}

TArray<ULevelStreaming*> UGzBlueprintFunctionLibrary::GetLoadedLevels(UObject* WorldContextObject) {
    return TArray<ULevelStreaming*>();
}

bool UGzBlueprintFunctionLibrary::GetLiveConfigDataFloatValue(UObject* WorldContextObject, const FString& PropertyName, float& OutValue) {
    return false;
}

bool UGzBlueprintFunctionLibrary::GetLiveConfigDataBoolValue(UObject* WorldContextObject, const FString& PropertyName, bool& OutValue) {
    return false;
}

FString UGzBlueprintFunctionLibrary::GetLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName) {
    return TEXT("");
}

float UGzBlueprintFunctionLibrary::GetGzGameTime(UObject* WorldContextObject, const bool PlayerFacing) {
    return 0.0f;
}

AGzCharacter* UGzBlueprintFunctionLibrary::GetGzCharacter(UObject* WorldContextObject) {
    return NULL;
}

FString UGzBlueprintFunctionLibrary::GetGamerTag(UObject* WorldContextObject) {
    return TEXT("");
}

FString UGzBlueprintFunctionLibrary::GetForRGBArray(UObject* WorldContextObject) {
    return TEXT("");
}

UPhysicalMaterial* UGzBlueprintFunctionLibrary::GetFootstepOverlapMaterialForPoint(UObject* WorldContextObject, const FVector Location) {
    return NULL;
}

FVector2D UGzBlueprintFunctionLibrary::GetFontDimensions(const FString& Text, FSlateFontInfo FontInfo) {
    return FVector2D{};
}

void UGzBlueprintFunctionLibrary::GetDoorMapPositionAndSize(AActor* DoorActor, AActor* RoomVolume, UWidget* RoomWidget, FVector2D& OutMapPosition, FVector2D& OutMapSize) {
}

UWidget* UGzBlueprintFunctionLibrary::GetCurrentlyFocusedWidget() {
    return NULL;
}

void UGzBlueprintFunctionLibrary::GetComponentOrientedBoundingBox(USceneComponent* Component, FVector& Origin, FVector& Extent) {
}

FString UGzBlueprintFunctionLibrary::GetBuildNumber() {
    return TEXT("");
}

TArray<FGzMonitorInfo> UGzBlueprintFunctionLibrary::GetAvailableMonitors(UObject* WorldContextObject, int32& ActiveMonitor) {
    return TArray<FGzMonitorInfo>();
}

float UGzBlueprintFunctionLibrary::GetAngleFromLocationToPoint(UObject* WorldContextObject, FVector SourcePosition, FVector ForwardVector, FVector RightVector, FVector DesiredLocation) {
    return 0.0f;
}

float UGzBlueprintFunctionLibrary::GetAngleFromActorToPoint(UObject* WorldContextObject, AActor* Actor, FVector Location) {
    return 0.0f;
}

TArray<AGzCharacter*> UGzBlueprintFunctionLibrary::GetAllPlayers(UObject* WorldContextObject) {
    return TArray<AGzCharacter*>();
}

TArray<ULevel*> UGzBlueprintFunctionLibrary::GetAllLevels(UObject* WorldContextObject) {
    return TArray<ULevel*>();
}

TArray<FAchievementDefinition> UGzBlueprintFunctionLibrary::GetAllAchievementNames() {
    return TArray<FAchievementDefinition>();
}

AActor* UGzBlueprintFunctionLibrary::GetActiveCamera(UObject* WorldContextObject, const FString& EventName) {
    return NULL;
}

int32 UGzBlueprintFunctionLibrary::GetAchievementStatInt(const FString& StatName) {
    return 0;
}

float UGzBlueprintFunctionLibrary::GetAchievementStatFloat(const FString& StatName) {
    return 0.0f;
}

bool UGzBlueprintFunctionLibrary::GetAchievementNameByName(const FString& Name, FAchievementDefinition& AchievementOut) {
    return false;
}

FAchievementDefinition UGzBlueprintFunctionLibrary::GetAchievementNameByIndex(const int32 Index) {
    return FAchievementDefinition{};
}

FString UGzBlueprintFunctionLibrary::GetAchievementName(const FString& Achievement) {
    return TEXT("");
}

int32 UGzBlueprintFunctionLibrary::GetAchievementMaxValueNeeded(const FString& AchievementName) {
    return 0;
}

FString UGzBlueprintFunctionLibrary::GetAchievementDescription(const FString& Achievement) {
    return TEXT("");
}

bool UGzBlueprintFunctionLibrary::GenomeScannerPuzzleCheckResultNew(const TArray<bool>& Array1, const TArray<bool>& Array2, const TArray<bool>& Array3, const TArray<bool>& InputBoolArray) {
    return false;
}

bool UGzBlueprintFunctionLibrary::GenomeScannerPuzzleCheckResult(UTexture2D* Texture1, UTexture2D* Texture2, UTexture2D* Texture3, const TArray<bool>& InputBoolArray) {
    return false;
}

FString UGzBlueprintFunctionLibrary::GenerateRandomString(UObject* WorldContextObject, int32 Length) {
    return TEXT("");
}

TArray<FMalformationCustomKeyBinding> UGzBlueprintFunctionLibrary::GenerateCustomKeyBindings() {
    return TArray<FMalformationCustomKeyBinding>();
}

FString UGzBlueprintFunctionLibrary::GenerateCipheredText(UObject* WorldContextObject, const FString& InputText, TArray<FTextCipherOffset> IndicesAndOffsets) {
    return TEXT("");
}

FString UGzBlueprintFunctionLibrary::FormatTypewriterTextAndKeepRichTextTags(const FString& TextWithoutTags, int32 DesiredLength, TArray<FTypewriterTag> TagsArray, FString& FinalTextWithPaddedSpaces) {
    return TEXT("");
}

void UGzBlueprintFunctionLibrary::FocusAndZoomOnPoint(UWidget* OverlayWidget, UWidget* WidgetToMove, const FVector2D& Position, const float ZoomFactor, const FVector2D VisualCenterNormalized) {
}

UUniformGridSlot* UGzBlueprintFunctionLibrary::FindNearestUniformGridSlot(const TArray<UUniformGridSlot*>& GridSlots, const UUniformGridSlot* CurrentSlot, bool MoveDown, bool MoveUp, bool MoveLeft, bool MoveRight) {
    return NULL;
}

FVector UGzBlueprintFunctionLibrary::FindNearestPointOnNavmesh(const FVector& QueryLocation, UObject* WorldContextObject, bool& DidFind) {
    return FVector{};
}

UGridSlot* UGzBlueprintFunctionLibrary::FindNearestGridSlot(const TArray<UGridSlot*>& GridSlots, const UGridSlot* CurrentSlot, bool MoveDown, bool MoveUp, bool MoveLeft, bool MoveRight) {
    return NULL;
}

float UGzBlueprintFunctionLibrary::FindDistanceAlongSplineClosestToLocation(const USplineComponent* Spline, const FVector& Location) {
    return 0.0f;
}

AGzPreRenderedCamera* UGzBlueprintFunctionLibrary::FindCameraByGUID(UObject* WorldContextObject, const FString& Guid) {
    return NULL;
}

bool UGzBlueprintFunctionLibrary::FileSaveString(const FString& SaveText, const FString& Filename) {
    return false;
}

bool UGzBlueprintFunctionLibrary::FileLoadString(const FString& Filename, FString& SaveText) {
    return false;
}

void UGzBlueprintFunctionLibrary::ExecuteFunctionForGamepadKey(UObject* WorldContextObject, FKey Key, UObject* CallbackObject) {
}

void UGzBlueprintFunctionLibrary::ExecuteFunctionByName(UObject* CallbackObject, FName FunctionName) {
}

void UGzBlueprintFunctionLibrary::EndChapter(UObject* WorldContextObject, const int32 ChapterNumber) {
}

void UGzBlueprintFunctionLibrary::DrawTextGz(FPaintContext& Context, const FText& Text, FVector2D Position, UFont* Font, float FontSize, FName FontTypeFace, FLinearColor Tint, const int32 ZOrder) {
}

void UGzBlueprintFunctionLibrary::DrawRotatedBox(FPaintContext Context, FVector2D Position, FVector2D Size, float RotationDegrees, FVector2D Pivot, const FSlateBrush& Brush, FLinearColor Tint, int32 ZOrder) {
}

void UGzBlueprintFunctionLibrary::DrawItemGlints(UObject* WorldContextObject, FPaintContext& Context, USlateBrushAsset* Brush, FLinearColor Tint) {
}

bool UGzBlueprintFunctionLibrary::DoesLevelEventDataTableValueEqual(UObject* WorldContextObject, const FString& EventName, const FString& Value) {
    return false;
}

void UGzBlueprintFunctionLibrary::DeleteLevelEventDataTableValue(UObject* WorldContextObject, const FString& EventName) {
}

TArray<FGzTempSubtitleImport> UGzBlueprintFunctionLibrary::CreateTempSubtitles(const FString& File) {
    return TArray<FGzTempSubtitleImport>();
}

void UGzBlueprintFunctionLibrary::CopySplinePoints(UObject* WorldContextObject, USplineComponent* FromSpline, USplineComponent* ToSpline) {
}

void UGzBlueprintFunctionLibrary::CopyMirroredActorProperties(UObject* WorldContextObject, AActor* ActorToCopyFrom, AActor* ActorToCopyTo) {
}

void UGzBlueprintFunctionLibrary::CopyKeyBindingsToClipboard(TArray<FMalformationCustomKeyBinding> KeyBindings) {
}

FMapPositionResult UGzBlueprintFunctionLibrary::ConvertNormalizedRoomPosToMapPos(const FVector2D& NormalizedPosInRoom, UWidget* RoomWidget, UWidget* MapWidget) {
    return FMapPositionResult{};
}

void UGzBlueprintFunctionLibrary::ConnectToCrowdControl(UObject* WorldContextObject, const FString& URL, const FString& Protocol) {
}

void UGzBlueprintFunctionLibrary::ClickWidget(UUserWidget* TargetWidget) {
}

void UGzBlueprintFunctionLibrary::ClearRichPresence(UObject* WorldContextObject, const bool OnlySendUpdateToPlatform) {
}

void UGzBlueprintFunctionLibrary::ClearAllLevelEventsExceptGlobals(UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::CheatWalk(UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::CheatGhost(UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::ChangeLevel(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FTransform TransformInNewMap) {
}

int32 UGzBlueprintFunctionLibrary::CalculateValueOfItemSafeInputString(UObject* WorldContextObject, const FString& InputString, int32& NumberOfOperations) {
    return 0;
}

bool UGzBlueprintFunctionLibrary::CalculateThrowArc(UObject* WorldContextObject, const FVector& Start, const FVector& End, const float& Speed, const TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<FVector>& OutPoints, TArray<AActor*> ActorsToIgnore, FVector& OutVelocity, float StepTime, float MaxSimTime) {
    return false;
}

void UGzBlueprintFunctionLibrary::ApplyCustomKeyBindings(TArray<FMalformationCustomKeyBinding> KeyBindings) {
}

void UGzBlueprintFunctionLibrary::AppendCurrentCameraToLevelFixList(UObject* WorldContextObject) {
}

void UGzBlueprintFunctionLibrary::AddToStringTableCSV(const FString& RelativeCSVPath, const FString& Key, const FString& Value) {
}

FDateTime UGzBlueprintFunctionLibrary::AddSecondsToDateTime(FDateTime StartDate, float SecondsToAdd) {
    return FDateTime{};
}

void UGzBlueprintFunctionLibrary::AddScreenMessage(UObject* WorldContextObject, FName Message, float DisplayTime, FName AppendText, bool FreezeWorld, AGzPreRenderedCamera* CameraToView, bool IsInspectMessage, AActor* OnReadCallbackObject, FName OnReadCallbackFunctionName, bool IsYesNoMessage, AActor* YesCallbackObject, FName YesFunctionName, AActor* NoCallbackObject, FName NoFunctionName, AActor* CallingActor, bool AutoScroll, UGzWristGadgetDataAsset* ArchiveDocumentAfterReading, const FString& TextTableOverride) {
}

void UGzBlueprintFunctionLibrary::AddSavedDocument(UObject* WorldContextObject, UGzWristGadgetDataAsset* Document) {
}

bool UGzBlueprintFunctionLibrary::ActorIsABlueprint(UObject* WorldContextObject, AActor* Actor) {
    return false;
}


