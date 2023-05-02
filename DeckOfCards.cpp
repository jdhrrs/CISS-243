// ***************************************************************************************************
// The file defines a class DeckofCards that represents a deck of playing cards. The class has these 
// methods: PopulateDeck will populate deck with 52 cards for each suit and face. shuffleDeck shuffles 
// the deck using a fisher yates algorithim. dealCard removes and returns the top card in the deck or 
// Returns empty if the deck is empty. getRemainingCards returns the number of cards left in deck. 
// isCardInDeck ichecks if a givien card is still in deck. the class uses std:::stack<Card> containter 
// represent the deck of cards. 
//******************************************************************************************************
#include "DeckOfCards.h"
#include <algorithm>
#include <vector>
#include <random>

DeckOfCards::DeckOfCards() { // Constructor that populates deck with 52 cards 
    populateDeck();
}

void DeckOfCards::populateDeck() { // method to fill the deck with 52 cards 
    deck = std::stack<Card>(); // Clear the deck

    for (int suit = Card::CLUBS; suit <= Card::SPADES; suit++) {
        for (int face = Card::ACE; face <= Card::KING; face++) {
            Card card(face, suit);
            deck.push(card);
        }
    }
}

void DeckOfCards::shuffleDeck() { // Method to shuffle the deck 
    std::vector<Card> tempDeck;
    while (!deck.empty()) {
        tempDeck.push_back(deck.top());
        deck.pop();
    }

    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(tempDeck.begin(), tempDeck.end(), rng);

    for (const Card& card : tempDeck) {
        deck.push(card);
    }
}

Card DeckOfCards::dealCard() { // method to deal a card from the top of the deck 
    if (!deck.empty()) {
        Card card = deck.top();
        deck.pop();
        return card;
    }
    else {
        return Card(); // Return an empty card if deck is empty
    }
}

int DeckOfCards::getRemainingCards() { // Method to get the number of cards in left in deck 
    return deck.size();
}

bool DeckOfCards::isCardInDeck(Card card) { // Method to check if a card is still in a deck 
    std::stack<Card> tempStack = deck;
    while (!tempStack.empty()) {
        if (tempStack.top().getFace() == card.getFace() && tempStack.top().getSuit() == card.getSuit()) {
            return true;
        }
        tempStack.pop();
    }
    return false;
}


