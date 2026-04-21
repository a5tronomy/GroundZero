#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QueuedIngameDialogue.h"
#include "GzIngameDialogueConversation.generated.h"

UCLASS(BlueprintType)
class GROUNDZERO_API UGzIngameDialogueConversation : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzIngameDialogueConversation_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsFaceToFace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FQueuedIngameDialogue> QueuedIngameDialogues;
    
    UGzIngameDialogueConversation();

};

