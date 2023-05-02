#ifndef CD_H
#define CD_H

#include <string>
#include "LinkedList.h"

struct Song {
    std::string title;
    int length;
};

class CD : public Media {
private:
    std::string artist;
    LinkedList<Song> songsList;
    std::string artistName;

public:
    CD(std::string title, int length, std::string artist);
    CD(std::string artist, std::string name, int length);
    void addSong(std::string title, int length);
    void removeSong(int index);
    void updateSong(int index, std::string title, int length);
    void display();
};

#endif
