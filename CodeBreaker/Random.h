#pragma once


#include"Number.h"


//ランダム生成クラス
class Random : public Number
{
public:
	//ランダム生成
	void GenerateRandomValue();

	//持っている情報を他に渡す
	void GetRandomValue(int* _V, int _Size);

//private:
	//int _Value[4]; //0-9までの４つの値
};

