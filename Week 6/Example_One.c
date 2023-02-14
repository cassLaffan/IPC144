#include <stdio.h>
// Here I will define a macro! This is code that can be recognized anywhere
// in the program. The preprocessor will deal with it.

#define pi 3.14

int main(){

    float twoPi = pi * 2;

    printf("This is 2 times pi: %f", twoPi);

    return 0;
}