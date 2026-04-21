#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavesMetadata.generated.h"

UCLASS()
class EASYMULTISAVE_API USavesMetadata : public USaveGame {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_USavesMetadata_Statics;
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FString> ExistingSaveFiles;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> ExistingCustomSaveFiles;
    
    USavesMetadata();

};

