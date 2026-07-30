
#include <iostream>
#include<memory>
#include"Character.h"
#include <vector>
#include"Color.h"
#include"CharPick.h"
#include"EnemyCharPick.h"


//https://yamato-t.github.io/education/1.C%2B%2B%E8%B3%87%E6%96%99/09.%E8%A8%AD%E8%A8%88/7.%E8%AA%B2%E9%A1%8C/

//Character (kenshi-mahou-shoukan), type(player-enemy), tower, action
int main()
{
    std::cout << "簡易ゲーム制作" << std::endl;
    std::cout << "制作者：" << _CBlue <<"ダヌアルタ　ケンドリック" << _CNormal << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "ゲームスタート" << std::endl;

    srand((unsigned int)time(NULL));
    
#pragma region Char
    Character* _kenshi = new Character("剣士", 35);
    Character* _Mahou = new Character("魔法使い", 40);
    Character* _Shoukan = new Character("召喚士", 25);

    std::vector<Character*> _CharList = { _kenshi, _Mahou, _Shoukan };

	CharPick _CharPick;
	EnemyCharPick _EnemyCharPick;


#pragma endregion

    int _Turn = 0;

    //Power
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
#pragma region 戦力ターン
            std::cout << "ターン：" << _Turn << std::endl;
            std::cout << "味方陣営の戦力：" << _Power << std::endl;
            std::cout << "敵の陣営の戦力：" << _EnemyPower << std::endl;
            
#pragma endregion
            std::cout << "--------------------" << std::endl;
#pragma region CharDisp
           
            std::cout << _CPurple << "キャラクターリスト：" << _CNormal << std::endl;
            for (auto it = _CharList.begin(); it != _CharList.end(); ++it)
            {
                std::cout << _CPurple << (*it)->_CharType() << "---攻撃力：" << (*it)->_CharAttack() << _CNormal << std::endl;
            }
            /*
            std::cout << "キャラクターリスト：" << std::endl;
            std::cout << _kenshi->_CharType() << "、  攻撃力：" << _kenshi->_CharAttack() << std::endl;
            std::cout << _Mahou->_CharType() << "、  攻撃力：" << _Mahou->_CharAttack() << std::endl;
            std::cout << _Shoukan->_CharType() << "、  攻撃力：" << _Shoukan->_CharAttack() << std::endl;
            std::cout << "==========" << std::endl;
            */
#pragma endregion
            std::cout << "--------------------" << std::endl;
#pragma region CharPick
            std::cout << "キャラクターを選択してください" << std::endl;
            std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;

			int _Damage = _CharPick.Charpick(_kenshi, _Mahou, _Shoukan);
            /*
            int _PickChar;
            int _Damage;
            while (true)
            {
                scanf_s("%d", &_PickChar);
                switch (_PickChar)
                {
                case 1:
                    std::cout << _CGreen << _kenshi->_CharType() << "を選びました" << _CNormal << std::endl;
                    _Damage = _kenshi->_CharAttack();
                    break;
                case 2:
                    std::cout << _CGreen << _Mahou->_CharType() << "を選びました" << _CNormal << std::endl;
                    _Damage = _Mahou->_CharAttack();
                    break;
                case 3:
                    std::cout << _CGreen << _Shoukan->_CharType() << "を選びました" << _CNormal << std::endl;
                    _Damage = _Shoukan->_CharAttack();
                    break;

                default:
                    std::cout << "キャラクターの番号を入力してください" << std::endl;
                    std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;
                    continue;
                }
                break;
            }
            */
#pragma endregion
            std::cout << "--------------------" << std::endl;
#pragma region 行動
            std::cout << "攻撃または防御を選んでください" << std::endl;
            std::cout << "(1)攻撃　(2)防御" << std::endl;

            std::string _PickCharType;
            switch (_CharPick._PickChar)
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
                    std::cout << _CGreen << _PickCharType << "を攻撃する" << _CNormal << std::endl;
                    break;
                case 2:
                    std::cout << _CGreen << _PickCharType << "を防御する" << _CNormal << std::endl;
                    break;

                default:
                    std::cout << "攻撃するか？　防御するか？" << std::endl;
                    std::cout << "(1)攻撃　(2)防御" << std::endl;
                    continue;
                }
                break;
            }

#pragma endregion
            
            std::cout << _CBlue << "====================" << _CNormal<< std::endl;
