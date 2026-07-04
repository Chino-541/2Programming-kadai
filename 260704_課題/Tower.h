#pragma once
class Tower
{
protected:
	int TowerHp;
};
class MyTower : public Tower
{
public:
	MyTower()
	{
		TowerHp = 300;
	}
};
class EnemyTower : public Tower
{
public:
	EnemyTower()
	{
		TowerHp = 300;
	}
};
