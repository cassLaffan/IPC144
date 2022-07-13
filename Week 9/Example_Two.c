#include <stdio.h>

/*
* This file shows a few different ways to manipulate
* and create a character string (remember, they're character arrays).
*/

int main(){

    printf("Enter your name and your age!\n");

    /*Let's scan an int and a char[]*/

    // Look! A statically allocated character array.
    // Doesn't give you much flexibility but hey, that's life!

    char str[20];
    
    int num;


    // Oh ho! What is happening here? What does this 19 do?
    scanf("%19s", str);

    // Remember, scanf needs an address to stick things into.
    scanf("%d", &num);

    // magic (but not really)
    printf("Your age is: %d.\nYour name is: %s.\n", num, str);

    return(0);
}