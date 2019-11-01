#include "UtPod.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and jackthefirst@utexas.edu
// EEID: waa493 and jcb5464

// Default Constructor
UtPod::UtPod(){
	memSize = MAX_MEMORY;
	songs = NULL;
	srand(time(NULL));
}

UtPod::UtPod(int s){
 	if(s > 512 || s <= 0)
		memSize = MAX_MEMORY;
	else{
		memSize = s;
		songs = NULL;
	}
	srand(time(NULL));
}

int UtPod::getRemainingMemory(){
	int size = 0;
	SongNode* p = songs;

	while (p!=NULL){
		size += p->s.getSize();
		p = p->next;
	}

	return memSize - size;
}

int UtPod::addSong(Song const &s){
	if (getRemainingMemory() < s.getSize())
		return NO_MEMORY;
	
	SongNode *temp = new SongNode();
	temp->s = s;
	temp->next = songs;
	songs = temp;	

	return SUCCESS; 
}

int UtPod::removeSong(Song const &s){
	if (songs == NULL)
		return NOT_FOUND;
	
	SongNode* p = songs;
	SongNode* prev = NULL;
	
	while (p != NULL && !(p->s == s)){
		prev = p;
		p = p->next;	
	}

	if(p == NULL)
		return NOT_FOUND;
	if(prev == NULL){
		songs = songs->next;
	}
	else{
		prev->next = p->next;	
	}

	delete p;
	return SUCCESS;
}

void UtPod::showSongList(){
	SongNode *p = songs;
	while(p != NULL){
		cout << p->s.getTitle() << ", " << p->s.getArtist() << ", " << p->s.getSize() << "MB" << endl;
		p = p->next;
	}
}

void UtPod::clearMemory(){
	if(songs == NULL)
		return;

	SongNode *p = songs->next;
	SongNode *prev = songs;

	while(p != NULL){
		delete prev;
		prev = p;
		p = p->next;
	}

	delete prev;
	songs = NULL;
}

void UtPod::sortSongList(){
	if(songs == NULL)
		return;
	SongNode *outer = songs;
	while(outer != NULL){
		SongNode *inner = outer->next;
		SongNode *smallest = outer;
		while(inner != NULL){
			if(inner->s < smallest->s)
				smallest = inner;
			inner = inner->next;
		}
		
		Song tempSong = outer->s;
		outer->s = smallest->s;
		smallest->s = tempSong;
		outer = outer->next;
	}
}

void UtPod::shuffle(){
	if(songs == NULL)
		return;
	
	int length = 0;
	SongNode *p = songs;
	while(p != NULL){
		length++;
		p = p->next;
	}
	
	for(int n = 0; n < length * 2; n++){
		int rand1 = rand() % length;
		int rand2 = rand() % length;
		SongNode *p1 = songs;
		SongNode *p2 = songs;
		int i = 0;
		while(i != rand1){
			p1 = p1->next;
			i++;
		}
		i = 0;
		while(i != rand2){
			p2 = p2->next;
			i++;
		}
		
		Song tempSong = p1->s;
		p1->s = p2->s;
		p2->s = tempSong;
	}	
}

UtPod::~UtPod(){
	clearMemory();
}
