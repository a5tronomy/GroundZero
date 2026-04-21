#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FootstepData.generated.h"

class UNiagaraSystem;
class UPhysicalMaterial;
class USoundCue;

USTRUCT(BlueprintType)
struct FFootstepData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FFootstepData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* StepSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* LandSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* LandImpactEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* FootstepEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AttachFootstepParticles;
    
    GROUNDZERO_API FFootstepData();
};

