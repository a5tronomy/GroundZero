#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GzFootstepOverrideVolume.generated.h"

class UNiagaraSystem;
class UPhysicalMaterial;
class USoundBase;

UCLASS()
class GROUNDZERO_API AGzFootstepOverrideVolume : public AVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzFootstepOverrideVolume_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* FootstepOverrideMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* FootstepParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* EnemyFootstepOverrideSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Disabled;
    
    AGzFootstepOverrideVolume(const FObjectInitializer& ObjectInitializer);

};

