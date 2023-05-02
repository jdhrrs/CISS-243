// Justin Harris 
// CISS 243- Programming III 
// 04/05/2023
// Deck Of Cards Game 

// ***************************************************************************
// This program simulates a card game where a deck of cards is created, shuffled
// then delt to two players. the program first creates a DeckOfCards object to 
// represent the deck of cards and then shuffles it using the shuffleDeck function
// Next the program creates two PlayerHand objects to represent the hand of 2 players 
// The program then uses a for loop to deal 5 cards to each player from the deck 
// by calling the addCard function on each PlayerHand object and passing in a 
// card from the deck using dealCard function of the DeckOfCards object. 
// finally the program displays the two hands of the players using two for loops 
// that iterates over each card in the player's hands and printing out the cards rank 
// and suit as a string using the toString method of the card Class. 
// the end result is a simulation of a card game where a deck of cards is shuffled 
// and then each player is delt 5 cards and then displaying them on the console. 
// ***************************************************************************


#include "Card.h"
#include "DeckOfCards.h"
#include "PlayerHand.h"
#include <iostream>

int main() {
    DeckOfCards deck; // Create a deck of cards
    deck.shuffleDeck(); // Shuffle the deck

    PlayerHand player1Hand; // Create a hand for player 1
    PlayerHand player2Hand; // Create a hand for player 2

    // Deal 5 cards to each player
    for (int i = 0; i < 5; i++) {
        player1Hand.addCard(deck.dealCard());
        player2Hand.addCard(deck.dealCard());
    }

    // Display the initial hands of each player
    std::cout << "Player 1's hand: ";
    for (int i = 0; i < player1Hand.getNumCards(); i++) {
        Card card = player1Hand.getCard(i);
        std::cout << card.toString() << " ";
    }
    std::cout << std::endl;

    std::cout << "Player 2's hand: ";
    for (int i = 0; i < player2Hand.getNumCards(); i++) {
        Card card = player2Hand.getCard(i);
        std::cout << card.toString() << " ";
    }
    std::cout << std::endl; // Display the hands 

    return 0;
}