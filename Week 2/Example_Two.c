#include <stdio.h>

/*
* We have explored a lot of printf statements! But what if we want
* to read in user input, instead of just showing them something? Well,
* for that we need to use scanf, the sister function to printf.
*/

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