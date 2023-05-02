#ifndef CARD_H
#define CARD_H

#include <string>

class Card
{
public:
    Card();
   int toString();
    Card(int faceValue, int suitValue);
    void setFaceName();
    void setSuitName();
    bool isHigherThan(Card card2, bool aceHigh = false);
    bool isHigherThan(Card card2);
    int getFace();
    int getSuit();
    int getFace() const { return face; }
    int getSuit() const { return suit; }
    std::string getFaceName() const { return faceName; }
    std::string getSuitName() const { return suitName; }
    enum Face {
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX,
        SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
    };
    enum Suit { CLUBS = 1, DIAMONDS, HEARTS, SPADES };
    const int NUM_FACES = 13;
    const int NUM_SUITS = 4;
    int face;
    int suit;
    std::string faceName;
    std::string suitName;
};

#endif // CARD_H

