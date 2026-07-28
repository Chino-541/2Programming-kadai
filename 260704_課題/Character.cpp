#include "Character.h"

Character::Character(std::string _type, int _attack)
{
	_CharacterType = _type;
	_CharacterAttack = _attack;
}

std::string 
Character::_CharType()
{
	return _CharacterType;
}

int Character::_CharAttack()
{
	return _CharacterAttack;
}
