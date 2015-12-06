#pragma once

namespace Mighty
{
	#include "enum_class_CardType.h"
	#include "enum_class_CardSuit.h"
	enum class CardRank;

	namespace Util
	{
		LIBMIGHTY_API CardSuit GetSuit(CardType type);
		LIBMIGHTY_API CardRank GetRank(CardType type);

		LIBMIGHTY_API std::string GetCardResourceName(CardType type);
	}
}