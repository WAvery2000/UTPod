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
}

UtPod::UtPod(int s){
    if(s > 512 || s <= 0)
        memSize = MAX_MEMORY;
    else
        memSize = s;
}
