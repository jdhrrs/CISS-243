#include <iostream>
#include "Media.h"
// This file defines the Media class and the displayMediaList() function 

// This class represents a piece of Meida and has two variables title and length. 
Media::Media(std::string title, int length)
    : title(title), length(length) {}

// the getTitle function returns the title of the Media
std::string Media::getTitle() const {
    return title;
}
// The getLength function returns the length of the media 
int Media::getLength() const {
    return length;
}
// Display function will show the title and length of the media. 
void Media::display() {
    std::cout << "Media Type: " << this->title << std::endl;
    std::cout << "Length of Media: " << this->length << std::endl;
}

std::vector<Media> mediaList; // Declare the mediaList variable here

// The displayMediaList() function displays a list of media and displays it. 
void displayMediaList(std::string mediaType) {
    std::cout << std::endl;
    std::cout << "| Media Type | Title | Length | Artist/Year Released |" << std::endl;
    std::cout << "|---|---|---|---|" << std::endl;

    // Iterate over the mediaList vector. 
    for (auto media : mediaList) {
        if (media.getType() == mediaType) {
            std::cout << "|" << media.getType() << "| " << media.getTitle() << "| " << media.getLength() << "| " << media.getArtist() << "/" << media.getYearReleased() << "|" << std::endl;
        }
    }

    std::cout << std::endl;
}
