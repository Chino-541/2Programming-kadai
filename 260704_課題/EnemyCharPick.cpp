#include "EnemyCharPick.h"
#include "Color.h"
#include <iostream>

int EnemyCharPick::EnemycharPick(Character* _kenshi, Character* _Mahou, Character* _Shoukan)
{
    _EnemyChar = rand() % 3 + 1;
    switch (_EnemyChar)
    {
    case 1:
        std::cout << _CRed << "“G‚ª" << _kenshi->_CharType() << "‚ð‘I‚Ñ‚Ü‚µ‚½" << _CNormal << std::endl;
        _EnemyDamage = _kenshi->_CharAttack();
		return _EnemyDamage;
        break;
    case 2:
        std::cout << _CRed << "“G‚ª" << _Mahou->_CharType() << "‚ð‘I‚Ñ‚Ü‚µ‚½" << _CNormal << std::endl;
        _EnemyDamage = _Mahou->_CharAttack();
        return _EnemyDamage;
        break;
    case 3:
        std::cout << _CRed << "“G‚ª" << _Shoukan->_CharType() << "‚ð‘I‚Ñ‚Ü‚µ‚½" << _CNormal << std::endl;
        _EnemyDamage = _Shoukan->_CharAttack();
        return _EnemyDamage;
        break;
    default:
        break;
    }
}
int EnemyCharPick::getEnemyChar()
{
    return _EnemyChar;
}