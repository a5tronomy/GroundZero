#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "GzAnimNotifyPlayNiagaraEffect.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyPlayNiagaraEffect : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyPlayNiagaraEffect_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowInExecutionScreen;
    
    UGzAnimNotifyPlayNiagaraEffect();

};

