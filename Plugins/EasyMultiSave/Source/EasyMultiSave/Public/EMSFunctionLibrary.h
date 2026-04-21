#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELoadedStateMod.h"
#include "RawObjectSaveData.h"
#include "Templates/SubclassOf.h"
#include "EMSFunctionLibrary.generated.h"

class AActor;
class UEMSCustomSaveGame;
class UEMSInfoSaveGame;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class EASYMULTISAVE_API UEMSFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UEMSFunctionLibrary_Statics;
public:
    UEMSFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrentSaveUserName(UObject* WorldContextObject, const FString& Username);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrentSaveGameName(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActorSaveProperties(UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform, ELoadedStateMod LoadedState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextActor"))
    static bool SaveRawObject(AActor* WorldContextActor, FRawObjectSaveData Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SaveCustom(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextActor"))
    static UObject* LoadRawObject(AActor* WorldContextActor, FRawObjectSaveData Data);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldPartition(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSavingOrLoading(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* ImportSaveThumbnail(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetSortedSaveSlots(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEMSInfoSaveGame* GetSlotInfoSaveGame(UObject* WorldContextObject, FString& SaveGameName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEMSInfoSaveGame* GetNamedSlotInfo(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEMSCustomSaveGame* GetCustomSave(UObject* WorldContextObject, TSubclassOf<UEMSCustomSaveGame> SaveGameClass, const FString& SaveSlot, const FString& Filename);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetAllSaveUsers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExportSaveThumbnail(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeleteSaveUser(UObject* WorldContextObject, const FString& Username);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeleteCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearWorldPartition(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearMultiLevelSave(UObject* WorldContextObject);
    
};

