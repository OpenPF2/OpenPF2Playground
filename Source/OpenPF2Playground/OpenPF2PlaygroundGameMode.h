// OpenPF2 for UE Game Logic, Copyright 2021, Guy Elsmore-Paddock. All Rights Reserved.
//
// This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
// distributed with this file, You can obtain one at https://mozilla.org/MPL/2.0/.

#pragma once

#include <CoreMinimal.h>
#include <GameFramework/GameModeBase.h>

#include "OpenPF2PlaygroundGameMode.generated.h"

/**
 * Default game mode for the OpenPF2 Playground sample.
 */
UCLASS(MinimalAPI)
// ReSharper disable once CppClassCanBeFinal
class AOpenPF2PlaygroundGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AOpenPF2PlaygroundGameMode();
};
