// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NightmareGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NIGHTMARE_API ANightmareGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


	virtual void StartPlay() override;
	
};
