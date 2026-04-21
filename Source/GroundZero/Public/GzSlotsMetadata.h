#pragma once
#include "CoreMinimal.h"
#include "EMSCustomSaveGame.h"
#include "SaveSlotMetaData.h"
#include "GzSlotsMetadata.generated.h"

UCLASS()
class GROUNDZERO_API UGzSlotsMetadata : public UEMSCustomSaveGame {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzSlotsMetadata_Statics;
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FSaveSlotMetaData> SaveSlotMetadatas;
    
    UGzSlotsMetadata();

    UFUNCTION()
    void ReplaceOrAddMetadata(const FSaveSlotMetaData& NewMetadata);
    
    UFUNCTION()
    void RemoveMetaData(const FString& SaveSlotName);
    
    UFUNCTION()
    bool GetMetadata(const FString& SaveSlotName, FSaveSlotMetaData& OutSaveSlotMetaData);
    
    UFUNCTION()
    bool ContainsMetaData(const FString& SaveSlotName) const;
    
};

