
#include <iostream>
#include "Character.h"

int main()
{
    std::cout << "簡易ゲーム制作" << std::endl;
    std::cout << "==========" << std::endl;
    
    std::cout << "キャラクターリスト：" << std::endl;
    
    Kenshi kenshi1;
    kenshi1.StatusDisp();

    Mahou mahou1;
    mahou1.StatusDisp();

    Shoukan shoukan1;
    shoukan1.StatusDisp();

    std::cout << "----------" << std::endl;

    std::cout << "キャラクターを選択してください" << std::endl;
    std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;

    int PickChar;
    while (true)
    {
        scanf_s("%d", &PickChar);
        switch (PickChar)
        {
        case 1:
            std::cout << "剣士を選びました" << std::endl;
            break;
        case 2:
            std::cout << "魔法使いを選びました" << std::endl;
            break;
        case 3:
            std::cout << "召喚士を選びました" << std::endl;
            break;

        default:
            std::cout << "エラーです。もう一度選択してください。" << std::endl;

            continue;
        }
        break;
    }
    std::cout << "----------" << std::endl;
    std::cout << "攻撃または防御を選んでください" << std::endl;
    std::cout << "(1)攻撃　(2)防御" << std::endl;

    EnemyPickChar EnemyPick1;
    EnemyPick1.EnemyPick();

    
    
}
