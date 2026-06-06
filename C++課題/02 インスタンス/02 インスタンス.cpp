#include<stdio.h>
#include<iostream>
#include"Chara.h"

int main()
{
	Chara Chara('aa',2);
	
	Chara* pChara = new Chara;


	delete pChara;
	pChara = NULL;



}