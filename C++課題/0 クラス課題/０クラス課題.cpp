
#include <iostream>
#include "Character.h"

int main()
{
    
    //インスタンス１
    Character character1("aaa",100,10);
    character1.PrintStatus();

    //インスタンス２
    Character character2("bbb", 500, 50);
    character2.PrintStatus();

    Character character3;
    character3.PrintStatus();

    Character character4;
    character4.PrintStatus();
    
    //std::cout <<  << std::endl;

    //const Character constCharacter;
    //constCharacter.Char1(1);

}

