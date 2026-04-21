#include "GzTextCheckVolume.h"

AGzTextCheckVolume::AGzTextCheckVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentMessageIndex = 0;
    this->AutoAdvanceText = false;
    this->MessageEnabled = true;
    this->RandomMessageOrder = false;
    this->OnceOnly = false;
    this->PauseGameWhileReading = true;
    this->TimesUsed = 0;
    this->ResetToMessageNumberAtEnd = 0;
}

void AGzTextCheckVolume::ShowMessage(AGzCharacter* Character, const int32 Index, TArray<FCheckMessageData> messages) {
}

void AGzTextCheckVolume::SetMessageIndexEnabled(const int32 Index, const bool Enabled) {
}

void AGzTextCheckVolume::SetMessageEnabled(bool Enabled) {
}

void AGzTextCheckVolume::OnSelectedYes() {
}

void AGzTextCheckVolume::OnSelectedNo() {
}

void AGzTextCheckVolume::AutoAdvance() {
}


