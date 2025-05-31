#include "Hand.h"
#include <iostream>
using namespace std;


// Constructor
// It reserves 7 spaces for the 7 cards that a hand will get
Hand::Hand() {
	m_CardVector.reserve(7);
}

// Destructor
Hand::~Hand() {
	clearHand();
}

// Appends a new card pointer to hand
void Hand::add(Card* pCard) {
	m_CardVector.push_back(pCard);
}

// Deletes all cards in the vector and clears the vetcor
void Hand::clearHand() {
	for (auto i = m_CardVector.begin(); i != m_CardVector.end(); ++i) {
		delete* i; // Deletes Card
		*i = nullptr; // Sets ptr to null
	}
	m_CardVector.clear();
}

// Gets sum of all card values in hand
// Ace is 11 ONLY WHEN it does not cause a bust to occur
int Hand::getTotal() const {
	if (m_CardVector.empty())
		return 0;

	// If first card is face down, return 0
	if (m_CardVector[0]->getValue() == 0)
		return 0;

	int total = 0;
	for (auto i = m_CardVector.begin(); i != m_CardVector.end(); ++i) {
		total = total + (*i)->getValue();
	}

	// Checking for Ace
	bool ifAce = false;
	for (auto i = m_CardVector.begin(); i != m_CardVector.end(); ++i) {
		if ((*i)->getValue() == 1)
			ifAce = true;
	}
	if (ifAce && total <= 11)
		total = total + 10; 

	return total;
}