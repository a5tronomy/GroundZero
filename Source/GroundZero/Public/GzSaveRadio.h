#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "Engine/StaticMeshActor.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "GzSaveRadio.generated.h"

class AGzCharacter;

UCLASS()
class GROUNDZERO_API AGzSaveRadio : public AStaticMeshActor, public IGzRenderInterface, public IGzInteractInterface, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSaveRadio_Statics;
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SavePointUnlocked;
    
    AGzSaveRadio(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnUsedByPlayer_Implementation(AGzCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteract(AGzCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

