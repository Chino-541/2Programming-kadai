#include "Battle.h"

#include"Action.h"
#include"CharPick.h"
#include"Tower.h"

void Battle::Fight()
{
	Action action;
	CharPick charpick;
	Tower tower;

	int Damage;
	//kougeki
	if (action._Action == 1)
	{
		Damage = charpick._PickChar;
		tower._EnemyTowerHp = tower._EnemyTowerHp - Damage;
		tower.TowerHpDisp();
	}
}