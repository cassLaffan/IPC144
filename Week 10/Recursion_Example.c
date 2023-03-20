#include "./Recursion_Example.h"

// This is the implementation of a recursive factorial function
// Factorials are defined as "products" (multiples) of a number
// and all of its preceeding positive integers.

// So, for example, 4! (because the exclamation mark indicates
// it's a facotiral in math) = 4 * 3 * 2 * 1 
int factorial(int num){
    // This is what we call a base case.
    // A base case is the "default behaviour" of a function
    // This has to happen at some point to break out of the "loop"
    if(num <= 1){
        return 1;
    }
    // This is the recursive step. The step that calls the function
    // internally is where it becomes recursive.
    else{
        return num * (factorial(num - 1));
    }
}

int main(){
    printf("The factorial of 10 is: %d\n", factorial(10));
    return 0;
}
