#include "Card.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor
Card::Card(RANK r, SUIT s, bool ifu) {
	m_Rank = r;
	m_Suit = s;
	m_isFaceUp = ifu;
}

// Returns card value
// If face down, will return 0
// Otherwise, returns cards value
// Face cards are also 10, so if above 10, still 10
int Card::getValue() const {
	if (!m_isFaceUp)
		return 0;

	if (m_Rank > 10)
		return 10;
	else
		return static_cast<int>(m_Rank);
}
// Flips card. If up, then down. Vice versa
void Card::flip() {
	m_isFaceUp = !m_isFaceUp;
}

// Overloaded operator prints the card
// If face up then it prints the rank and suit
// If its face down, it prints X
ostream& operator<<(ostream& os, const Card& card) {
	// Arrays for enum (String Representations)
	static const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	static const string SUITS[] = { "C", "D", "H", "S" };

	// Prints out the rank and suit of card, unless its flipped down.
	if (card.m_isFaceUp)
		os << RANKS[card.m_Rank] << SUITS[card.m_Suit];
	else
		os << "X";
	return os;

}