// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and
// EEID: waa493 and

#include "Song.h"
#include <cstdlib>
#include <string>

using namespace std;

Song::Song(string t, string a, int s){
    title = t;
    artist = a;
    size = s;
}

void Song::setTitle(string _title){
    title = _title;
}

void Song::setArtist(string _artist){
    artist = _artist;
}

void Song::setSize(int _size){
    size = _size;
}

bool Song::operator >(Song &rhs){
    if(title > rhs.title)
        return true;
    if(artist > rhs.artist)
        return true;
    if(size > rhs.size)
        return true;
    return false;
}

bool Song::operator <(Song &rhs){
    if(title < rhs.title)
        return true;
    if(artist < rhs.artist)
        return true;
    if(size < rhs.size)
        return true;
    return false;
}

bool Song::operator ==(Song &rhs){
    return title == rhs.title && artist == rhs.artist && size == rhs.size;
}
