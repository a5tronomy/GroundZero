#pragma once
#include "CoreMinimal.h"
#include "SubtitleReceivedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubtitleReceivedSignature, const FText&, SubtitleText);

