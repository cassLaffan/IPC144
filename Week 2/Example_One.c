#include <stdio.h>
/*
* This is a funky kind of comment! You don't need // in front of
* every line for these kinda of comments. Instead, you just need 
* to have /* followed by the following line somewhere later:
*/
int main(){
    // Here we declare (important word!) a variable
    int myExample = 5 + 10;
    // Here we print off the variable. Note the two "arguments"
    // I will be getting more into those next week
    printf("%d\n", myExample);

    // In place incrementation! Adding ++ to the end of your variable
    // Will increment it by 1 in place!
    myExample++;
    printf("%d", myExample);

    return 0;
}