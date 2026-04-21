#include "GzNPCController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AGzNPCController::AGzNPCController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->SmoothFocusInterpSpeed = 30.00f;
    this->DontShoot = false;
    this->SightSense2 = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightSense2"));
    this->HearingSense2 = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingSense2"));
    this->EnemySwitchBlockTime = 0.00f;
    this->IsHostileToPlayer = false;
    this->Enemy = NULL;
    this->Player = NULL;
    this->LoseEnemyTime = 0.00f;
    this->BehaviourTree = NULL;
    this->BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
    this->BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    this->RetreatTime = 0.00f;
    this->RetreatBlockTime = 0.00f;
    this->TargetSwitchBlockTime = 0.00f;
    this->DistanceToPlayer = -1.00f;
    this->AngleToPlayer = 0.00f;
    this->MovementLockTime = 0.00f;
}

void AGzNPCController::SetMovementLocked(const float Seconds) {
}

void AGzNPCController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors) {
}


