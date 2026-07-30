
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
    std::cout << "ゲームスタート" << std::endl;

    //char
    Character* _kenshi = new Character("剣士", 35);
    Character* _Mahou = new Character("魔法使い", 40);
    Character* _Shoukan = new Character("召喚士", 25);

    int _Turn = 0;

    //tower
    int _Power = 300;
    //int EnemyPower = 300;
    int _EnemyPower = _Power;

    while (true)
    {
        if (_Power <= 0 || _EnemyPower <= 0)
        {
            break;
        }
        else
        {
            //powercheck
            std::cout << "ターン：" << _Turn << std::endl;
            std::cout << "陣営の戦力：" << _Power << std::endl;
            std::cout << "敵の陣営の戦力：" << _EnemyPower << std::endl;
            std::cout << "==========" << std::endl;
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
            int _Damage;
            while (true)
            {
                scanf_s("%d", &_PickChar);
                switch (_PickChar)
                {
                case 1:
                    std::cout << _kenshi->_CharType() << "を選びました" << std::endl;
                    _Damage = _kenshi->_CharAttack();
                    break;
                case 2:
                    std::cout << _Mahou->_CharType() << "を選びました" << std::endl;
                    _Damage = _Mahou->_CharAttack();
                    break;
                case 3:
                    std::cout << _Shoukan->_CharType() << "を選びました" << std::endl;
                    _Damage = _Shoukan->_CharAttack();
                    break;

                default:
                    std::cout << "キャラクターの番号を入力してください" << std::endl;
                    std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;
                    continue;
                }
                break;
            }
            //attack defense
            std::cout << "==========" << std::endl;
            std::cout << "攻撃または防御を選んでください" << std::endl;
            std::cout << "(1)攻撃　(2)防御" << std::endl;

            std::string _PickCharType;
            switch (_PickChar)
            {
            case 1:
                _PickCharType = _kenshi->_CharType();
                break;
            case 2:
                _PickCharType = _Mahou->_CharType();
                break;
            case 3:
                _PickCharType = _Shoukan->_CharType();
                break;

            default:
                break;
            }

            int _CharAction;
            while (true)
            {
                scanf_s("%d", &_CharAction);
                switch (_CharAction)
                {
                case 1:
                    std::cout << _PickCharType << "を攻撃する" << std::endl;
                    break;
                case 2:
                    std::cout << _PickCharType << "を防御する" << std::endl;
                    break;

                default://belum diubah 
                    std::cout << "キャラクターの番号を入力してください" << std::endl;
                    std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;
                    continue;
                }
                break;
            }


            //enemycharpick
            std::cout << "==========" << std::endl;
            std::cout << "敵のキャラクター" << std::endl;
            srand((unsigned int)time(NULL));
            int _EnemyChar;
            int _EnemyDamage;
            _EnemyChar = rand() % 3 + 1;
            switch (_EnemyChar)
            {
            case 1:
                std::cout << "敵が" << _kenshi->_CharType() << "を選びました" << std::endl;
                _EnemyDamage = _kenshi->_CharAttack();
                break;
            case 2:
                std::cout << "敵が" << _Mahou->_CharType() << "を選びました" << std::endl;
                _EnemyDamage = _Mahou->_CharAttack();
                break;
            case 3:
                std::cout << "敵が" << _Shoukan->_CharType() << "を選びました" << std::endl;
                _EnemyDamage = _Shoukan->_CharAttack();
                break;
            default:
                break;
            }
            std::cout << "==========" << std::endl;

            //enemy attackdefense
            int _EnemyAction;
            _EnemyAction = rand() % 2 + 1;
            switch (_EnemyAction)
            {
            case 1:
                std::cout << "敵が攻撃を選びました" << std::endl;
                break;
            case 2:
                std::cout << "敵が防御を選びました" << std::endl;
                break;
            default:
                break;
            }

            //result
            if (_CharAction == _EnemyAction)
            {
                //attack
                if (_CharAction && _EnemyAction == 1)
                {
                    std::cout << "お互い攻撃をする" << std::endl;
                    if (_Damage > _EnemyDamage)
                    {
                        _EnemyPower -= _Damage;
                        std::cout << "攻撃力が相手より高いので、相手に" << _Damage << "ダメージを与えた" << std::endl;

                    }
                    else
                    {
                        _Power -= _EnemyDamage;
                        std::cout << "攻撃力が相手より低いので、" << _EnemyDamage << "ダメージを受けた" << std::endl;
                    }
                }
                //Defense
                else
                {
                    std::cout << "お互い防御するので、ドロー" << std::endl;
                    //break;
                }
            }
            else
            {
                if (_PickChar == _EnemyChar)
                {
                    std::cout << "同じキャラクターを選択したのでドロー" << std::endl;
                }
                else
                {
                    //attck, enemy defense
                    if (_CharAction == 1 && _EnemyAction == 2)
                    {
                        //crit
                        // (mahou,enemy kenshi) || (shoukan, enemy mahou) || (kenshi, enemy shoukan)
                        if (_PickChar == 2 && _EnemyChar == 1 || _PickChar == 3 && _EnemyChar == 2 || _PickChar == 1 && _EnemyChar == 3)
                        {
                            std::cout << "クリティカル攻撃" << std::endl;
                            _EnemyPower / 2;
                        }
                        //shoukan, enemy kenshi
                        else
                        {
                            std::cout << "カウンター発生" << std::endl;
                            //攻撃側の戦力を攻撃側の攻撃力x2で削る 
                            _Power -= (_EnemyDamage * 2);

                        }

                    }
                    if (_CharAction == 2 && _EnemyAction == 1)
                    {
                        if (_EnemyChar == 2 && _PickChar == 1 || _EnemyChar == 3 && _PickChar == 2 || _EnemyChar == 1 && _PickChar == 3)
                        {
                            std::cout << "クリティカル攻撃を受けた" << std::endl;
                            _Power / 2;
                        }
                        else
                        {
                            std::cout << "カウンター発生" << std::endl;

                            _EnemyPower -= (_Damage * 2);
                        }
                    }

                }
            }
            _Turn++;
        }
    }
    //loop==========================
    
    
    /*
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
    */

    

   
}
