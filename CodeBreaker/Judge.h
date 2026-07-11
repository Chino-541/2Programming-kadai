#pragma once

#include"Number.h"
#include"Result.h"

//ランダム値と⼊⼒値を⽐較するクラス
class Judge
{

public:
	//void GetRandom(const Random& rand);
	//void GetInput(const Input& inp);


	//情報を受け取って、⽐較して、結果を教える
	Result Compare(const Number& rand, const Number& inp);

private:
	int _Try; //回数
};

