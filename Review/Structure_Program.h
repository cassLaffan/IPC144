#ifndef STRUCTURE_PROGRAM_H
#define STRUCTURE_PROGRAM_H

#include <stdio.h>

/*
* This is the header file for a basic C program
* Remember: you need the above ifndef and define 
* so the compiler knows to only define this header once!
*/

// Below are any function prototypes/declarations you might need

// A function that takes no arguments and returns nothing
void function_one();

// A function that returns an int and takes an int as an argument
int function_two(int);

// A function that returns a float and takes two arguments, a float and an int
float function_three(float, int);

// Finally, a function that returns a character pointer (a string). Notice
// I put void in as an argument?
char* function_four(void);


#endif