#pragma once
#include "Actor.h"
#include <iostream>

class APlayer : public AActor
{
public:
	APlayer()
	{
		X = 0;
		Y = 0;
		Z = 0;

		std::cout << "APlayer »ý¼º" << std::endl;
	}

	~APlayer()
	{
		std::cout << "APlayer ¼Ò¸ê" << std::endl;
	}
};