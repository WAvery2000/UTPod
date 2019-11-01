// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and jackthefirst@utexas.edu
// EEID: waa493 and jcb5464

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
	// Song for new struct
	Song();

        // Constructor for all three song attributes
        Song(string _title, string _artist, int _size);

        string getTitle() const
            { return title; }

        string getArtist() const
            { return artist; }

        int getSize() const
            { return size; }

        void setTitle(string _title);
        void setArtist(string _artist);
        void setSize(int _size);

        bool operator >(Song const &rhs);
        bool operator <(Song const &rhs);
        bool operator ==(Song const &rhs);
};

#endif
