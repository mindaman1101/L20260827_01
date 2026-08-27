#pragma once
#include "Object.h"
#include <iostream>

class AActor : public UObject
{
public:
	AActor()
	{
		X = 0;
		Y = 0;
		Z = 0;

		std::cout << "AActor »ý¼º" << std::endl;
	}

	~AActor()
	{
		std::cout << "AActor ¼Ò¸ê" << std::endl;
	}

	void Render();

protected:
	void Move();
	void Attack();

	int X;
	int Y;
	int Z;
};