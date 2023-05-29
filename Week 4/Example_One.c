#include <stdio.h>

/*
* This is an example of a while loop. A while loop is a block of
* code which will repeat until a condition is met. It's like an if
* statement that can repeat! It's asking the computer "while something
* is true, keep doing this block of code".
*/

int main(){

    // Notice that I have defined a variable I will check over and over again
    int i = -1;

    // While loops start with the "while" keyword, then the conditional brackets
    // Just like in an if statement, you ask a logical quesiton in these circle
    // brackets. Here, I'm asking, "Repeat this code while i isn't equal to 1".
    while(i != 1){ // I could also write "while(!i)"
        printf("Please enter an integer.\n");
        scanf("%d", &i);
    }

    printf("i is now %d\n", i);

    return 0;
}