// ****************************************************************************
// Author:        Created by Nicholas Schoeb on 4/23/22.
// Description:    The "Menu Drive Combat Simulator" specification code.  This
//                file contains support for supplied functions that use
//                concepts beyond the student's current scope of understanding.
//                The file provides seeding for the RNG (srand()) based on the
//                BIOS clock.  The "system()" call  is used to clear the screen.
//
// WARNING WARNING WARNING !!! WARNING WARNING WARNING !!! WARNING WARNING !!!
// NOTICE: DO NOT MODIFY THIS FILE WHEN USING IT TO COMPLETE
//          "P02 - MENU DRIVEN COMBAT SIMULATOR".  ONLY INCLUDE
//            THIS FILE DIRECTLY IN IT'S GIVEN FORM.
// WARNING WARNING WARNING !!! WARNING WARNING WARNING !!! WARNING WARNING !!!
// ****************************************************************************

#include <stdlib.h>        // for system()
#include <time.h>        // for time()

// Description: Seed rand() to the BIOS system clock count
//   in seconds.  Time value obtained through 'time()'.
void SeedRNGToSystemClock() {
    srand((unsigned int)time(NULL));    // seed the RNG
}

// Description: Clears the console screen using a system() call.
//    this call required <windows.h> to function.
int ClearScreen() {
    system("clear");
    return 0;
}

// Description: Return a 'random' integer value on the mathematical
//   interval [lowerBound, upperBound].
int generateRandomValue(int lowerBound, int upperBound) {
    int range = (upperBound - lowerBound) + 1;    // establash 'window' size
    return rand() % range + lowerBound;            // slide the window
}
