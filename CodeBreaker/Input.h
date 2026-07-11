#pragma once

//入力値を保持するクラス
class Input
{
public:
	//入力値をもらう
	void InputValue();


	//他に渡す
	void GetInputValue(int* _IV, int _Size);

private:
	int _InputValue[4]; //0-9までの４つのインプット値


};

