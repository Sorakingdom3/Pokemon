#include "Player.h"

void Player::choosePokemon(int choice)
{
	switch (choice) {
	case Enums::PokemonChoice::CHARMANDER:
		chosenPokemon = Pokemon("Charmander", Enums::PokemonType::FIRE, 100);
		break;
	case Enums::PokemonChoice::BULBASAUR:
		chosenPokemon = Pokemon("Bulbasaur", Enums::PokemonType::GRASS, 100);
		break;
	case Enums::PokemonChoice::SQUIRTLE:
		chosenPokemon = Pokemon("Squirtle", Enums::PokemonType::WATER, 100);
		break;
	default:
		chosenPokemon = Pokemon("Charmander", Enums::PokemonType::ELECTRIC, 100);
		break; 
	}
	cout << "Player " << Name << " chose " << chosenPokemon.Name << endl;
}
