#include <stdio.h>
#include <stdlib.h>
/*
* Let's write a function that takes a string
* and performs various operations on it. Being able
* to manipulate strings is very important. 
*/

void cowSaysWhateverYouWant(char* cowLines){
    printf("%s\n", cowLines);
}

// You'll notice main. main is a function necessary for every program from here
// onward. If you miss it, you'll be scolded and shamed.
int main(){
    
    // Bonus question: what happens if we try to set a letter
    // in this string to a different letter later in the code?
    // Give it a try!
    char* someLines = "Howdy, I am a cow.\0";

    cowSaysWhateverYouWant(someLines);

    printf("More lines, please!\n");

    // Woahhh there's that malloc call again.
    // Remember, if we want a more flexible program,
    // we need to make sure there's memory free for
    // what we're doing.

    char* cowlines = malloc(sizeof(char*));

    scanf("%20s", cowlines);

    cowSaysWhateverYouWant(cowlines);

    // It's always important to free memory you've malloc'd
    free(cowlines);

    return(0);
}