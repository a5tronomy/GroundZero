#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GzCombatDefinitionVolume.generated.h"

class AActor;

UCLASS()
class GROUNDZERO_API AGzCombatDefinitionVolume : public AVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzCombatDefinitionVolume_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> GatheredEnemiesInCombatVolume;
    
    AGzCombatDefinitionVolume(const FObjectInitializer& ObjectInitializer);

};

