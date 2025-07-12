#include "ProfessorOak.h"

void ProfessorOak::GreetPlayer(Player& player)
{
	cout << Name << ": Hello there! Welcome to the world of Pokemon!\n";
	cout << Name << ": My name is Oak. People call me the Pokemon Professor!\n";
	cout << Name << ": But enough about me. Let's talk about you!\n";
}

void ProfessorOak::OfferPokemonChoices(Player& player)
{
	cout << Name << ": First, tell me, what’s your name?\n";
	 cin >> player.Name ;
	cout << Name << ": Ah, " << player.Name << "! What a fantastic name!\n";
	cout << Name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

	// Presenting Pokemon choices 
	cout << Name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
	cout << Name << ": Choose wisely...\n"; std::cout << "1. Charmander - The fire type. A real hothead!\n";
	cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
	cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

	int choice;
	cout << Name << ": So, which one will it be? Enter the number of your choice: ";
	cin >> choice;
	player.choosePokemon(choice);
}

