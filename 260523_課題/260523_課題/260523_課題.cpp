#include<stdio.h>
#include <iostream>

#include"input.h"
#include"judge.h"

//ダヌアルタ　ケンドリック

int main()
{
    //random
    srand((signed int)time(NULL));

    int _randomNum = rand() % 10;


    //check random
    printf("Random Number :%d\n", _randomNum);

    // 0 = loop, 1 = stop
    int _loop = 0;
    while (_loop == 0)
    {
        int _inputed = _input();
        _loop = _judge(_inputed, _randomNum);
        //int _loop = _judge(_inputed, _randomNum);
    }
    

    //int _inputed = _input();
    //_judge(_inputed, _randomNum);
}

