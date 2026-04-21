#pragma once
#include "CoreMinimal.h"
#include "LevelStackArchive.generated.h"

USTRUCT()
struct FLevelStackArchive {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FLevelStackArchive_Statics;
public:
    EASYMULTISAVE_API FLevelStackArchive();
};

