#pragma once
#include"CharPick.h"

class EnemyCharPick : public CharPick
{
private:
	
public:
	int _EnemyChar = 0;
	int _EnemyDamage;
	int EnemycharPick(Character* _kenshi, Character* _Mahou, Character* _Shoukan);
	int getEnemyChar();

};

