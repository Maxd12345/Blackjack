#include "Game.h"
#include <iostream>
using namespace std;

// Construcor
// Initilaizes player name and shuffles deck
Game::Game(const string& playerName) : m_Player(playerName) {
	m_Deck.shuffle();
}


// One round of Blackjack
void Game::play() {
	// Deal two cards to Player and House
	m_Deck.deal(m_Player);
	m_Deck.deal(m_House);
	m_Deck.deal(m_Player);
	m_Deck.deal(m_House);

	// Flip House's first card face down
	m_House.flipFirstCard();

	// Display Hands
	cout << m_Player << endl;
	cout << m_House << endl;

	// See if player wants to draw more cards
	m_Deck.additionalCards(m_Player);

	// Reveal House first card
	m_House.flipFirstCard();
	cout << m_House << endl;

	// See if House must draw more cards
	m_Deck.additionalCards(m_House);

	// Determine winner
	if (m_House.hasBusted()) {
		if (m_Player.hasBusted())
			m_Player.win();
	}
	else {
		if (!m_Player.hasBusted()) {
			if (m_Player.getTotal() > m_House.getTotal())
				m_Player.win();
			else if (m_Player.getTotal() < m_House.getTotal())
				m_Player.lose();
			else
				m_Player.push();
		}
		else {
			m_Player.lose();
		}
	}
	// Clear hands for anotehr round
	m_Player.clearHand();
	m_House.clearHand();
}