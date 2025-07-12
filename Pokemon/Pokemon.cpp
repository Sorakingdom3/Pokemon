#include "Pokemon.h"

Pokemon::Pokemon()
{
	Health = 0;
	Type = Enums::PokemonType::NORMAL;
}
Pokemon::Pokemon(string p_name, Enums::PokemonType p_type, int p_health)
{
	Name = p_name;
	Type = p_type;
	Health = p_health;
}
void Pokemon::Attack() {
	cout << Name << " used the power of insults. It is Super Effective.";
}