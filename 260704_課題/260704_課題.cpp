
#include <iostream>
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
    Kenshi kenshi;
    
    std::cout << "簡易ゲーム制作" << std::endl;
    std::cout << "制作者：" << _CBlue <<"ダヌアルタ　ケンドリック" << _CNormal << std::endl;
    std::cout << "==========" << std::endl;

    kenshi._getCharacterName();
    kenshi.DispKenshi();
}
