// Copyright Druid Mechanics


#include "AuraCharacter/AuraEnemy.h"
#include "GameFramework/CharacterMovementComponent.h"

void AAuraEnemy::HighlightActor()
{
	bHighLighted = true;
}


void AAuraEnemy::UnHighlightActor()
{
	bHighLighted = false;
}
