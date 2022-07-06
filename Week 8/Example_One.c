#include <stdio.h>

/*
* We start this week with a look at functions.
*/

// This, ladies and gentlement, is a function.
// A function follows the general format of:
// [return type] [functio name](any params, seperated by commas){all logic contained in curly brackets}

// Here, we have NO return type, I.E. void. That means the function
// Doesn't return anything at all. It takes one argument, an integer!
void cowGoesMoo(int howManyMoo){

    // Notice how the function can refer to the parameter by variable name?
    // The variable name is local to the function.
    for(int i = 0; i < howManyMoo; i++){
        printf("Moo\n");
    }
}

// You'll notice main. main is a function necessary for every program from here
// onward. If you miss it, you'll be scolded and shamed.
int main(){
    int firstCow = 1;

    int secondCow = 5;

    cowGoesMoo(firstCow);
    cowGoesMoo(secondCow);

    return(0);
}