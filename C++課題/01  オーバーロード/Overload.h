#pragma once
#include<stdio.h>

class Overload
{
public:

	Overload(int a, int b, int c);

	int add(int a, int b);
	float add(float a, float b);
	double add(double a, double b);

	int add(int a, int b, int c);
};


