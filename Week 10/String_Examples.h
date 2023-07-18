#ifndef STRING_EXAMPLES_H
#define STRING_EXAMPLES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR_SIZE 50

/*
* This week's examples will all be declared in various
* header files. This file, for example, will be for string
* functions we write.
*/

// Here, we will create a function which does not use the
// library function for finding string length.
int findStringLength(char*);

// Let's try using strcmp but in a function. It's
// important to become comfortable with the string library.
int areStringsTheSame(char*, char*);

// Recall last week how we encountered odd behaviour when
// dealing with spaces from scanf? Let's try making a function
// which deals with that issue and returns the whole string.
char* userInputWithSpaces();

#endif