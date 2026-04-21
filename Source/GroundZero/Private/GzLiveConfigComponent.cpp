#include "GzLiveConfigComponent.h"

UGzLiveConfigComponent::UGzLiveConfigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enabled = false;
    this->LiveConfigURL = TEXT("https://raw.githubusercontent.com/MalformationGames/GroundZeroConfig/refs/heads/main/LiveConfigDev.json");
}

void UGzLiveConfigComponent::SetLiveEventCondition(const FLiveConfigPropertyCondition LiveEventCondition) {
}

void UGzLiveConfigComponent::ParseLiveConfig() {
}

bool UGzLiveConfigComponent::GetLiveConfigDataFloatValue(const FString& PropertyName, float& OutValue) {
    return false;
}

bool UGzLiveConfigComponent::GetLiveConfigDataBoolValue(const FString& PropertyName, bool& OutValue) {
    return false;
}

FString UGzLiveConfigComponent::GenerateTempJson() {
    return TEXT("");
}

bool UGzLiveConfigComponent::AreConditionsMet(const FLiveConfigProperty Property) {
    return false;
}


