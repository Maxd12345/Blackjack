#include "House.h"
#include <iostream>
using namespace std;

// Constructor
// Calls the base class constructor to set the name
House::House(const string& name) : GenericPlayer(name) {

}

// Hits on 16 or less
bool House::isHitting() const {
	return (getTotal() <= 16);
}

// Flips the first card in the dealer's hand
void House::flipFirstCard() {
	if (!m_CardVector.empty())
		m_CardVector[0]->flip();
	else
		cout << "No card to flip" << endl;
}