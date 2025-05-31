#include "Game.h"
#include <iostream>
using namespace std;

int main() {

	cout << "Welcome to Blackjack!" << endl;

	// Entering name for player
	cout << "Enter your name: ";
	string name;
	cin >> name;

	Game game(name);

	// Keeps rounds going as long as input is y. If anything else, program ends
	char again = 'y';
	while (again == 'y' || again == 'Y') {
		game.play();
		cout << endl << "Do you want to play again? (Y/N): ";
		cin >> again;
	}

	cout << "Exiting Program";
	return 0; // Push Test
}

