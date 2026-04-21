#include "GzAnimNotifyFootstep.h"

UGzAnimNotifyFootstep::UGzAnimNotifyFootstep() {
    this->DataTableOverride = NULL;
    this->DownwardTraceLength = 200.00f;
    this->IsSprinting = false;
    this->VolumeOverride = 0.00f;
}

void UGzAnimNotifyFootstep::OverrideDataTable(UDataTable* NewTable) const {
}


