#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzSatelliteStrikeManager.generated.h"

class AVolume;
class UBillboardComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzSatelliteStrikeManager : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSatelliteStrikeManager_Statics;
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* StrikeVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpriteRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* ManagerSprite;
    
public:
    AGzSatelliteStrikeManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Strike(const float X, const float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowStrikeUI();
    
};

