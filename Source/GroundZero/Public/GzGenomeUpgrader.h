#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "GzGenomeUpgrader.generated.h"

UCLASS()
class GROUNDZERO_API AGzGenomeUpgrader : public AActor, public IEMSActorSaveInterface, public IGzRenderInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzGenomeUpgrader_Statics;
public:
protected:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SolvedPartOne;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SolvedPartTwo;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SolvedPartThree;
    
public:
    AGzGenomeUpgrader(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

