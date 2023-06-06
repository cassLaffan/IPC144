#include <stdio.h>
/*
* This is an example of a macro in C! You can access these
* by name anywhere in your program.
*/

#define PI 3.14

int main(){

    float twoPi = PI * 2;

    printf("This is 2 times pi: %f", twoPi);

    return 0;
}