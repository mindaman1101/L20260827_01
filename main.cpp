#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"


using namespace std;


void MoveActor(AActor* Actor, int ActorCount)
{
	for (int i = 0; i < ActorCount; i++)
	{
		Actor[i].Move();
	}
}


int main()
{
	int PlayerCount = 1;
	int SlimeCount = 3;
	int GoblinCount = 2;
	int WildBoarCount = 1;


	APlayer* Player = new APlayer[PlayerCount];
	ASlime* Slime = new ASlime[SlimeCount];
	AGoblin* Goblin = new AGoblin[GoblinCount];
	AWildBoar* WildBoar = new AWildBoar[WildBoarCount];


	MoveActor(Player, PlayerCount);
	MoveActor(Slime, SlimeCount);
	MoveActor(Goblin, GoblinCount);
	MoveActor(WildBoar, WildBoarCount);


	delete[] Player;
	delete[] Goblin;
	delete[] Slime;	
	delete[] WildBoar;


	Player = nullptr;
	Goblin = nullptr;
	Slime = nullptr;
	WildBoar = nullptr;


	return 0;
}