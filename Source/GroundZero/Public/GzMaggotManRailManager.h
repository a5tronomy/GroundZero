#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzMaggotManRailManager.generated.h"

UCLASS()
class GROUNDZERO_API AGzMaggotManRailManager : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMaggotManRailManager_Statics;
public:
    AGzMaggotManRailManager(const FObjectInitializer& ObjectInitializer);

};

