#pragma once
#include "CoreMinimal.h"
#include "PlayerArchive.generated.h"

USTRUCT()
struct FPlayerArchive {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPlayerArchive_Statics;
public:
    EASYMULTISAVE_API FPlayerArchive();
};

