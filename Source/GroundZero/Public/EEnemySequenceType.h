#pragma once
#include "CoreMinimal.h"
#include "EEnemySequenceType.generated.h"

UENUM()
enum EEnemySequenceType {
    EnemySequence_Idle,
    EnemySequence_Walk,
    EnemySequence_Run,
    EnemySequence_Flinch,
    EnemySequence_Stun,
    EnemySequence_CriticalStart,
    EnemySequence_CriticalIdle,
    EnemySequence_CriticalDie,
    EnemySequence_CriticalRecover,
    EnemySequence_CriticalExecuted,
    EnemySequence_CrawlFall,
    EnemySequence_Crawl,
    EnemySequence_CrawlGetUp,
    EnemySequence_FlinchKicked,
    EnemySequence_Flashbanged,
    MaxEnemySequenceType,
};

