#pragma once

#include "libMighty_AbstractRole.h"

namespace Mighty
{
	#include "enum_class_CardSuit.h"

	class LIBMIGHTY_API JokerRole final : public CRTPRole<JokerRole>
	{
	public:
		JokerRole();

		void SelectSuit(CardSuit suit);

		CardSuit GetSelectedSuit() const;
	private:
		CardSuit selectedSuit;
	};
}