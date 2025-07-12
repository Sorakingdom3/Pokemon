#pragma once
#include <iostream> 
#include "Pokemon.h" 
using namespace std;

class Player
{
public:
	string Name;
	Pokemon chosenPokemon;

	void choosePokemon(int choice);
};

