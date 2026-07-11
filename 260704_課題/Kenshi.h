#pragma once

#include"Character.h"
class Kenshi : public Character
{
public:
	Kenshi()
	{
		_CharName = "Œ•Žm";
		_CharacterPower = 20;
	}
	void CharStatusDisp() override;
};

