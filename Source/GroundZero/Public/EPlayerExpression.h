#pragma once
#include "CoreMinimal.h"
#include "EPlayerExpression.generated.h"

UENUM()
enum EPlayerExpression {
    ExpressionNeutral,
    ExpressionLookRight,
    ExpressionLookLeft,
    ExpressionClosedEyes,
    ExpressionAngry,
    ExpressionAngryLookLeft,
    ExpressionAngryLookRight,
    ExpressionAngryClosedEyes,
    ExpressionSad,
    ExpressionSadLookRight,
    ExpressionSadLookLeft,
    ExpressionSadClosedEyes,
    ExpressionHappy,
    ExpressionHappyLookRight,
    ExpressionHappyLookLeft,
    ExpressionHappyClosedEyes,
    ExpressionGlum,
    ExpressionGlumLookRight,
    ExpressionGlumLookLeft,
    ExpressionGlumClosedEyes,
    ExpressionResetForced,
};

