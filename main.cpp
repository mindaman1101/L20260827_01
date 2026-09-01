#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"
#include <vector>

using namespace std;

//// overload
//// name mangling
//int Add(int A, int B)
//{
//	return A + B;
//}
//
//float Add(float A, float B)
//{
//	return A + B;
//}

template<typename T>
class Data
{
public:
	T Data;
};

int main()
{
	Data<int> intData;
	Data<AActor> ActorData;

	return 0;

	srand(time(0));

	int TotalMonster = 0;
	cin >> TotalMonster;

	vector<AActor*> Actors;

	for (int i = 0; i < TotalMonster; ++i)
	{
		int Type = rand() % 1000;

		if (Type >= 0 && Type < 600)
		{
			Actors.push_back(new ASlime);

		}
		else if (Type >= 600 && Type < 900)
		{
			Actors.push_back(new AGoblin);
		}
		else
		{
			Actors.push_back(new AWildBoar);
		}		
	}

	for (int i = 0; i < TotalMonster; ++i)
	{
		Actors[i]->Move();
	}

	for (int i = 0; i < TotalMonster; ++i)
	{
		delete Actors[i];
	}

	Actors.clear();

	return 0;
}