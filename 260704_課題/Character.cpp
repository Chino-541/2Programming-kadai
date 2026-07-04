#include "Character.h"
#include <iostream>
#include<list>


void Character::StatusDisp()
{
	
}
void Kenshi::StatusDisp() 
{
	std::cout << "Œ•ŽmƒXƒe[ƒ^ƒX: " << std::endl;
	//std::cout << "   " << "Œ•ŽmHP: " << HP << std::endl;
	//std::cout << "   " << "Œ•ŽmAttck: " << Attack << std::endl;
	std::cout << "   " << "Œ•ŽmPower: " << Power << std::endl;
}
void Mahou::StatusDisp()
{
	std::cout << "–‚–@Žg‚¢ƒXƒe[ƒ^ƒX: " << std::endl;
	//std::cout << "   " << "–‚–@Žg‚¢HP: " << HP << std::endl;
	//std::cout << "   " << "–‚–@Žg‚¢Attack: " << Attack << std::endl;
	std::cout << "   " << "–‚–@Žg‚¢Power: " << Power << std::endl;
}
void Shoukan::StatusDisp()
{
	std::cout << "¢Š«ŽmƒXƒe[ƒ^ƒX: " << std::endl;
	//std::cout << "   " << "¢Š«ŽmHP: " << HP << std::endl;
	//std::cout << "   " << "¢Š«ŽmAttack: " << Attack << std::endl;
	std::cout << "   " << "¢Š«ŽmPower: " << Power << std::endl;
}
void EnemyKenshi::StatusDisp()
{
	std::cout << "“GŒ•ŽmƒXƒe[ƒ^ƒX: " << std::endl;
	//std::cout << "   " << "“GŒ•ŽmHP: " << HP << std::endl;
	//std::cout << "   " << "“GŒ•ŽmAttck: " << Attack << std::endl;
	std::cout << "   " << "“GŒ•ŽmPower: " << Power << std::endl;
}
void EnemyMahou::StatusDisp()
{
	std::cout << "“GŒ•ŽmƒXƒe[ƒ^ƒX: " << std::endl;
	//std::cout << "   " << "“GŒ•ŽmHP: " << HP << std::endl;
	//std::cout << "   " << "“GŒ•ŽmAttck: " << Attack << std::endl;
	std::cout << "   " << "“G–‚–@Žg‚¢Power: " << Power << std::endl;
}

void EnemyShoukan::StatusDisp()
{
	std::cout << "“GŒ•ŽmƒXƒe[ƒ^ƒX: " << std::endl;
	//std::cout << "   " << "“GŒ•ŽmHP: " << HP << std::endl;
	//std::cout << "   " << "“GŒ•ŽmAttck: " << Attack << std::endl;
	std::cout << "   " << "“G¢Š«ŽmPower: " << Power << std::endl;
}

void EnemyPickChar::EnemyPick()
{
	enum MyEnum
	{
		MyPickChar,
		EnemyPickChar,
	};

	std::list<int> EnemyList = { 1,2,3 };

	srand(static_cast<unsigned int>(time(nullptr)));
	EnemyPickCharID = rand() % 3 + 1;

	if (EnemyPickCharID == 1)
	{
		EnemyKenshi EnemyKenshi1;
		EnemyKenshi1.StatusDisp();
	}
	else if (EnemyPickCharID == 2)
	{
		EnemyMahou EnemyMahou1;
		EnemyMahou1.StatusDisp();
	}
	else if (EnemyPickCharID == 3)
	{
		EnemyShoukan EnemyShoukan1;
		EnemyShoukan1.StatusDisp();
	}
	/*
	switch (EnemyPickCharID)
	{
	case 1:
		EnemyKenshi EnemyKenshi1;
		EnemyKenshi1.StatusDisp();
		break;
	case 2:
		EnemyMahou EnemyMahou1;
		EnemyMahou1.StatusDisp();
		break;
	case 3:
		EnemyShoukan EnemyShoukan1;
		EnemyShoukan1.StatusDisp();
		break;
	default:
		std::cout << "e" << std::endl;
		break;
	}
	*/
	
}
void Turn::TurnAction()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	TurnActionID = rand() % 2 + 1;

	if (TurnActionID == 1)
	{
		EnemyKenshi EnemyKenshi1;
		EnemyKenshi1.StatusDisp();
	}
	else if (TurnActionID == 2)
	{
		EnemyMahou EnemyMahou1;
		EnemyMahou1.StatusDisp();
	}
}

//void Action::Attack
//{
	
//}

