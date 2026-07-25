#pragma once
#include <iostream>

class Character
{
protected:
	std::string _CharacterName;
	int _CharacterPower;

public:
	Character(std::string _name, int _power);

	//デストラクタ
	virtual ~Character() {};

	//kenshi, mahou, shoukan
	virtual std::string _CharacterType();

	std::string _getCharacterName();
	int _getCharacterPower();

	

};

