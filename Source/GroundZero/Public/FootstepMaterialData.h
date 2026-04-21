#pragma once
#include "CoreMinimal.h"
#include "FootstepMaterialData.generated.h"

class UNiagaraSystem;
class UPhysicalMaterial;
class USoundCue;

USTRUCT(BlueprintType)
struct FFootstepMaterialData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FFootstepMaterialData_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    UPhysicalMaterial* Material;
    
    UPROPERTY(BlueprintReadOnly)
    USoundCue* StepSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* LandSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* LandImpactEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* FootstepEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AttachFootstepParticles;
    
    GROUNDZERO_API FFootstepMaterialData();
};

