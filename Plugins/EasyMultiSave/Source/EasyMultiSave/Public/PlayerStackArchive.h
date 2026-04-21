#pragma once
#include "CoreMinimal.h"
#include "PlayerStackArchive.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStackArchive {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPlayerStackArchive_Statics;
public:
    EASYMULTISAVE_API FPlayerStackArchive();
};

