#pragma once

class RandomNumber
{
public:
	RandomNumber() {}
	~RandomNumber() {}

public:
	int number[4];

	void RanNum();
	void RanNumDisplay();
};

class InputNumber
{
public:
	InputNumber() {}
	~InputNumber() {}

public:
	int input[4];

	void InpNum();
	void InpNumDisplay();
};

class Kekka
{
public:
	Kekka() { ResetHikaku(); }
	~Kekka() {}

	int hit = 0;
	int blow = 0;

	void ResetHikaku() { hit = 0; blow = 0; }
	void Hikaku(int* number, int* input);

	//void Hikaku(int number[4], int input[4]);

	//int blow;

	void KekkaDisplay();
};