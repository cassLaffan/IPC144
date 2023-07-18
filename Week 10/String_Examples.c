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
    return (strcmp(stringOne, stringTwo));
}

char* userInputWithSpaces(){
    char* breed[STR_SIZE];

    printf("What breed is your cat? ");

    scanf("%49s", breed);

    printf("Your cat is a %s\n", breed);

    return breed;
}

