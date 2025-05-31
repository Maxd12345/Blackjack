#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "House.h"
#include "Player.h"
#include <string>
using namespace std;

// This is all the Game Logic
// Manages all classes previously created

class Game {
public:
	// Constructor
	Game(const string& playerName);

	// Plays one round of game
	void play();

private:
	Deck m_Deck;	// Deck
	House m_House;	// Dealer
	Player m_Player; // Human player
};

#endif