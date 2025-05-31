#ifndef DECK_H
#define DECK_H

#include "Hand.h"
#include "GenericPlayer.h"
#include "Card.h"
#include <vector>
using namespace std;

// Deck represents a deck of cards
// Inherits the HAND class
class Deck : public Hand {
public:
	// Constructor
	Deck();

	// Destructor
	virtual ~Deck() {

	}

	// Populates the deck with 52 cards
	void populate();

	// Shuffles the deck
	void shuffle();

	// Deals one card from the deck to a hand
	void deal(Hand& aHand);

	// Deals additional card to a GenericPlayer until they choose to stop or they bust
	void additionalCards(GenericPlayer& gp);
};

#endif