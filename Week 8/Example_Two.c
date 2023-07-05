#include <stdio.h>
// Let's see how macros and constants compare.
// Note! This file will not compile. I wonder if you
// can find the problems? :)

#define pi 3.14

int multiplyConstByPi(const int a){
    a = pi * a;
    return a;
}

int main(){

    const int constantInteger = 10;

    int returnValue = multiplyConstByPi(constantInteger);

    printf("We tried to multiply a constant value! Here is the result: %d", returnValue);

    return 0;
}