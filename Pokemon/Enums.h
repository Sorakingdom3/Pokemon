#pragma once
#include <iostream>
using namespace std;

class Enums
{
public:
	enum class PokemonType {
		FIRE = 1,
		GRASS,
		WATER,
		ELECTRIC,
		GROUND,
		FLYING,
		POISON,
		GHOST,
		PSYCHIC,
		DARK,
		FAIRY,
		STEEL,
		DRAGON,
		ROCK,
		NORMAL,
		ICE,
	};

	enum class HealingItems {
		Potion = 1,
		Elixir
	};

	enum class BattleItems {
		Potion = 1,
		Elixir
	};

	enum PokemonChoice {
		CHARMANDER = 1,
		BULBASAUR,
		SQUIRTLE,
		PIKACHU
	};
};

