#pragma once
#include <iostream>

class Character
{
protected:
	std::string _CharacterType = {};
	int _CharacterAttack = 0;

public:
	Character(std::string _Type, int _Attack);

	//デストラクタ
	~Character(){};

	//kenshi, mahou, shoukan
	//virtual std::string _CharacterType();

	virtual std::string _CharType();
	virtual int _CharAttack();

};

