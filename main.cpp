#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"

using namespace std;

int main()
{
	APlayer* Player = new APlayer();
	AGoblin* Goblin = new AGoblin();
	ASlime* Slime = new ASlime();
	AWildBoar* WildBoar = new AWildBoar();

	delete Player;
	delete Goblin;
	delete Slime;
	delete WildBoar;	
	
	return 0;
}