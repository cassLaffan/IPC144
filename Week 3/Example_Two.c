#include <stdio.h>

/*
* This is an example of a switch statement. It's a different form of 
* if statement/conditional logic. Instead of checking the truth of a
* statement, like in an if statement, switch cases allow you to check
* the value of a variable and then do actions based upon its value.
*/

int main(){
    int i;

    printf("Please input a number between 1 and 3.\n");
    scanf("%d", &i);

    // This syntax is very straight forward. Instead of if([condition]),
    // you have the switch keyword, and the in the brackets, you have the value
    // you're checking
    switch(i){
        // The syntax for checking the value is simple! You simply type
        // the keyword "case", then the value you're checking for. Here, it's
        // ints.
        case 1:
        case 2:
        case 3:
            // Notice how the first two were left blank? This is useful behaviour!
            // It defaults to the next populated case.
            printf("%d is a good number.\n", i);
            // You need to put in the keyword "break" in your populated cases, or else
            // it will also execute the default behaviour below!
            break;
        default:
            // The default behaviour in a switch case is like the "else"
            // This will happen if no other cases are met.
            printf("That's not between 1 and 3!\n");
    }

    return 0;
}