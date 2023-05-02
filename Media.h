#ifndef MEDIA_H
#define MEDIA_H

#include <string>
#include <vector>

using namespace std;

class Media {
public:
    Media(std::string title, int length);
    std::string getTitle() const;
    int getLength() const;
    void displayMediaList(std::string mediaType);
    void display();
    string getType();
    std::string getTitle() const {
        return title;
    }

    int getLength() const {
        return length;
    }

    std::string getArtist() const {
        return "Unknown";
    }

    int getYearReleased() const {
        return 0;
    }
protected:
    std::string title;
    int length;
    std::vector<Media> mediaList;
};

#endif // MEDIA_H
