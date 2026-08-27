#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"

using namespace std;

int main()
{
	int PlayerCount = 1;
	int SlimeCount = 3;
	int GoblinCount = 2;
	int WildBoarCount = 1;


	APlayer* Player = new APlayer[PlayerCount];
	ASlime* Slimes = new ASlime[SlimeCount];
	AGoblin* Goblins = new AGoblin[GoblinCount];
	AWildBoar* WildBoar = new AWildBoar[WildBoarCount];


	for (int i = 0; i < PlayerCount; i++)
	{
		Player[i].Move();
	}	

	for (int i = 0; i < SlimeCount; i++)
	{
		Slimes[i].Move();
	}

	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins[i].Move();
	}

	for (int i = 0; i < WildBoarCount; i++)
	{
		WildBoar[i].Move();
	}


	delete[] Player;
	delete[] Goblins;
	delete[] Slimes;
	delete[] WildBoar;


	Player = nullptr;
	Goblins = nullptr;
	Slimes = nullptr;
	WildBoar = nullptr;

	return 0;
}