#pragma region 敵のキャラクター
            //enemycharpick
            std::cout << "相手のキャラクター" << std::endl;

            int _EnemyChar = _EnemyCharPick.getEnemyChar();
			int _EnemyDamage = _EnemyCharPick.EnemycharPick(_kenshi, _Mahou, _Shoukan);
			
            /*
            int _EnemyChar;
            int _EnemyDamage;
            _EnemyChar = rand() % 3 + 1;
            switch (_EnemyChar)
            {
            case 1:
                std::cout << _CRed <<"敵が" << _kenshi->_CharType() << "を選びました" << _CNormal << std::endl;
                _EnemyDamage = _kenshi->_CharAttack();
                break;
            case 2:
                std::cout << _CRed <<"敵が" << _Mahou->_CharType() << "を選びました" << _CNormal << std::endl;
                _EnemyDamage = _Mahou->_CharAttack();
                break;
            case 3:
                std::cout << _CRed <<"敵が" << _Shoukan->_CharType() << "を選びました" << _CNormal << std::endl;
                _EnemyDamage = _Shoukan->_CharAttack();
                break;
            default:
                break;
            }
            */
#pragma endregion
            std::cout << "--------------------" << std::endl;
#pragma region 相手の行動
            //enemy attackdefense
            int _EnemyAction;
            _EnemyAction = rand() % 2 + 1;
            switch (_EnemyAction)
            {
            case 1:
                std::cout << _CRed << "相手が攻撃を選びました" << _CNormal << std::endl;
                break;
            case 2:
                std::cout << _CRed << "相手が防御を選びました" << _CNormal << std::endl;
                break;
            default:
                break;
            }
#pragma endregion
            std::cout << _CBlue << "====================" << _CNormal << std::endl;
#pragma region Result
            //result
            if (_CharAction == _EnemyAction)
            {
                //attack
                if (_CharAction == 1 && _EnemyAction == 1)
                {
                    std::cout << "お互い攻撃をする" << std::endl;
                    if (_Damage > _EnemyDamage)
                    {
                        _EnemyPower -= _Damage;
                        std::cout << "攻撃力が相手より高いので、相手に" << _Damage << "ダメージを与えた" << std::endl;

                    }
                    else if (_Damage < _EnemyDamage)
                    {
                        _Power -= _EnemyDamage;
                        std::cout << "攻撃力が相手より低いので、" << _EnemyDamage << "ダメージを受けた" << std::endl;
                    }
                    else
                    {
                        std::cout << "攻撃力が同じなので、ドロー" << std::endl;
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
                if (_CharPick._PickChar == _EnemyChar)
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
                        if (_CharPick._PickChar == 2 && _EnemyChar == 1 || _CharPick._PickChar == 3 && _EnemyChar == 2 || _CharPick._PickChar == 1 && _EnemyChar == 3)
                        {
                            std::cout << "クリティカル攻撃" << std::endl;
                            int _CritDmg = (_EnemyPower / 2);
                            _EnemyPower /= 2;
                            std::cout << "相手に" << abs(_CritDmg) << "ダメージを与えた" << std::endl;
                        }
                        //shoukan, enemy kenshi
                        else
                        {
                            std::cout << "カウンター発生" << std::endl;
                            //攻撃側の戦力を攻撃側の攻撃力x2で削る 
							int _CounterDmg = (_Power - (_Damage * 2));
                            _Power -= (_Damage * 2);
                            std::cout << abs(_CounterDmg) << "ダメージを受けた" << std::endl;

                        }

                    }
					//defense, enemy attack
                    else if (_CharAction == 2 && _EnemyAction == 1)
                    {
                        if (_EnemyChar == 2 && _CharPick._PickChar == 1 || _EnemyChar == 3 && _CharPick._PickChar == 2 || _EnemyChar == 1 && _CharPick._PickChar == 3)
                        {
                            std::cout << "クリティカル攻撃を受けた" << std::endl;
							int _CritDmgDef = (_Power / 2);
                            _Power /= 2;
                            std::cout << abs(_CritDmgDef) << "ダメージを受けた" << std::endl;
                        }
                        else
                        {
                            std::cout << "カウンター発生" << std::endl;
                            int _CounterDmgDef = (_EnemyPower - (_EnemyDamage * 2));
                            _EnemyPower -= (_EnemyDamage * 2);
                            std::cout << abs(_CounterDmgDef) << "ダメージを与えた" << std::endl;
                        }
                    }

                }
            }
#pragma endregion
            std::cout << _CBlue << "====================" << _CNormal << std::endl;
            _Turn++;
        }
       
    }
#pragma region END
    if (_Power <= 0)
    {
        std::cout << _CBlue << "LOSE" << _CNormal << std::endl;
        std::cout << "あなたの陣営の戦力が「" << _Power << "」になったので、あなたの陣営は負けました" << std::endl;
        std::cout << "使用したターン：" << _Turn << std::endl;
    }
    else
    {
        std::cout << _CBlue << "WIN" << _CNormal << std::endl;
        std::cout << "敵の陣営の戦力が「" << _EnemyPower << "」になったので、あなたの陣営は勝ちました" << std::endl;
        std::cout << "使用したターン：" << _Turn << std::endl;
    }
#pragma endregion

    
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

	delete _kenshi;
	delete _Mahou;
	delete _Shoukan;


    return 0;
   
}
