#pragma once
#include <iostream>
#include "Enums.h"  
using namespace std;
class Pokemon
{
public:
	string Name;
	Enums::PokemonType Type;
	int Health;

	Pokemon();
	Pokemon(string p_name, Enums::PokemonType p_Type, int p_health);

	void Attack();

private:

	};

