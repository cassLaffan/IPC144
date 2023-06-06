#include <stdio.h>

/*
* This is a file that just shows how you might use ternary operators!
*/

int main(){

    int userInput, flag;

    printf("Enter a number between 1 and 5: ");
    scanf("%d", &userInput);

    // If we wanted to check whether our user's input met the
    // conditions we gave them above, you'd write out a lengthy
    // if statement, like so:

    /*
    if(userInput < 1 || userInput > 5){
        flag = -1; // setting to an invalid number to reset
    }
    else{
        flag = 1; // user input is good
    }
    */

    // We can make this much denser by writing the ternary operator:
    // The formatting is: condition ? value_if_true : value_if_false​
    
    flag = (userInput < 1 || userInput > 5) ? -1 : 1;

    printf("Our flag has been set to: %d", flag);

    return 0;
}