#include "ChaosChatActorAuthComponent.h"

UChaosChatActorAuthComponent::UChaosChatActorAuthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerRules = AllChatters;
    this->AlwaysAllowModerators = true;
}

bool UChaosChatActorAuthComponent::TriggerChaosChatReward(TEnumAsByte<EChaosChatReward> Reward) {
    return false;
}

void UChaosChatActorAuthComponent::SendMessage(const FString& Message) {
}

bool UChaosChatActorAuthComponent::GetRewardFromString(const FString& String, TEnumAsByte<EChaosChatReward>& Reward) {
    return false;
}

void UChaosChatActorAuthComponent::Connect() {
}


