#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

// Class Card for each cards info
class Card {
public:
	// Enumerations for rank and suit
	enum RANK {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
	enum SUIT {CLUBS, DIAMONDS, HEARTS, SPADES};

	// Constructor
	// ifu is if up.
	Card(RANK r = ACE, SUIT s = CLUBS, bool ifu = true);
	
	// Returns value of card WHEN face up. If it isn't, 0
	int getValue() const;

	// Flips card face up or face down
	void flip();

	// Insertion operator in order to output the card dtails
	friend ostream& operator<<(ostream& os, const Card& aCard);

private:
	RANK m_Rank; // Rank of card
	SUIT m_Suit; // Suit of Card
	bool m_isFaceUp; // Face up or down
};



#endif