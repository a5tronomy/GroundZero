#pragma once
#include "CoreMinimal.h"
#include "MediaTexture.h"
#include "GzMediaTexture.generated.h"

UCLASS()
class GROUNDZERO_API UGzMediaTexture : public UMediaTexture {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzMediaTexture_Statics;
public:
    UGzMediaTexture();

};

