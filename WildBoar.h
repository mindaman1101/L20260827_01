#pragma once
#include "Monster.h"

class AWildBoar : public AMonster
{
public:
	AWildBoar();

	virtual ~AWildBoar();

	virtual void Move() override;
};