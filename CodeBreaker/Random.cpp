#include "Random.h"

#include<stdlib.h>
#include<time.h>

void Random::GenerateRandomValue()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 4; i++)
	{
		_Value\[i] = rand() % 10;


		//すでに過去使われているかどうかをチェック
		for (int j = 0; j < i; j++)
		{
			if (_Value[j] = _Value[i])
			{
				//同じ番号ではないように
				i--;
				break;
			}
		}
	}

}
//void Random::GetRandomValue(int* _V, int _Size)
//{
	//for (int i = 0; i < _Size && i< 4 ; i++)
	//{
	//	_V[i] = _Value[i];
	//}
//}