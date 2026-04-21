#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GzHUD.generated.h"

UCLASS(NonTransient)
class GROUNDZERO_API AGzHUD : public AHUD {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzHUD_Statics;
public:
    AGzHUD(const FObjectInitializer& ObjectInitializer);

};

