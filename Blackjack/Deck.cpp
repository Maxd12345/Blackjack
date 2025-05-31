#include "Deck.h"
#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;

// Constructor
Deck::Deck() {
	m_CardVector.reserve(52);
	populate();
}

void Deck::populate() {
	clearHand(); // Empty deck
	for (int i = Card::CLUBS; i <= Card::SPADES; ++i) {
		for (int j = Card::ACE; j <= Card::KING; ++j) {
			add(new Card(static_cast<Card::RANK>(j), static_cast<Card::SUIT>(i), true)); // Cards are all face-up right now
		}
	}
}
// Shuffle cards in random order
void Deck::shuffle() {
		random_shuffle(m_CardVector.begin(), m_CardVector.end());
	}

//  Gives last card from deck to a hand
void Deck::deal(Hand& aHand) {
	if (!m_CardVector.empty()) {
		aHand.add(m_CardVector.back());
		m_CardVector.pop_back();
	}
	else {
		cout << "No more cards, can't deal." << endl;
	}
}

// Continues to deal cards to player
void Deck::additionalCards(GenericPlayer& gp) {
	while (!gp.hasBusted() && gp.isHitting()) {
		deal(gp);
		cout << gp << endl; // Shows hand

		if (gp.hasBusted())
			gp.bust();
	}
}