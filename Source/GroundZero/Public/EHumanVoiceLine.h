#pragma once
#include "CoreMinimal.h"
#include "EHumanVoiceLine.generated.h"

UENUM()
enum EHumanVoiceLine {
    VoiceLine_None,
    VoiceLine_AllOkay,
    VoiceLine_Death,
    VoiceLine_Pain,
    VoiceLine_FlashGrenade,
    VoiceLine_FragGrenade,
    VoiceLine_IncendiaryGrenade,
    VoiceLine_GrenadeLauncher,
    VoiceLine_HumanKilled,
    VoiceLine_HumanSpotted,
    VoiceLine_NeedMedicalEvac,
    VoiceLine_MonsterKilled,
    VoiceLine_MonsterSpotted,
    VoiceLine_IdentifySelf,
    VoiceLine_Reloading,
    VoiceLine_RespondStatusReport,
};

