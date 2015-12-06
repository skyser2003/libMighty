#include "stdafx.h"
#include "libMighty_JokerRole.h"

#include "libMighty_CardSuit.h"

namespace Mighty
{
	JokerRole::JokerRole()
	{
		SelectSuit(CardSuit::None);
	}

	void JokerRole::SelectSuit(CardSuit suit)
	{
		selectedSuit = suit;
	}

	CardSuit JokerRole::GetSelectedSuit() const
	{
		return selectedSuit;
	}
}