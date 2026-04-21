#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ModelChangeParameters.h"
#include "GzAnimNotifyChangePlayerModel.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyChangePlayerModel : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyChangePlayerModel_Statics;
public:
private:
    UPROPERTY(EditAnywhere)
    FModelChangeParameters NewPlayerModel;
    
public:
    UGzAnimNotifyChangePlayerModel();

};

