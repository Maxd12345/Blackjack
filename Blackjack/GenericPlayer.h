#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H

#include "Hand.h"
#include <iostream>
#include <string>
using namespace std;


// Abstract base class that represents a participant. Either a player or a dealer
// This class inherits the traits from the HAND class becasue every person playing has a HAND.
class GenericPlayer : public Hand {
public:
	// Constructor
	GenericPlayer(const string& name = "");

	// If player wants another card
	virtual bool isHitting() const = 0;

	// If players hand is above 21
	bool hasBusted() const;

	// Msg of busting status
	void bust() const;

	// Set/Get Players name
	void setName(const string& name);
	string getName() const;

	// Overloaded operator for outping the player's name, cards, and total
	friend ostream& operator<<(ostream& os, const GenericPlayer& gp);

protected:
	string m_Name; // Name of player
};


#endif

