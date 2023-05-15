#include <stdio.h>
/*
* This is a funky kind of comment! You don't need // in front of
* every line for these kinda of comments. Instead, you just need 
* to have /* followed by the following line somewhere later:
*/
int main(){
    // Here, I do some basic arithmetic! You can do lots of math in C.
    int myExample = 5 + 10;
    // I can print this, too!
    printf("%d\n", myExample);

    // In place incrementation! Adding ++ to the end of your variable
    // Will increment it by 1 in place!
    myExample++;
    printf("%d", myExample);

    // In place decrementation! Adding -- to the end of your variable
    // Will decrement it by 1 in place!
    myExample--;
    printf("%d", myExample);

    // Here we have an example of multiplication. A single * between
    // numbers tells gcc that we are multiplying.
    int secondExample = myExample * 2;
    printf("%d", secondExample);

    // Here, I have a new operation! This is division.
    int thirdExample = myExample / secondExample;
    printf("%d", secondExample);

    return 0;
}