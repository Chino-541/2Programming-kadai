#include "Tower.h"
#include<iostream>

void Tower::TowerHpDisp()
{
	std::cout << "----------" << std::endl;
	std::cout << "Tower Hp : "<< _MyTowerHp << std::endl;
	std::cout << "Enemy Tower Hp : "<< _EnemyTowerHp << std::endl;
}