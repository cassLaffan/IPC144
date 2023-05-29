#include <stdio.h>

/*
* This is an example of a do/while loop. Unlike a while loop,
* where the condition has to be true to enter the loop at least once,
* this loop will always execute at least once before checking the
* condition.
*/

int main(){
    int num = 0;
    int count = -1;

    // This is the syntax for a do/while loop. This loop will
    // ALWAYS execute at least once before checking the condition.
    do{
        printf("Please enter a number other than 0: ");
        scanf("%d", &num);
        count++;
    }while(num); 

    printf("The result is: %d", count);

    return 0;
}