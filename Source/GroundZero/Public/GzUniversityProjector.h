#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzUniversityProjector.generated.h"

class AGzInventoryItem;
class UTexture2D;

UCLASS()
class GROUNDZERO_API AGzUniversityProjector : public AActor, public IEMSActorSaveInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzUniversityProjector_Statics;
public:
protected:
    UPROPERTY(SaveGame)
    bool HasShuffled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTexture2D*> ProjectorFragments;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AGzInventoryItem*> ProjectorSlides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* FirstSlideLocationActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* SecondSlideLocationActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* ThirdSlideLocationActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DebugNoShuffle;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 FirstItemIndex;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 SecondItemIndex;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 ThirdItemIndex;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString FirstItemName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString SecondItemName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString ThirdItemName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool InsertedFirstItem;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool InsertedSecondItem;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool InsertedThirdItem;
    
public:
    AGzUniversityProjector(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool TryAndInsertItem(const FString& ItemName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupProjectorMaterial();
    
    UFUNCTION(BlueprintCallable)
    void PackBoolForCollectionParameter(const TArray<bool>& BoolArray, float& OutFloat1, float& OutFloat2);
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GenerateCurrentPattern(const TArray<bool>& Array1, const TArray<bool>& Array2, const TArray<bool>& Array3);
    

    // Fix for true pure virtual functions not being implemented
};

