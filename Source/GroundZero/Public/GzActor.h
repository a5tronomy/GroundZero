#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzActor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzActor_Statics;
public:
    AGzActor(const FObjectInitializer& ObjectInitializer);

};

