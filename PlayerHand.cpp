// ***********************************************************************************************
// This is the implementation of PlayerHand class is defined with a default constructor that 
// initalizes an empty hand with a max of 5 cards. 
// ***********************************************************************************************

#include "PlayerHand.h"

PlayerHand::PlayerHand() {}

void PlayerHand::addCard(Card card) { // ads card to the hand if not full. 
    if (!isFull()) {
        hand.push(card);
    }
}

void PlayerHand::clearHand() { // removes all cards from the hand 
    while (!hand.empty()) {
        hand.pop();
    }
}

int PlayerHand::getNumCards() { // returns the number of cards in the hand. 
    return hand.size();
}

bool PlayerHand::isFull() { // checks to see if the hand is full 
    return hand.size() >= MAX_CARDS;
}

Card PlayerHand::getCard(int index) { // returns the card at the specified index in the hand. 
    std::queue<Card> tempQueue = hand;
    for (int i = 0; i < index; i++) {
        tempQueue.pop();
    }
    return tempQueue.front(); 
}

