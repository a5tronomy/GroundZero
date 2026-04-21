#include "GzAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Navigation/CrowdFollowingComponent.h"

AGzAIController::AGzAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->MovementLockTime = 0.00f;
    this->LoseEnemyTime = 0.00f;
    this->SightSense4 = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightSense4"));
    this->HearingSense4 = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingSense4"));
    this->BehaviourTree = NULL;
    this->BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
    this->BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
}

void AGzAIController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors) {
}

bool AGzAIController::CanSeeActor(const AActor* Item) const {
    return false;
}


