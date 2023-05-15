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

    return 0;
}