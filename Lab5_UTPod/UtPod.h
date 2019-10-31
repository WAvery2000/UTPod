#ifndef UTPOD_H
#define UTPOD_H
#include "Song.h"

// Name: William Avery and John Buchanan
// Date: October 20, 2019
// Section: 16040
// Email: williamaavery@utexas.edu and
// EEID: waa493 and

//UtPod class declaration
class UtPod
{
   private:
      static const int MAX_MEMORY = 512;
      static const int SUCCESS = 0;
      static const int NO_MEMORY = -1;
      static const int NOT_FOUND = -2;
      
      struct SongNode
      {
         Song s;
         SongNode *next;
      };
      
      SongNode *songs;  //the head pointer
      
      int memSize;
   
   public:
      //Default constructor
      //set the memory size to MAX_MEMORY
      UtPod();

      //Constructor with size parameter
      //The user of the class will pass in a size.
      //If the size is greater than MAX_MEMORY or less than or equal to 0,
      //set the size to MAX_MEMORY.
      UtPod(int size);

      /* FUNCTION - int addSong
       * attempts to add a new song to the UtPod
           o returns a 0 if successful
           o returns -1 if not enough memory to add the song
       precondition: s is a valid Song
       input parms - The UtPod is initialized and the song to be added is passed in
       output parms - The song to be added is at the head of the song list if enough memory is available (a SUCCESS is returned), and if not enough memory is available then NO_MEMORY is returned 
      */

      int addSong(Song const &s);


      /* FUNCTION - int removeSong
       * attempts to remove a song from the UtPod
       * removes the first instance of a song that is in the the UtPod multiple times
           o returns 0 if successful
           o returns -1 if nothing is removed
         input parms - The UtPod is initialized and the song to be removed is passed in
         output parms - The song to be removed has been removed and SUCCESS i s returned. If that song was not in the UtPod, NOT_FOUND is returned
      */

      int removeSong(Song const &s);


      /* FUNCTION - void shuffle
       *  shuffles the songs into random order
          o will do nothing if there are less than two songs in the current list
         input parms - The UtPod has been initialized and has songs
         output parms - The songs in the UtPod have been rearranged in a "random" order
      */

      void shuffle();


      /* FUNCTION - void showSongList
       * prints the current list of songs in order from first to last to standard output
       * format - Title, Artist, size in MB (one song per line)
         input parms - The UtPod has been initialized
         output parms - Each song in the UtPod has been printed to the screen
      */

      void showSongList();


      /* FUNCTION - void sortSongList
       *  sorts the songs in ascending order
          o will do nothing if there are less than two songs in the current list
         input parms - The UtPod has been initialized and has songs
         output parms - The UtPod has been sorted in ascending order (artist, title, and then size)
      */

      void sortSongList();


      /* FUNCTION - void clearMemory
       * clears all the songs from memory
         input parms - This UtPod has been initialized
         output parms - All songs in the UtPod are removed and songs is set to NULL
      */
      void clearMemory();


      /* FUNCTION - int getTotalMemory
       *  returns the total amount of memory in the UtPod
          o will do nothing if there are less than two songs in the current list
         input parms - This UtPod has been initialized
         output parms - The UtPod's size is returned
      */

      int getTotalMemory() {
         return memSize;
      }



      /* FUNCTION - int getRemainingMemory
       *  returns the amount of memory available for adding new songs
         input parms - This UtPod has been initialized
         output parms - The UtPod's available memory is returned
      */

      int getRemainingMemory();


      ~UtPod();
 
};



#endif
