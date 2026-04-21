#pragma once
#include "CoreMinimal.h"
#include "PlayerPositionArchive.generated.h"

USTRUCT()
struct FPlayerPositionArchive {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics;
public:
    EASYMULTISAVE_API FPlayerPositionArchive();
};

