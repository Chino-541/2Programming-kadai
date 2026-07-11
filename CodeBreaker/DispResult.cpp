#include "DispResult.h"

#include"Judge.h"

#include<iostream>


void DispResult::Disp(const Result& res)
{
	std::cout << "結果" << std::endl;
	//std::cout << "回数：" <<__try<< std::endl;
	std::cout << "ヒット数：" << res._Hit << std::endl;
	std::cout << "ブロー数：" << res._Clear <<std::endl;
	
	if (res._Clear)
	{
		std::cout << "ゲームクリア" << std::endl;
	}


}