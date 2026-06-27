#include"Number.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	//ランダム
	RandomNumber ran;
	ran.RanNum();
	ran.RanNumDisplay();

	//インプット
	InputNumber in;
	Kekka keka;

	int kurikaeshi = 0; 

	//繰り返し
	while (true)
	{
		
		kurikaeshi++;
		
		in.InpNum();
		in.InpNumDisplay();

		//結果
		keka.Hikaku(ran.number, in.input);
		keka.KekkaDisplay();

		if (keka.hit == 4)
		{
			break;
		}
	}

	//クリア
	printf("ゲームクリア！\n");
	printf("繰り返し回数: %d 回\n", kurikaeshi);

	return 0;
}
/*
int main()
{
	int number[4];
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 4; i++)
	{
		number[i] = rand() % 10;
		

	}
	void randomNumDisplay(int number[4]);
	{
		for (int i = 0; i < 4; i++)
		{
			printf("random Number:");
			printf("%d\n", number[i]);
		}

	}
	int input[4];

	void InputNum();
	{
		

		for (int j = 0; j < 4; j++)
		{
			printf( "[j]つの数字を入力してください");
			scanf_s("%d", &input[j]);
		}
	}
	void InputNumDisplay(int input[4]);
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Input Number: ");
			printf("%d\n", input[j]);
		}
	}
	int Hit = 0;
	void Hikaku(int number[4], int input[4]);
	{
		for (int k = 0; k < 4; k++)
		{
			if (number[k] == input[k])
			{
				Hit++;
				
			}
			
		}
		printf("Hit : %d", Hit);
	}
	
}
*/