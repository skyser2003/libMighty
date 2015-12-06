#include "stdafx.h"
#include "libMighty_Card.h"

#include "libMighty_AbstractRole.h"
#include "libMighty_CardUtilFunc.h"

namespace Mighty
{
	Card::Card()
	{

	}

	Card::~Card()
	{

	}

	void Card::Init(std::shared_ptr<AbstractPlayer> player, CardType type)
	{
		this->player = player;
		this->type = type;
		role.reset();
	}
		
	void Card::SetRole(AbstractRole* role)
	{
		this->role.reset(role);
	}

	CardType Card::GetType() const
	{
		return type;
	}

	CardSuit Card::GetSuit() const
	{
		return Util::GetSuit(type);
	}

	CardRank Card::GetRank() const
	{
		return Util::GetRank(type);
	}

	std::shared_ptr<AbstractPlayer> Card::GetPlayer() const
	{
		return player;
	}

	CardRole Card::GetRoleType() const
	{
		return role->GetRoleType();
	}

	AbstractRole* Card::GetRole() const
	{
		return role.get();
	}
}