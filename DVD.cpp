#include <iostream>
#include "DVD.h"

// DVD constructor that takes three arguments, title length and year.
DVD::DVD(std::string title, int length, int year)
    : Media(title, length), yearReleased(year) {}

// the addActor function adds an actor to the DVD 
// it takes two arguments, name and character. 
void DVD::addActor(std::string name, std::string character) {
    Actor actor = { name, character };
    actorsList.add(actor);
    charactersList.add(character);
}

// the removeActor removes an actor from the DVD and takes one arguement index. 
void DVD::removeActor(int index) {
    actorsList.remove(index);
    charactersList.remove(index);
}

// The updateActor function updates an actor on the DVDand takes three arguements 
// index, name and character
void DVD::updateActor(int index, std::string name, std::string character) {
    Actor actor = { name, character };
    actorsList.update(index, actor);
    charactersList.update(index, character);
}

// the display function displays the information about the DVD 
void DVD::display() {
    std::cout << "Movie Title: " << title << std::endl;
    std::cout << "Length of Movie: " << length << std::endl;
    std::cout << "Year Released: " << yearReleased << std::endl;
    std::cout << "Actors/Actresses:" << std::endl;
    for (int i = 0; i < actorsList.size(); i++) {
        std::cout << actorsList.get(i).name << std::endl;
    }
    std::cout << "Characters:" << std::endl;
    for (int i = 0; i < charactersList.size(); i++) {
        std::cout << charactersList.get(i) << std::endl;
    }
}

