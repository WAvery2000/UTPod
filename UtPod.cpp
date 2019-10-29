#include "UTPod.h"
#include <cstdlib>
using namespace std;

// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and
// EEID: waa493 and

// Default Constructor
UtPod::UtPod(){
    memSize = MAX_MEMORY;
	songs = NULL;
}

UtPod::UtPod(int s){
    if(s > 512 || s <= 0)
        memSize = MAX_MEMORY;
    else
        memSize = s;
	songs = NULL;
}

int UtPod::getRemainingMemory(){
	int size = 0;
	SongNode* p = songs;
	while (p!=NULL){
		size+=p->song.size;
		p=p.next;
	}
	return memSize-size;
}

int UtPod::addSong(Song const &s){
	if (getTotalMemory() < s.size)
		return NO_MEMORY;
	*(songs->next) = s; 
	return SUCCESS; 
}

int UtPod::removeSong(Song const &s){
	if (songs == NULL)
		return NOT_FOUND;

	SongNode* p = songs;
	SongNode* prev = NULL;
	
	while (p != NULL && p != s){



}




