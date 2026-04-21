#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "GzAnimNotifyExecutionParticle.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyExecutionParticle : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyExecutionParticle_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ParticleIndex;
    
    UGzAnimNotifyExecutionParticle();

};

