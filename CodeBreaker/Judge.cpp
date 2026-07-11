#include "Judge.h"



Result Judge::Compare(const Number& rand, const Number& inp)
{
	_Try++;
	int _rn[4];
	int _in[4];


	rand.getValue(_rn, 4);
	inp.getValue(_rn, 4);

	bool _isHit[4] = {};
	int _HitNum = 0;
	for (int i = 0; i < 4; i++)
	{
		if (_rn[i] == _in[i])
		{
			_HitNum++;
			_isHit[i] = true;
		}
	}

	int _BlowNum = 0;
	for (int i = 0; i < 4; i++)
	{
		int _InputNum = _in[i];

		for (int j = 0; j < 4; j++)
		{
			if (_isHit[j])
			{
				continue;
			}
			if (_rn[j] == _InputNum)
			{
				_BlowNum++;
			}
		}
	}

	Result res;
	res._Hit = _HitNum;
	res._Blow = _BlowNum;
	//res._Clear 

	
}
