#pragma once
#include<string>

class Character final
{
public:
	Character(const char* name, int hp, int attack);
	Character();
	
	void PrintStatus();

	//Privateƒƒ“ƒo•Ï”
private:
	std::string name_;
	int			hp_;
	int			attack_;

};



