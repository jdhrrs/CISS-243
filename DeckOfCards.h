// **************************************************************************************************************
// Declars the DeckOfCards class with public member functions populateDeck, shuffleDeck, and dealCard 
// getRemainingCards, and isCardInDeck. It also declares public member variable deck whcih is a stack 
// to hold the deck of cards. It also declares constatns member variables NUM_FACES, NUM_SUITS, and NUM_CARDS
// which represent the number of faces, suits and cards in the deck. 
//***************************************************************************************************************
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Card.h" // header for Card Class
#include <stack> // Directive for the Stack 

class DeckOfCards { // DeckOfCards Class decleration 
public: // Public member functions 
    DeckOfCards(); // Constructor 
    void populateDeck(); // Function to pupulate deck with cards
    void shuffleDeck(); // Function to shuffle deck 
    Card dealCard();  // Function to deal a card 
    int getRemainingCards(); // Function to get the number remaining cards 
    std::stack<Card> deck; // Declare public member variable  stack to hold cards 
    const int NUM_FACES = 13; // Number of fave cards in deck 
    const int NUM_SUITS = 4; // Number of suits in deck 
    const int NUM_CARDS = 52; // Number of the cards in deck 
    bool isCardInDeck(Card card); // Function to check if a card is in theh deck 
};

#endif // DECKOFCARDS_H