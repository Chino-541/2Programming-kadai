#include "Character.h"

Character::Character(std::string _name, int _power)
{
	_CharacterName = _name;
	_CharacterPower = _power;
}

std::string 
Character::_getCharacterName()
{
	return _CharacterName;
}

int Character::_getCharacterPower()
{
	return _CharacterPower;
}
