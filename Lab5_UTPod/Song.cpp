// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and
// EEID: waa493 and

#include "Song.h"
#include <cstdlib>
#include <string>

using namespace std;

Song::Song(){
    title = "-1";
    artist = "-1";
    size = -1;
}

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

bool Song::operator >(Song const &rhs){
    if(artist.compare(rhs.artist) > 0)
        return true;
    if(artist.compare(rhs.artist) < 0)
        return false;

    if(title.compare(rhs.title) > 0)
        return true;
    if(title.compare(rhs.title) < 0)
        return false;
    

    if(size > rhs.size)
        return true;

    return false;
}

bool Song::operator <(Song const &rhs){
    if(artist.compare(rhs.artist) < 0)
        return true;
    if(artist.compare(rhs.artist) > 0)
        return false;
    
    if(title.compare(rhs.title) < 0)
        return true;
    if(title.compare(rhs.title) > 0)
        return false;
    
    if(size < rhs.size)
        return true;

    return false;
}

bool Song::operator ==(Song const &rhs){
    return title.compare(rhs.title) == 0 && artist.compare(rhs.artist) == 0 && size == rhs.size;
}
