#pragma once

#include"Character.h"
class Shoukan : public Character
{
public:
	Shoukan()
	{
		_CharName = "¢Š«m";
		_CharacterPower = 30;
	}
	void CharStatusDisp() override;
};

