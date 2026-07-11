

#include <iostream>

#include"Random.h"
#include"Input.h"
#include"Judge.h"
#include"Result.h"
#include"DispResult.h"

int main()
{
    Random random;
    Input input;
    Judge judge;
    DispResult dispResult;

    random.GenerateRandomValue();
    while (true)
    {
        input.InputValue();
        
        Result res = judge.Compare(random, input);

        dispResult.Disp(res);

        if (res._Clear)
        {
            break;
        }
    }
}

