
#include <iostream>

#include"Character.h"
#include"Kenshi.h"
#include"Mahou.h"
#include"Shoukan.h"
#include"CharPick.h"
#include"Tower.h"
#include"Action.h"
#include"Battle.h"

int main()
{
    Kenshi kenshi;
    Mahou mahou;
    Shoukan shoukan;

    CharPick charpick;
    Tower tower;

    Action action;
    Battle battle;
    

    std::cout << "簡易ゲーム制作" << std::endl;
    std::cout << "==========" << std::endl;

    tower.TowerHpDisp();

    std::cout << "キャラクターリスト：" << std::endl;

    std::cout << "----------" << std::endl;

    kenshi.CharStatusDisp();
    mahou.CharStatusDisp();
    shoukan.CharStatusDisp();

   
    charpick.Pick();
    action.ActionChoice();

    charpick.EnemyPick();

    //battle.Fight();

    




    

}
