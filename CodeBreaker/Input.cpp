#include "Input.h"

#include<iostream>


void Input::InputValue()
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << i << "‚Â–Ú‚Ì“ü—Í:" << std::endl;
		scanf_s("%d", &_InputValue[i]);
	}
}
//void Input::GetInputValue(int* _IV, int _Size)
//{
//	for (int i = 0; i < _Size && i < 4; i++)
//	{
//		_IV[i] = _InputValue[i];
//	}
//