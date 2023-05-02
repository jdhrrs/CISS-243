//***************************************************************************
// This is the header file for the class PlayerHand. it includes the header file 
// for card class and the STL queue library. THe playerhand class has the follwoing 
// public memeber functions. Playerhand() is a defualt constructor that crates a
// empty hand with a max of five cards. addCard is a function that takes a card object
// as a parameter and adds it to the hand, if the hand is full the function doesnt add 
// The card. clearHand is a function that removes all cards from hands. getNumCards is 
// a function that returns the currnet number of cards in hand. isFull is a function that 
// returns true is the hand is full or false otehrwise. getCard is a function that takes 
// an integer index as a parameter and returns Card object at the indix of the hand. 
// PlayerHand class also has aprivate member variable hand with is an stl queue of card 
// objects. it also has a private int Max_cards which is set to 5. 
// *************************************************************************************
#ifndef PLAYERHAND_H
#define PLAYERHAND_H

#include "Card.h"
#include <queue>

class PlayerHand {
public:
    PlayerHand();
    void addCard(Card card);
    void clearHand();
    int getNumCards();
    bool isFull();
    Card getCard(int index);

private:
    std::queue<Card> hand;
    const int MAX_CARDS = 5;
};

#endif // PLAYERHAND_H