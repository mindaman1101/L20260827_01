#pragma once
#include "Object.h"

class AActor : public UObject
{
public:
	void Render();

protected:
	void Move();
	void Attack();

	int X;
	int Y;
	int Z;
};

