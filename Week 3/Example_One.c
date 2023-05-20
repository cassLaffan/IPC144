#include <stdio.h>

/*
* This is an example of a basic if/if else/else statement!
* This style of code block allows you to have diverging actions
* depending on specific conditions. It gives your program 
* flexibility. Get used to if statements!
*/

int main(){

    int i;
    scanf("%d", &i);

    if(i == 3){
        printf("Condition met!\n");
    }
    else if(i == 2){
        printf("A different condition met!\n");
    }
    else{
        printf("Else is met!\n");
    }

    return 0;
}