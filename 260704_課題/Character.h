#pragma once

class Character
{
protected:
	//int HP;
	//int Attack;
	int Power;
public:
	virtual void StatusDisp();
};


#pragma region –¡•û
class Kenshi : public Character
{
public:
	Kenshi()
	{
		//HP = 300;
		//Attack = 20;
		Power = 20;
		
	}
	void StatusDisp() override;
};

class Mahou : public Character
{
public:
	Mahou()
	{
		//HP = 300;
		//Attack = 50;
		Power = 50;
	}
	void StatusDisp() override;
};

class Shoukan : public Character
{
public:
	Shoukan()
	{
		//HP = 300;
		//Attack = 30;
		Power = 30;
	}
	void StatusDisp() override;
};
#pragma endregion

#pragma region “G
class EnemyKenshi : public Character
{
public:
	EnemyKenshi()
	{
		//HP = 300;
		//Attack = 20;
		Power = 20;
	}
	void StatusDisp() override;
};

class EnemyMahou : public Character
{
public:
	EnemyMahou()
	{
		//HP = 300;
		//Attack = 50;
		Power = 50;
	}
	void StatusDisp() override;
};

class EnemyShoukan : public Character
{
public:
	EnemyShoukan()
	{
		//HP = 300;
		//Attack = 30;
		Power = 30;
	}
	void StatusDisp() override;
};
#pragma endregion



class EnemyPickChar
{
	int EnemyPickCharID = 0;
public:
	void EnemyPick();
};

class Turn
{
	int TurnID = 0;
	int TurnActionID = 0;
public:
	void TurnAction();
};

class Action
{
public:
	void Attack();
	void Defense();
};


