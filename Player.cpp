#include "Player.h"
#include <iostream>

using namespace std;

APlayer::APlayer()
{
	cout << "APlayer 생성자" << endl;
}

APlayer::~APlayer()
{
	cout << "APlayer 소멸자" << endl;
}

void APlayer::Move()
{
	cout << "APlayer 이동" << endl;
}