#include "./String_Examples.h"

int findStringLength(char* aString){
    int ind = 0;

    while(aString[ind] != '\0'){
        printf("%c", aString[ind]);
        ind++;
    }
    
    ind++;

    return ind;
}

int areStringsTheSame(char* stringOne, char* stringTwo){
    return(strcmp(stringOne, stringTwo));
}

// This one is a tricky one. How might we deal with
// spaces when the computer sees them as terminating characters
// in their own right?
char* userInputWithSpaces(){
    // There is a function you may not have been aware of
    // which is safer to use than scanf. It's called fgets.
    // You allocate your character pointer as you always would.
    char *breed = malloc(sizeof(char*));

    printf("What breed is your cat? ");

    // Let's say 256 is the maximum amount of characters you can enter.
    fgets(breed, 256, stdin);

    printf("Your cat is a %s\n", breed);

    return breed;
}