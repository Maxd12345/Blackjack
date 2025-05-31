#ifndef HOUSE_H
#define HOUSE_H

#include "GenericPlayer.h"
#include <iostream>
using namespace std;

// House class is the dealer
// Derived from GenericPlayer
// Dealer will hit until it has more than 16. Dealer also has 1 card showing
class House : public GenericPlayer {
public:

	// Constructor
	House(const string& name = "House");

	// Returns true IF total is 16 or less
	virtual bool isHitting() const;

	// Flips first card in house's hand
	void flipFirstCard();
};

#endif