#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GzLocalPlayer.generated.h"

UCLASS(NonTransient)
class GROUNDZERO_API UGzLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzLocalPlayer_Statics;
public:
    UGzLocalPlayer();

};

