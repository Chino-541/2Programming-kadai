#include "CharPick.h"
#include<iostream>

#include<stdlib.h>
#include<time.h>


#include"Kenshi.h"
#include"Mahou.h"
#include"Shoukan.h"

void CharPick::Pick()
{

    std::cout << "----------" << std::endl;
	std::cout << "キャラクターを選択してください" << std::endl;
	std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;

	while (true)
	{
        scanf_s("%d", &_PickChar);
        switch (_PickChar)
        {
        case 1:
            std::cout << "剣士を選びました" << std::endl;
            _Power = 20; 
            break;
        case 2:
            std::cout << "魔法使いを選びました" << std::endl;
            _Power = 50;
            break;
        case 3:
            std::cout << "召喚士を選びました" << std::endl;
            _Power = 30;
            break;

        default:
            std::cout << "エラーです。もう一度選択してください。" << std::endl;

            continue;
        }
        break;
	}

}
void CharPick::EnemyPick()
{
    Kenshi kenshi;
    Mahou mahou;
    Shoukan shoukan;

    std::cout << "----------" << std::endl;
    std::cout << "敵のキャラクター" << std::endl;

    srand((unsigned int)time(NULL));
    _EnemyPick = rand() % 4;

    //std::cout << "ああ"<< _EnemyPick << std::endl;
    switch (_EnemyPick)
    {
    case 1:
        kenshi.CharStatusDisp();
        _EnemyPower = 20;
        break;
    case 2:
        mahou.CharStatusDisp();
        _EnemyPower = 50;
        break;
    case 3:
        shoukan.CharStatusDisp();
        _EnemyPower = 30;
        break;
    default:
        break;
    }
}
