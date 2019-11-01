#include "Song.h"
#include <string>
#include <iostream>

int main(){
    Song A("Born In the USA", "Bruce Springsteen", 212);
    Song B("Tongue Tied", "Grouplove", 69);
    Song C("I Want to Hold Your Hand", "Beatles", 420);
    Song D("Tongue Tied", "Grouplove", 69);

    cout << A.getTitle() << " - " << A.getArtist() << " - " << A.getSize() << endl;
    cout << B.getTitle() << " - " << B.getArtist() << " - " << B.getSize() << endl;

    if(A > B)
        cout << "Born In the USA is greater than Tongue Tied" << endl;
    else
        cout << "Tongue Tied is greater than Born in the USA" << endl;

    if(B > A)
        cout << "Tongue Tied is greater than Born in the USA" << endl;
    else
        cout << "Born in the USA is greater than Tongue Tied" << endl;

    if(A == C)
        cout << A.getTitle() << " is equal to " << C.getTitle() << endl;
    else
        cout << A.getTitle() << " is not equal to " << C.getTitle() << endl; 

    if(B == D)
        cout << B.getTitle() << " is equal to " << D.getTitle() << endl;
    else
        cout << B.getTitle() << " is not equal to " << D.getTitle() << endl;

    if(C < D)
        cout << C.getTitle() << " is less than " << D.getTitle() << endl;
    else
        cout << C.getTitle() << " is not less than " << D.getTitle() << endl;
}

