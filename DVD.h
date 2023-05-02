#ifndef DVD_H
#define DVD_H

#include <string>
#include "Media.h"
#include "LinkedList.h"

struct Actor {
    std::string name;
    std::string character;
};

class DVD : public Media {
public:
    DVD(std::string title, int length, int year);

    void addActor(std::string name, std::string character);
    void removeActor(int index);
    void updateActor(int index, std::string name, std::string character);

    void display();

private:
    int yearReleased;
    LinkedList<Actor> actorsList;
    LinkedList<std::string> charactersList;
};

#endif // DVD_H

