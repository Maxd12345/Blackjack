#include "GenericPlayer.h"
#include <iostream>
using namespace std;

// Constructor
GenericPlayer::GenericPlayer(const string& name) {
	m_Name = name;
}

// Returns true if total value of hand is greater than 21
bool GenericPlayer::hasBusted() const {
	return (getTotal() > 21);
}

// Outputs message that player has busted
void GenericPlayer::bust() const {
	cout << m_Name << " busted." << endl;
}

// Sets players name
void GenericPlayer::setName(const string& name) {
	m_Name = name;
}

// Get players name
string GenericPlayer::getName() const {
	return m_Name;
}

// Overloaded operator prints the player's names, cards in hand, and hands total
ostream& operator<<(ostream& os, const GenericPlayer& gp) {
	os << gp.m_Name << "   ";
	if (!gp.m_CardVector.empty()) {
		for (auto cardP : gp.m_CardVector) {
			os << *cardP << " "; // Prints out the Card's operator
		}
		int total = gp.getTotal();
		if (total != 0)
			os << "Total: " << total;
	}
	else {
		os << "empty";
	}
	return os;
}
