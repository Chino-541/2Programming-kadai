#include"Number.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void RandomNumber::RanNum()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 4; i++)
	{
		number[i] = rand() % 10;
	}
}
void RandomNumber::RanNumDisplay()
{
	for (int i = 0; i < 4; i++)
	{
		//printf("random Number:");
		//printf("%d\n", number[i]);
		printf("random Number: %d\n", number[i]);
	}
	printf("\n");
}
void InputNumber::InpNum()
{
	
	for (int j = 0; j < 4; j++)
	{
		//printf("[j]つの数字を入力してください");
		//scanf_s("%d", &input[j]);
		printf("%dつ目の数字を入力してください: ", j + 1);
		scanf_s("%d", &input[j]);
	}
	
}
void InputNumber::InpNumDisplay()
{
	printf("Input Number:");
	for (int j = 0; j < 4; j++)
	{
		//printf("Input Number: ");
		//printf("%d\n", input[j]);
		//printf("Input Number:  %d\n", input[j]);
		printf("「%d」", input[j]);
	}
	printf("\n");
}

void Kekka::Hikaku(int* number, int* input)
{
	ResetHikaku();

	bool Numed[4] = { false, false, false, false };
	bool Inped[4] = { false, false, false, false };
	
	
	for (int k = 0; k < 4; k++)
	{
		if (number[k] == input[k])
		{
			hit++;
			Numed[k] = true;
			Inped[k] = true;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (Numed[i]) continue;

		for (int j = 0; j < 4; j++)
		{
			if (!Numed[j] && input[i] == number[j])
			{
				blow++;
				Numed[j] = true;
				break;
			}
		}
	}

	//for (int k = 0; k < 4; k++)
	//{
	//	// 位置も数字も合っている場合（Hit）
	//	if (number[k] == input[k])
	//	{
	//		//printf("位置と数字が一致 (Hit): %d\n", input[k]);
	//		hit++;
	//	}
	//}

}
void Kekka::KekkaDisplay()
{
	//printf("ヒット数は %d", hit);
	//printf("%d", hit);
	
	printf("ヒット数は %d\n", hit);
	printf("ブロー数は %d\n", blow);
	printf("\n");

}