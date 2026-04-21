#include "GzSlotsMetadata.h"

UGzSlotsMetadata::UGzSlotsMetadata() {
}

void UGzSlotsMetadata::ReplaceOrAddMetadata(const FSaveSlotMetaData& NewMetadata) {
}

void UGzSlotsMetadata::RemoveMetaData(const FString& SaveSlotName) {
}

bool UGzSlotsMetadata::GetMetadata(const FString& SaveSlotName, FSaveSlotMetaData& OutSaveSlotMetaData) {
    return false;
}

bool UGzSlotsMetadata::ContainsMetaData(const FString& SaveSlotName) const {
    return false;
}


