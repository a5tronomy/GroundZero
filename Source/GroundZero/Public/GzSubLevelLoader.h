#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "SublevelLoadInfo.h"
#include "GzSubLevelLoader.generated.h"

UCLASS()
class GROUNDZERO_API AGzSubLevelLoader : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSubLevelLoader_Statics;
public:
    UPROPERTY()
    int32 UUID;
    
    UPROPERTY()
    TArray<FSublevelLoadInfo> SubLevelsToLoad;
    
    UPROPERTY()
    TArray<FSublevelLoadInfo> SubLevelsToUnload;
    
    AGzSubLevelLoader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StreamInAndOutSubLevels(const TArray<FSublevelLoadInfo>& LevelsToStreamOut, const TArray<FSublevelLoadInfo>& LevelsToStreamIn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SaveLevelBeforeStreamingOut(FSublevelLoadInfo SaveInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSaveEnd();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPlayerDoorInfo();
    

    // Fix for true pure virtual functions not being implemented
};

