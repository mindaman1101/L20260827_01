#pragma once

class AActor
{
public:
	AActor();

	~AActor();

	virtual void Move();

	void Attack();

	virtual void Input();
	virtual void Tick();
	virtual void Render();
};