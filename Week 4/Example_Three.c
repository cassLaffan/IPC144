#include <stdio.h>

int main(){

    // Here we have an explicit declaration of an array and its length.
    int exampleNums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i < 9; i++){
        printf("This is the value at index %d: %d\n", i, exampleNums[i]);
    }

    return 0;
}