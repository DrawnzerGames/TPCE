// This source code is licensed under the MIT license found in the LICENSE file in the root directory of this source tree.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ObjectMacros.h"

#include "PawnControlInterface.generated.h"

UINTERFACE(meta = (CannotImplementInterfaceInBlueprint))
class UPawnControlInterface: public UInterface { GENERATED_BODY() };

/**
 * Interface implemented by classes derived from APawn for extended control.
 */
class TPCE_API IPawnControlInterface
{
	GENERATED_BODY()

public:

	/** Called after normal input bindings have been processed for last minute custom input handling. */
	virtual void ProcessInput(const float DeltaTime, const bool bGamePaused) = 0;
};
