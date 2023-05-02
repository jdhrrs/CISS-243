#include <iostream>
#include "CD.h"
#include "Media.h"

// Defines the CD Class Constructor takes thee arguments. 
CD::CD(std::string artist, std::string name, int length)
    : Media(name, length), artistName(artist) {}

// adsong funcion adds a song to the CD. It takes two arguements, length and title 
void CD::addSong(std::string title, int length) {
    Song song = { title, length };
    songsList.add(song);
}
// remvoe song will remove a song from the CD. 
void CD::removeSong(int index) {
    songsList.remove(index);
}

// The updateSong function updates the song of the CD. It takes three arguements 
// index, title, and length 
void CD::updateSong(int index, std::string title, int length) {
    Song song = { title, length };
    songsList.update(index, song);
}

// the display function displays the info about the CD. 
void CD::display() {
    std::cout << "Artist: " << artist << std::endl;
    std::cout << "CD Name: " << title << std::endl;
    std::cout << "Length of CD: " << length << std::endl;
    std::cout << "Song Title: " << std::endl;
    for (int j = 0; j < songsList.size(); j++) {
        std::cout << songsList.get(j).title << std::endl;
    }
    std::cout << "Song Length:" << std::endl;
    for (int j = 0; j < songsList.size(); j++) {
        std::cout << songsList.get(j).length << std::endl;
    }
}
