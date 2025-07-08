#include <iostream>
using namespace std;

int main() {
    
    string playerName;

    cout << "Ah, Trainer!";
    cout << "Welcome to the world of Pokémon!";
    cout << "Today is a momentous day—you’ll be choosing your very first Pokémon.";
    cout << "Every great Trainer remembers this moment for the rest of their lives.";
    cout << "So, choose wisely, young one!";   
    cout << "1.Bulbasaur 2.Charmander 3.Squirtle" << endl;
    cout << "Which Pokémon will join you on your adventure? Enter the number." << endl;
    int choice;
    string pokeName = ""; 
    cin >> choice;
    switch (choice) 
    {

        case 1:
            pokeName = "You chose Bulbasaur! A wise choice.";
            break;
        case 2:
            pokeName = "You chose Charmander! A fiery choice.";
            break;
        case 3:
            pokeName = "You chose Squirtle! A cool choice.";
            break;
        default:
            cout << "That is not a valid option. Restart your game." << endl;
            return 0;

    }  
    cout << pokeName << endl;

    return 0;
}
