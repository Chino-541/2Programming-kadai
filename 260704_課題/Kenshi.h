#pragma once

#include "Character.h"
class Kenshi : public Character
{
public:
	
	Kenshi() :Character("Œ•Žm", 20)
	{
		
	}
	int DispKenshi(std::string _name, int _powers);
};

