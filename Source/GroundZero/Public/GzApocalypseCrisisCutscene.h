#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzApocalypseCrisisCutscene.generated.h"

UCLASS()
class GROUNDZERO_API AGzApocalypseCrisisCutscene : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzApocalypseCrisisCutscene_Statics;
public:
    AGzApocalypseCrisisCutscene(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartApocalypseCrisis();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SkipCutscene();
    
};

