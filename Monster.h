#pragma once
#include "Actor.h"
#include <iostream>

class AMonster : public AActor
{
public:
	AMonster()
	{
		std::cout << "AMonster »ý¼º" << std::endl;
	}

	~AMonster()
	{
		std::cout << "AMonster ¼Ò¸ê" << std::endl;
	}
};