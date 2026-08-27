#pragma once
#include "Monster.h"
#include <iostream>

class AGoblin : public AMonster
{
public:
	AGoblin()
	{
		X = 10;
		Y = 10;
		Z = 10;

		std::cout << "AGoblin »ý¼º" << std::endl;
	}

	~AGoblin()
	{
		std::cout << "AGoblin ¼Ò¸ê" << std::endl;
	}
};