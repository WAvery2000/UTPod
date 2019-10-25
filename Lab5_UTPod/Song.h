// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and
// EEID: waa493 and

#ifndef SONG_H
#define SONG_H

#include <string>

using namespace std;

class Song
{
    private:
        string title;
        string artist;
        int size;
    public:
        // Constructor for all three song attributes
        Song(string title, string artist, int size);

        string getTitle() const
            { return title; };

        string getArtist() const
            { return artist; };

        int getSize() const
            { return size; };

        void setTitle(string newTitle);
        void setArist(string newArtist);
        void setSize(string newSize);

        bool operator >(Song const &rhs);
        bool operator <(Song const &rhs);
        bool operator ==(Song const &rhs);
};

#endif
