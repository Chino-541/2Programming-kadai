#pragma once

#include"Character.h"
class Mahou : public Character
{
public:
	Mahou()
	{
		_CharName = "–‚–@Žg‚¢";
		_CharacterPower = 50;
	}
	void CharStatusDisp() override;
};

