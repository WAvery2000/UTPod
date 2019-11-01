// Name: William Avery and John Buchanan
// Date: 10/30/2019
// Email: williamaavery@utexas.edu and jackthefirst@utexas.edu
// UTEID: waa493 and jcb5464
// Section: 16040

#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
	UtPod t_d;
	UtPod t_c(256);

	Song s1("Dancing Queen", "ABBA", 100);
	Song s2("Dream On", "Aerosmith", 50);
	Song s3("Yesterday", "Beatles", 75);
	Song s4("Bohemian Rhapsody", "Queen", 25);
	Song s5("We Will Rock You", "Queen", 1);
	Song s6("Tiny Dancer", "Elton John", 256);
	Song s7("We Will Rock You", "Queen", 2);

	// Testing an empty UtPod
	cout << "-------------------------------------" << endl;	
	cout << "Testing an empty UtPod" << endl << endl;
	cout << "Total Memory = " << t_d.getTotalMemory() << endl;
	cout << "Remaining Memory = " << t_d.getRemainingMemory() << endl << endl;
	
	cout << "Attempt to delete a song = " << t_d.removeSong(s1) << endl << endl;
	
	cout << "Attempt to show song list, shuffle, sort, and clear..." << endl;
	cout << "***Showing Song List***" << endl;
	t_d.showSongList();
	t_d.sortSongList();
	t_d.shuffle();
	t_d.clearMemory();
	cout << "Success" << endl;
	cout << "-------------------------------------" << endl << endl;

	// Testing a UtPod of size 1	
	cout << "-------------------------------------" << endl;
	cout << "Testing a UtPod of size 1" << endl << endl;
	cout << "Total Memory = " << t_d.getTotalMemory() << endl;
	cout << "Remaining Memory = " << t_d.getRemainingMemory() << endl << endl;
	
	cout << "Attempt to add a song = " << t_d.addSong(s1) << endl;
	cout << "***Showing Song List***" << endl;
	t_d.showSongList();
	cout << "Remaining Memory = " << t_d.getRemainingMemory() << endl << endl;
	
	cout << "Attempt to shuffle, sort, and clear..." << endl;
	
	t_d.shuffle();
	cout << "***Showing Shuffled Song List***" << endl; 
	t_d.showSongList();
	
	t_d.sortSongList();	
	cout << "***Showing Sorted Song List***" << endl; 
	t_d.showSongList();

	t_d.clearMemory();
	cout << "***Showing Cleared Song List***" << endl; 
	t_d.showSongList();
	
	cout << endl;
	cout << "Re-add the song and delete" << endl;
	t_d.addSong(s1);
	cout << "***Showing Song List***" << endl; 
	t_d.showSongList();
	cout << "Attempt to delete = " << t_d.removeSong(s1) << endl;	
	cout << "***Showing Song List***" << endl; 
	t_d.showSongList();
	t_d.clearMemory();	
	cout << "-------------------------------------" << endl << endl;

	// Testing a UtPod with many songs
	cout << "-------------------------------------" << endl << endl;
	cout << "Testing a UtPod with many songs" << endl << endl;	
	cout << "Total Memory = " << t_c.getTotalMemory() << endl;
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl << endl;

	cout << "Adding Several Songs" << endl;
	cout << "Song 1 Result = " << t_c.addSong(s1) << endl;
	cout << "Song 2 Result = " << t_c.addSong(s2) << endl;
	cout << "Song 3 Result = " << t_c.addSong(s3) << endl;
	cout << "Song 4 Result = " << t_c.addSong(s4) << endl;
	cout << "Song 5 Result = " << t_c.addSong(s5) << endl;
	cout << "Song 6 Result = " << t_c.addSong(s5) << endl;
	cout << "Song 7 Result = " << t_c.addSong(s7) << endl;
	cout << "***Showing Song List***" << endl;
	t_c.showSongList();
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl << endl;

	cout << "Attempt to add song over memory limit = " << t_c.addSong(s6) << endl;
	cout << "***Showing Song List***" << endl;
	t_c.showSongList();
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl << endl;

	cout << "Sorting Song List" << endl;
	t_c.sortSongList();
	cout << "***Showing Sorted Song List***" << endl;
	t_c.showSongList();
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl << endl;

	cout << "Shuffling Song List" << endl;
	t_c.shuffle();
	cout << "***Showing Shuffled Song List***" << endl;
	t_c.showSongList();
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl << endl;

	cout << "Attempt to delete Tiny Dancer = " << t_c.removeSong(s6) << endl;
	cout << "Attempt to delete We Will Rock You (size 1) = " << t_c.removeSong(s5) << endl;
	cout << "***Showing Song List***" << endl;
	t_c.showSongList();
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl << endl;
	
	cout << "Clearing memory" << endl;
	t_c.clearMemory();	
	cout << "***Showing Cleared Song List***" << endl;
	t_c.showSongList();
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl;
	cout << "-------------------------------------" << endl << endl;	

	//Testing deleting a song that is a duplicate
	cout << "-----------------------------------" << endl << endl;
	cout << "Testing deleting duplicate songs in UtPod" << endl;
	cout << "Total Memory = " << t_c.getTotalMemory() << endl;
	cout << "Remaining Memory = " << t_c.getRemainingMemory() << endl;
	cout << "Adding 2 Duplicates of \"Dancing Queen\" by ABBA to UtPod" << endl;
	cout << "First copy added = " << t_c.addSong(s1) << endl;
	cout << "Second copy added = " << t_c.addSong(s1) << endl;
	cout << "***Showing Song List***" << endl;
	t_c.showSongList();
	cout << "Attemping to remove copy 1 of the Dancing Queen" << t_c.removeSong(s1)<<endl;
	cout << "***Showing Song List***" << endl;
	t_c.showSongList();
	cout << "Attemping to remove copy 2 of the Dancing Queen" << t_c.removeSong(s1)<<endl;
	cout << "***Showing Song List***" << endl;
	t_c.showSongList();

	//Testing the deconstructor for UtPod
	cout << "-------------------------------------" << endl << endl;
	cout << "Testing UtPod deconstructor with 5 songs left in" << endl << endl;	
	{
		UtPod t_b;
		cout << "Total Memory = " << t_b.getTotalMemory() << endl;
		cout << "Remaining Memory = " << t_b.getRemainingMemory() << endl << endl;
		cout << "Adding \"Dancing Queen\" by ABBA = " << t_b.addSong(s1) << endl;
		cout << "Adding \"Dream On\" by Aerosmith = " << t_b.addSong(s2) << endl;
		cout << "Adding \"Yesterday\" by Beatles = " << t_b.addSong(s3) << endl;
		cout << "Adding \"Bohemian Rhapsody\" by Queen = " << t_b.addSong(s4) << endl;
		cout << "Adding \"We Will Rock You\" by Queen = " << t_b.addSong(s5) << endl << endl;
		cout << "Remaining Memory = " << t_b.getRemainingMemory() << endl;
		cout << "***Showing Song List***" << endl;
		t_b.showSongList();
	}
	cout << "UtPod has been taken out of scope without clearing songs" << endl;
	cout << "Check Valgrind for Memory Leaks" << endl;

	cout << "Testing Complete" << endl;	
}