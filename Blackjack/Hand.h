#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include <vector>
using namespace std;


class Hand {
public:
	// Constructor
	Hand();

	//  Destructor
	virtual ~Hand();

	// Card pointer to hand
	void add(Card* pCard);

	// Clears hand and frees memory
	void clearHand();

	// Gets total value of hand
	int getTotal() const;

protected:
	vector<Card*> m_CardVector; // Vector storing pointers to card Objects
};

#endif