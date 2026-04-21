#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "GzStaticMeshActor.generated.h"

class UMaterialInterface;

UCLASS()
class GROUNDZERO_API AGzStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzStaticMeshActor_Statics;
public:
private:
    UPROPERTY()
    UMaterialInterface* BlankMaterialOverride;
    
public:
    AGzStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

