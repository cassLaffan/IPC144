#include <stdio.h>

/*
* This file will show you the kinds of datatypes you'll
* be working with! It will also demonstrate the print function,
* which we call printf for short.
*/

// You'll notice sometimes people will put a void in here,
// and other times, people leave it blank (like me!)
// Some compilers get angry if you don't have the void, but
// I usually leave it out.
int main(void){
    // This is an integer! It is a whole number, positive or negative
    int wholeNumber = 10;

    // This is your first encounter with a print statement! Printing 
    // something means you are telling the program to display text or numbers
    // to the user of your program. When we run the program, it will print our number
    printf("%d\n", wholeNumber);

    // This is a floating point number. It has a decimal!
    float decimalNumber = 1.1;

    // You'll notice that our printf statement has two things in its brackets,
    // something weird on the left, then our variable wholeNumber on the right.
    // The left part is the string (of characters) that you are printing off.
    // Inside, the %d tells the computer that we are printing off an integer!
    // That's the formatting specifier. Different types require different formatting/
    printf("%f\n", decimalNumber);

    // This is a double! Both doubles and floats represent irrational (funky,
    // decimale numbers). However, doubles are 8 bytes (64 bits) and floats
    // are 4 bytes (32 bits).
    double biggerDecimalNumber = 1.1;

    // You're probably wondering that the \n is after the formatting operator!
    // That's called the newline character. A character is anything the computer
    // recognizes and can print off. (the lf stands for long float, or big float)
    printf("%lf\n", biggerDecimalNumber);

    // This is a character! This can contain anything, from a number, to a letter,
    // to even a symbol like !. You need the single ' ' instead of " " for characters.
    char aCharacter = '!';

    printf("%c\n", aCharacter);

    // Finally, we can actually print of a string with no variables in it! It doesn't
    // have the comma.

    printf("Goodbye!\n");

    return 0;
}