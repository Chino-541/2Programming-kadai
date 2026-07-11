#include "Action.h"
#include<iostream>

void Action::ActionChoice()
{
    
    std::cout << "----------" << std::endl;
    std::cout << "UŒ‚‚Ü‚½‚Í–hŒä‚ð‘I‚ñ‚Å‚­‚¾‚³‚¢" << std::endl;
    std::cout << "(1)UŒ‚@(2)–hŒä" << std::endl;
    scanf_s("%d", &_Action);

    switch (_Action)
    {
    case 1:
        std::cout << "UŒ‚" << std::endl;
        break;
    case 2:
        std::cout << "–hŒä" << std::endl;
        break;

    default:
        break;
    }
    
}
void Action::Attack()
{

}
void Action::Defense()
{

}