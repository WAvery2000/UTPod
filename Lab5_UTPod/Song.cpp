#include "Song.h"
#include <cstdlib>
#include <string>
using namespace std;

// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and
// EEID: waa493 and

Song::Song(){
    title = "Empty";
    artist = "Empty";
    size = 1;
}

Song::Song(string t, string a, int s){
    title = t;
    artist = a;
    size = s;
}
