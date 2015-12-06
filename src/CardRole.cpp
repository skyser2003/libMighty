#include "stdafx.h"
#include "libMighty_CardRole.h"

namespace Mighty
{
	template <>
	LIBMIGHTY_API CardRole GetRoleType<NormalRole>()
	{
		return CardRole::Normal;
	}

	template <>
	LIBMIGHTY_API CardRole GetRoleType<MightyRole>()
	{
		return CardRole::Mighty;
	}

	template <>
	LIBMIGHTY_API CardRole GetRoleType<JokerRole>()
	{
		return CardRole::Joker;
	}

	template <>
	LIBMIGHTY_API CardRole GetRoleType<JokerCallRole>()
	{
		return CardRole::JokerCall;
	}
}