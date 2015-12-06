#include "stdafx.h"
#include "libMighty_JokerCallRole.h"

namespace Mighty
{
	void JokerCallRole::SetIsActivated(bool isActivated)
	{
		this->isActivated = isActivated;
	}

	bool JokerCallRole::IsActivated() const
	{
		return isActivated;
	}
}