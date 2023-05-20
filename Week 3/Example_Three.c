#include <stdio.h>
/*
* This file will just show how to cast between datatypes and
* some behaviour!
*/

int main(){
    // Let's look at casting from a float to an int!
    // We will cast "in place" here, meaning we won't make a new
    // variable.

    float example = 2.44562;
    printf("%d\n", (int)example);

    float secondExample = 2.7792;
    // Oh ho ho! It also rounds to 2. Tip: if you wanna do a quick round
    printf("%d\n", (int)secondExample);
    // up math, add 0.5. That will ensure everything rounds cleanly.
    printf("%d\n", (int)(secondExample + 0.5));

    // Let's create a new variable instead so we can keep the rounded down value
    int newExample = example;
    printf("%d\n", newExample);

    return 0;
}