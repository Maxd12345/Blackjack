#ifndef PLAYER_H
#define PLAYER_H

#include "GenericPlayer.h"
#include <iostream>
#include <string>
using namespace std;

// Represents human player, the one AGAINST the house
// Dervied from GenericPlayer class
class Player : public GenericPlayer {
public:
	// Constructor
	Player(const string& name = "");

	// Asks player if they want to hit
	virtual bool isHitting() const;

	// If win
	void win() const;
	// If lose
	void lose() const;
	// If push
	void push() const;
};

#endif