#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerType.h"
#include "PlayerModelParameters.h"
#include "GzCharacterAppearance.generated.h"

class UDataTable;
class UGzCharacterPropDataAsset;
class UGzPlayerAppearanceDataAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzCharacterAppearance : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzCharacterAppearance_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* AppearanceDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* PropDataTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoNotCreateComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableAppearanceChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGzPlayerAppearanceDataAsset* AppearanceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGzCharacterPropDataAsset* PropDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableAnimationClassOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EPlayerType> PlayerType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverridePlayerType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AppearanceIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PropIndex;
    
public:
    UGzCharacterAppearance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetupAppearance(TEnumAsByte<EPlayerType> TypeOfPlayer, const int32 Index, FPlayerModelParameters& PlayerModelParameters);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAppearanceChanged(const bool DidChange);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterProp(const int32 Index);
    
};

