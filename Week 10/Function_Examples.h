#ifndef FUNCTION_EXAMPLES_H
#define FUNCTION_EXAMPLES_H

#include <stdio.h>

/*
* This week's examples will all be declared in various
* header files. This file, for example, will be for various
* functions we write.
*/

// Oh ho! Notice something interesting?
// You don't actually need to declare the variable names
// in the function declarations in headers! Just thet type.
int factorialExample(int);

// Notice the asterisk? Remember, arrays are just pointers!
void sortNumberList(int*, int);

// I wonder how we might go about efficiently searching
// a sorted list?
int searchForIndex(int*, int, int);


#endif