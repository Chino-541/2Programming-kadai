#include<iostream>
#include<stdio.h>
#include "Overload.h"

int main()
{
	
	Overload Overload1(1, 2, 3);

	int ResultInt = Overload1.add(5, 10);
	printf("値: %d\n\n", ResultInt); 

	float ResultFloat = Overload1.add(5.0f, 10.0f);
	printf("値: %f\n\n", ResultFloat); 

	double ResultDouble = Overload1.add(5.0, 10.0);
	printf("値: %f\n\n", ResultDouble);

	int Result3Int = Overload1.add(5, 10, 20);
	printf("値: %d\n\n", Result3Int);

	return 0;
}

