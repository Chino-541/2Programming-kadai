#include"judge.h"
#include<stdio.h>
#include "input.h"



int _judge(int _inputed, int _randomNum)
{
    //check

    if (_inputed == _randomNum)
    {
        
        printf("ƒQ[ƒ€ƒNƒŠƒA\n");
        //stop loop
        return 1;
    }
    else
    {
        if (_inputed > _randomNum)
        {
            printf("‘å‚«‚¢\n");
        }
        else
        {
            printf("¬‚³‚¢\n");
        }
        
        //loop
        return 0;
    }
}

