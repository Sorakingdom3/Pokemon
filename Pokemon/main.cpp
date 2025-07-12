#include <iostream>
#include <string>
#include "Enums.h"
#include "Player.h"
#include "ProfessorOak.h"
using namespace std;

// Define an enum for Pokemon choices



int main() {
    Player player;
    ProfessorOak professor;
    Pokemon placeholderPokemon;

    placeholderPokemon.Name = "Pikachu";
    placeholderPokemon.Health = 40;
    placeholderPokemon.Type = Enums::PokemonType::ELECTRIC;

    player.Name = "Trainer";
    professor.Name = "Professor Oak";

    professor.GreetPlayer(player);
    professor.OfferPokemonChoices(player);

    cout << professor.Name << ": " << player.Name << " and you, " << player.chosenPokemon.Name << ", are going to be the best friends!" << endl;
    cout << professor.Name << ": Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;


    return 0;
}