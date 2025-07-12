#pragma once
#include <iostream>;
#include "Player.h"
using namespace std;

class ProfessorOak
{
public:
	string Name;

	void GreetPlayer(Player &player);
	void OfferPokemonChoices(Player &player);
};


