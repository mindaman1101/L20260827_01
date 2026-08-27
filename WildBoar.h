#pragma once
#include "Monster.h"
#include <iostream>

class AWildBoar : public AMonster
{
public:
	AWildBoar()
	{
		X = 30;
		Y = 30;
		Z = 30;

		std::cout << "WildBoar »ý¼º" << std::endl;
	}

	~AWildBoar()
	{
		std::cout << "WildBoar ¼Ò¸ê" << std::endl;
	}
};