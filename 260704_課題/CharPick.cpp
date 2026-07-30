#include "CharPick.h"
#include "Color.h"
#include <iostream>

int CharPick::Charpick(Character* _kenshi, Character* _Mahou, Character* _Shoukan)
{
    while (true)
    {
        scanf_s("%d", &_PickChar);
        switch (_PickChar)
        {
        case 1:
            std::cout << _CGreen << _kenshi->_CharType() << "を選びました" << _CNormal << std::endl;
            _Dmg = _kenshi->_CharAttack();
			return _Dmg;
            break;
        case 2:
            std::cout << _CGreen << _Mahou->_CharType() << "を選びました" << _CNormal << std::endl;
            _Dmg = _Mahou->_CharAttack();
            return _Dmg;
            break;
        case 3:
            std::cout << _CGreen << _Shoukan->_CharType() << "を選びました" << _CNormal << std::endl;
            _Dmg = _Shoukan->_CharAttack();
            return _Dmg;
            break;

        default:
            std::cout << "キャラクターの番号を入力してください" << std::endl;
            std::cout << "(1)剣士　(2)魔法使い　(3)召喚士" << std::endl;
            continue;
        }
        break;
    }
}
int CharPick::getPickChar()
{
    return _PickChar;
}