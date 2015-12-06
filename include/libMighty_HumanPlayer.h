#pragma once

#include "libMighty_AbstractPlayer.h"

namespace Mighty
{
	class LIBMIGHTY_API HumanPlayer : public AbstractPlayer
	{
	public:
		virtual void PlayTurn() override;

		void Init(int id, const std::string& name);
	};
}