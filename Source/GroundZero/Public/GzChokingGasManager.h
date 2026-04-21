#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzChokingGasManager.generated.h"

class AGzChokingGasVolume;

UCLASS()
class GROUNDZERO_API AGzChokingGasManager : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzChokingGasManager_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AGzChokingGasVolume*> GasVolumes;
    
    AGzChokingGasManager(const FObjectInitializer& ObjectInitializer);

};

