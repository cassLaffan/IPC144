#include <stdio.h>

// Let's read some user input!
int main(){
    // We have to declare the variable where we will
    // store things, first!

    int userInput;
    
    // This is the command to read in input. Notice the
    // &? It is important. I will explain why and how
    // it is important later on this semester.
    scanf("%d", &userInput);

    // Let's print it to see if we got everything we needed!
    printf("My number was: %d\n", userInput);

    return 0;
}