#include "Character.h"
#include <iostream>
#include<string>

Character::Character(const char* name, int hp, int attack)
{
	//std::cout << "animal" << std::endl;
	name_ = name;
	hp_ = hp;
	attack_ = attack;


}
void Character::PrintStatus()
{
	std::cout << name_ << std::endl;
	std::cout << hp_ << std::endl;
	std::cout << attack_ << std::endl;
	std::cout << "" << std::endl;
}

Character::Character()
{
	name_ = "zzz";
	hp_ = 200;
	attack_ = 20;
}





