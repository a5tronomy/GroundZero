#pragma once
#include "CoreMinimal.h"
#include "SaveVersionInfo.generated.h"

USTRUCT()
struct FSaveVersionInfo {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FSaveVersionInfo_Statics;
public:
    EASYMULTISAVE_API FSaveVersionInfo();
};

