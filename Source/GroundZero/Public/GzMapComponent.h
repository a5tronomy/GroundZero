#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GzMapComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzMapComponent : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzMapComponent_Statics;
public:
    UGzMapComponent(const FObjectInitializer& ObjectInitializer);

};

