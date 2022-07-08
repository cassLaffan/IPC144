#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
* In class, we spoke at length about functions. Let's write the following functions:
* - a function that takes two characters as arguments and checks
*   which is earlier in the alphabet, then returns the earlier character
* - a function that searches an array for a specific integer
* - bonus: a function that sorts an array
*/

char compareCharacters(char firstChar, char secondChar){
    char returnChar;
    if(tolower(firstChar) < tolower(secondChar)){
        returnChar = firstChar;
    }
    else{
        returnChar = secondChar;
    }
    return returnChar;
}

int arraySearch(int* array, int arraySize, int value){
    int index = -1;
    for(int i = 0; i < arraySize && index == -1; i++){
        if(array[i] == value){
            index = i;
        }
    }
    return index;
}

// Same as int main(void)
int main(){
    printf("%c", compareCharacters('A', 'c'));
    printf("%c", compareCharacters('C', 'a'));
    printf("%c\n", compareCharacters('E', 'E'));

    int integerArray[] = {1, 9, 11, 8, 7, 18, 28, 10};
    printf("%d\n", arraySearch(integerArray, 8, 18));
    printf("%d", arraySearch(integerArray, 8, 0)); 
    return 0;
}