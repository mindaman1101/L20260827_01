#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"
#include <vector>

using namespace std;

void MoveActor(AActor* Actor, int ActorCount)
{

}

int main()
{
	vector<AActor*> Actors;

	Actors.push_back(new APlayer());
	Actors.push_back(new ASlime());
	Actors.push_back(new ASlime());
	Actors.push_back(new ASlime());
	Actors.push_back(new AGoblin());
	Actors.push_back(new AGoblin());
	Actors.push_back(new AWildBoar());

	for (int i = 0; i < Actors.size(); i++)
	{
		// make actors
	}

	for (int i = 0; i < Actors.size(); i++)
	{
		Actors[i]->Move();
	}

	for (int i = 0; i < Actors.size(); i++)
	{
		delete Actors[i];
	}

	return 0;
}