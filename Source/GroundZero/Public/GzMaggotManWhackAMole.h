#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzAutoAimInterface.h"
#include "GzMaggotManWhackAMole.generated.h"

UCLASS()
class GROUNDZERO_API AGzMaggotManWhackAMole : public AActor, public IEMSActorSaveInterface, public IGzAutoAimInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMaggotManWhackAMole_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool LastTookMeleeDamage;
    
    UPROPERTY(BlueprintReadWrite)
    bool NoProximitySound;
    
    AGzMaggotManWhackAMole(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashbanged(const AActor* FlashbangActor, const FVector FlashbangOrigin);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetOverriddenEyesLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

