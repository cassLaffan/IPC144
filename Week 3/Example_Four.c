#include <stdio.h>

/*
* This file takes a quick look at constants. These aren't too
* crazy of a concept; they simply ensure you can't go messing with
* variable values once they've been assigned!
*/

int main(){
    // A regular int variable
    int nonConst = 5;

    // Delcaring a constant is very easy; you just create a new
    // variable with "const" slapped in front of it. It has the same behaviour
    // as whatever its regular type is, you cannot overwrite it.

    
    const int constExample = 4;

    // We'll reassign nonConst first
    nonConst = nonConst + 10;
    printf("This is the non constant variable now: %d\n", nonConst);

    // The following is commented out because it will throw an error! You can't 
    // reassign a const, even "in place"
    // constExample++;
    printf("This is the constant variable now: %d\n", constExample);


    return 0;
}