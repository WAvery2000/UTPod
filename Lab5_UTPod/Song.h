#ifndef SONG_H
#define SONG_H
#include <string>

// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and
// EEID: waa493 and

class Song
{
    private:
        string title;
        string artist;
        int size;
    public:
        // Default constructor
        // Sets title and artist to "Empty" and size to 1
        Song();

        // Constructor with all parameters
        Song(string title, string artist, int size);

        string getTitle() const
            { return title; }

        string getArtist() const
            { return artist; }

        int getSize() const
            { return size; }

        void setTitle(string newTitle);
        void setArist(string newArtist);
        void setSize(string newSize);
}
