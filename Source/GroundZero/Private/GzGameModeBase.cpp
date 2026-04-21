#include "GzGameModeBase.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "GzGameModeCheatManager.h"
#include "GzLiveConfigComponent.h"

AGzGameModeBase::AGzGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->ExpressionParameterCollection = NULL;
    this->CurrentExpressionSeoYeon = ExpressionNeutral;
    this->CurrentExpressionIsabel = ExpressionNeutral;
    this->CurrentExpressionEvan = ExpressionNeutral;
    this->HasUsedCheatsThisSession = false;
    this->CurrentDifficulty = DifficultyNormal;
    this->CurrentPuzzleDifficulty = DifficultyNormal;
    this->IsNewGamePlus = false;
    this->NextGagGatherTime = 0.00f;
    this->NextGlobalProjectileTime = 0.00f;
    this->TimesSaved = 0;
    this->GameTimePlayerFacing = 0.00f;
    this->GameTime = 0.00f;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->StopPlayerFacingGameTimer = false;
    this->HideAllMeshesInPreRendered = false;
    this->NextLiveConfigHeartbeat = 0.00f;
    this->AutoApplyLoadOut = false;
    this->IsRandomizerMode = false;
    this->IsTrainingLevel = false;
    this->RandomizerDataTable = NULL;
    this->InventoryDataTable = NULL;
    this->MusicPlayerComponentBP = CreateDefaultSubobject<UChildActorComponent>(TEXT("MusicPlayerComponentBP"));
    this->CheatManager = CreateDefaultSubobject<UGzGameModeCheatManager>(TEXT("CheatManager"));
    this->LiveConfigComponent = CreateDefaultSubobject<UGzLiveConfigComponent>(TEXT("LiveConfigComponent"));
    this->GameModeType = GroundZeroSP;
    this->DesiredPlayerType = PlayerTypeSpectator;
    this->ChaosChatEnabled = false;
    this->MusicPlayerComponentBP->SetupAttachment(RootComponent);
}

void AGzGameModeBase::SetPlayerExpression(const TEnumAsByte<EPlayerType> PlayerType, const TEnumAsByte<EPlayerExpression> Expression, const bool BlinkReset, const bool Force) {
}

void AGzGameModeBase::SetNewDifficultyMode(TEnumAsByte<EDifficultyMode> Difficulty, const bool Puzzle) {
}

void AGzGameModeBase::SetDifficultyModeOnGameStart() {
}

void AGzGameModeBase::SetDesiredVolumeForLayer(const int32 LayerNumber, const float Volume, const float FadeTime) {
}

void AGzGameModeBase::RegisterMusicProximityActor(AActor* Actor) {
}

void AGzGameModeBase::RegisterItemInMapForGlints(AGzInventoryItem* Item) {
}

void AGzGameModeBase::RegisterComponentForRendering(UPrimitiveComponent* Component) {
}

void AGzGameModeBase::RegisterActorForRendering(AActor* Actor) {
}

void AGzGameModeBase::PutUnlocksInSafe() {
}

void AGzGameModeBase::PlayMusic(UMusicDataAsset* Track, float FadeOutTime, const float FadeInTime, const bool CrossfadeMusic) {
}







bool AGzGameModeBase::IsSinglePlayer() const {
    return false;
}

bool AGzGameModeBase::IsApocalypseCrisis() const {
    return false;
}

void AGzGameModeBase::InternalDifficultyModeCheck() {
}

TArray<UPrimitiveComponent*> AGzGameModeBase::GetRenderableComponents() {
    return TArray<UPrimitiveComponent*>();
}

TArray<AActor*> AGzGameModeBase::GetRenderableActors() {
    return TArray<AActor*>();
}

bool AGzGameModeBase::GetInventoryTableItem(const FName ItemName, FInventoryTableItem& Item, FString& RowName) const {
    return false;
}

float AGzGameModeBase::GetGameTimePlayerFacing() const {
    return 0.0f;
}

float AGzGameModeBase::GetGameTime() const {
    return 0.0f;
}

FString AGzGameModeBase::GetApocalypseCrisisTimer() {
    return TEXT("");
}

void AGzGameModeBase::ForceNewGamePlus(const bool Enabled) {
}

void AGzGameModeBase::ChangeLevel(const FString& LevelPath, const FString& ShortLevelName, FTransform NextLevelTransform) {
}

void AGzGameModeBase::BuildRenderableActors() {
}

void AGzGameModeBase::Blink(const TEnumAsByte<EPlayerType> PlayerType) {
}


bool AGzGameModeBase::ApocalypseCrisisDidKillAllEnemies_Implementation() {
    return false;
}

void AGzGameModeBase::ApocalypseCrisisAddSeconds(const float Seconds) {
}


