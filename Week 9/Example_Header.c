#include "./Example_Header.h"

// Notice how we don't include stdio?
// That's because we include it in the 
// header file.

// If you check main.c, you'll find that we then
// call this function in the main! We can now use 
// functions across files.

int exampleFunc(float argument){
    return (int) argument * 3;
}