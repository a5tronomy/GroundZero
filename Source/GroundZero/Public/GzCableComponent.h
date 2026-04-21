#pragma once
#include "CoreMinimal.h"
#include "CableComponent.h"
#include "GzCableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzCableComponent : public UCableComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzCableComponent_Statics;
public:
    UGzCableComponent(const FObjectInitializer& ObjectInitializer);

};

