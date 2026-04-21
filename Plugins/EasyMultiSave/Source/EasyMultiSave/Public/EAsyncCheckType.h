#pragma once
#include "CoreMinimal.h"
#include "EAsyncCheckType.generated.h"

UENUM()
enum class EAsyncCheckType : uint8 {
    CT_Both,
    CT_Save,
    CT_Load,
};

