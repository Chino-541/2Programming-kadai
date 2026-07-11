#pragma once
#include <string>
class Character
{
protected:
	int _CharacterPower = 0;

	std::string _CharName = "";
	std::string _CharPower = "Power: ";

private:
	virtual void CharStatusDisp();

};


