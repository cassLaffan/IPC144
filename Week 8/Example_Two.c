#include <stdio.h>

/*
* Here is an example of an array of a set length 6.
* Notice how the for loop starts at 0 and ends at less than 6?
* Arrays begin to index (as in count their positions) at 0, not 1.
* You will all eventually get an index out of bounds or seg fault error.
* In your early programming days, trying to access indicies out of bounds
* is almost always the cause of that error.
*/


// The main function again!
int main(){
    int len = 6;
    char example[] = {'H', 'e', 'l', 'l', 'o', '!'}; 

    for(int i = 0; i < len; i++){
        printf("%c", example[i]);
    }

    return 0;
}