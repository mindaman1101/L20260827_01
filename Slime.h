#pragma once
#include "Monster.h"
#include <iostream>

class ASlime : public AMonster
{
public:
	ASlime()
	{
		X = 20;
		Y = 20;
		Z = 20;

		std::cout << "Slime »ý¼º" << std::endl;
	}

	~ASlime()
	{
		std::cout << "Slime ¼Ò¸ê" << std::endl;
	}
};