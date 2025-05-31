# Blackjack

Card.cpp:
Represents a single playing card with suit and rank. Includes methods to get the card's value (handling face cards and aces) and to display the card.


Hand.cpp:
Manages a collection of cards held by a player or dealer. Calculates the total value of the hand and checks for busts, accounting for Aces as 1 or 11.


Deck.cpp:
Inherits from Hand. Represents a standard 52-card deck. Includes logic to populate, shuffle, and deal cards to players.


Player.cpp:
Inherits from GenericPlayer. Represents the human player, including logic for whether they want to hit or stand, and displaying the result of their game.


GenericPlayer.cpp:
An abstract base class that represents any Blackjack participant. Defines common behaviors like checking for busts or hitting. Serves as a parent for both Player and House.


House.cpp:
Inherits from GenericPlayer. Represents the dealer. Implements dealer-specific behavior such as hitting until a minimum hand value is reached.

Game.cpp:
Manages the overall flow of the game, including setting up the deck, dealing initial cards, managing player and dealer turns, and determining the outcome.

main.cpp:
The entry point of the program. Instantiates a Game object and starts the Blackjack game loop.
