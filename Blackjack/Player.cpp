#include "Player.h"
#include <iostream>
using namespace std;

// Constructor
// Calls the base class constructor to set the name
Player::Player(const string& name) : GenericPlayer(name) {
	
}
// ASks player if they would like to hit or not. If yes, returns true. If no, returns false
bool Player::isHitting() const {
	cout << m_Name << ", would you like to hit? (Y/N): ";
	char answer;
	cin >> answer;
	return (answer == 'y' || answer == 'Y');
}
// If player wins, outputs message
void Player::win() const {
	cout << m_Name << " wins. " << endl;
}
// If player loses, outputs message
void Player::lose() const {
	cout << m_Name << " loses. " << endl;
}

// If player pushes, outputs message
void Player::push() const {
	cout << m_Name << " pushes. " << endl;
}