
#include <iostream>
#include<memory>
#include"Character.h"
#include"Kenshi.h"

//https://yamato-t.github.io/education/1.C%2B%2B%E8%B3%87%E6%96%99/09.%E8%A8%AD%E8%A8%88/7.%E8%AA%B2%E9%A1%8C/

//print("\033[31m"+" "+"\y033[0m")
std::string _CRed = "\033[31m";
std::string _CGreen = "\033[32m";
std::string _CBlue = "\033[34m";
std::string _CNormal = "\033[0m";

//Character (kenshi-mahou-shoukan), type(player-enemy), tower, action
int main()
{
    std::cout << "簡易ゲーム制作" << std::endl;
    std::cout << "制作者：" << _CBlue <<"ダヌアルタ　ケンドリック" << _CNormal << std::endl;
    std::cout << "==========" << std::endl;

    Character* _kenshi = new Character("剣士", 35);
    Character* _Mahou = new Character("魔法使い", 40);
    Character* _Shoukan = new Character("召喚士", 25);


    int _Power = 300;
    //int EnemyPower = 300;
    int _EnemyPower = _Power;

    //powercheck
    std::cout << "陣営の戦力：" << _Power << std::endl;
    std::cout << "敵の陣営の戦力：" << _EnemyPower << std::endl;
    //charlist

    std::cout << "キャラクターリスト：" << std::endl;
    std::cout << _kenshi->_CharType() << "、  攻撃力：" << _kenshi->_CharAttack() << std::endl;
    std::cout << _Mahou->_CharType() << "、  攻撃力：" << _Mahou->_CharAttack() << std::endl;
    std::cout << _Shoukan->_CharType() << "、  攻撃力：" << _Shoukan->_CharAttack() << std::endl;
    std::cout << "==========" << std::endl;


    //charpick
    std::cout << "キャラクターを選択してください" << std::endl;
    std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;
    int _PickChar;
    while (true)
    {
        scanf_s("%d", &_PickChar);
        switch (_PickChar)
        {
        case 1:
            std::cout << _kenshi->_CharType() << "を選びました" << std::endl;
            break;
        case 2:


        default:
            continue;

        }
        break;
    }
    
    

   

    //enemycharpick

    //attack defense

    //result

    //kalau power <= 0 end


    int hptower = 100;
    std::cout << hptower << std::endl;

    hptower -= _kenshi->_CharAttack();
    std::cout << hptower << std::endl;


    std::cout << "==========" << std::endl;

    _Power -= 30;
    std::cout << _Power << std::endl;
    _EnemyPower += 69;
    std::cout << _EnemyPower << std::endl;
    _Power -= 2;
    std::cout << _Power << std::endl;


    

    


   
}
