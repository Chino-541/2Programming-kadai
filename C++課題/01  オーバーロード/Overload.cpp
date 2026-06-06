#include "Overload.h"
#include<iostream>


Overload::Overload(int a, int b, int c)
{
	printf("‰Šú‰»’lF%d,%d,%d\n", a, b, c);

}

int Overload::add(int a, int b)
{
	printf("Int\n");
	return a + b;
}
float Overload::add(float a, float b)
{
	printf("Float\n");
	return a + b;
}
double Overload::add(double a, double b)
{
	printf("Double\n");
	return a + b;
}
int Overload::add(int a, int b, int c)
{
	printf("3Int\n");
	return a + b + c;
}