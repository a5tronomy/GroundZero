#include "EMSFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UEMSFunctionLibrary::UEMSFunctionLibrary() {
}

void UEMSFunctionLibrary::SetCurrentSaveUserName(UObject* WorldContextObject, const FString& Username) {
}

void UEMSFunctionLibrary::SetCurrentSaveGameName(UObject* WorldContextObject, const FString& SaveGameName) {
}

void UEMSFunctionLibrary::SetActorSaveProperties(UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform, ELoadedStateMod LoadedState) {
}

bool UEMSFunctionLibrary::SaveRawObject(AActor* WorldContextActor, FRawObjectSaveData Data) {
    return false;
}

bool UEMSFunctionLibrary::SaveCustom(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame) {
    return false;
}

UObject* UEMSFunctionLibrary::LoadRawObject(AActor* WorldContextActor, FRawObjectSaveData Data) {
    return NULL;
}

bool UEMSFunctionLibrary::IsWorldPartition(UObject* WorldContextObject) {
    return false;
}

bool UEMSFunctionLibrary::IsSavingOrLoading(UObject* WorldContextObject) {
    return false;
}

UTexture2D* UEMSFunctionLibrary::ImportSaveThumbnail(UObject* WorldContextObject, const FString& SaveGameName) {
    return NULL;
}

TArray<FString> UEMSFunctionLibrary::GetSortedSaveSlots(UObject* WorldContextObject) {
    return TArray<FString>();
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetSlotInfoSaveGame(UObject* WorldContextObject, FString& SaveGameName) {
    return NULL;
}

UEMSInfoSaveGame* UEMSFunctionLibrary::GetNamedSlotInfo(UObject* WorldContextObject, const FString& SaveGameName) {
    return NULL;
}

UEMSCustomSaveGame* UEMSFunctionLibrary::GetCustomSave(UObject* WorldContextObject, TSubclassOf<UEMSCustomSaveGame> SaveGameClass, const FString& SaveSlot, const FString& Filename) {
    return NULL;
}

TArray<FString> UEMSFunctionLibrary::GetAllSaveUsers(UObject* WorldContextObject) {
    return TArray<FString>();
}

void UEMSFunctionLibrary::ExportSaveThumbnail(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName) {
}

bool UEMSFunctionLibrary::DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName) {
    return false;
}

void UEMSFunctionLibrary::DeleteSaveUser(UObject* WorldContextObject, const FString& Username) {
}

void UEMSFunctionLibrary::DeleteCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame) {
}

void UEMSFunctionLibrary::DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName) {
}

void UEMSFunctionLibrary::ClearWorldPartition(UObject* WorldContextObject) {
}

void UEMSFunctionLibrary::ClearMultiLevelSave(UObject* WorldContextObject) {
}


