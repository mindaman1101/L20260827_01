#pragma once

class AActor
{
public:
	AActor();

	virtual ~AActor();

	virtual void Move();

	void Attack();

	virtual void Input();
	virtual void Tick();
	virtual void Render();
};