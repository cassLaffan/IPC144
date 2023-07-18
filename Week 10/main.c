#include "./String_Examples.h"


int main(){
    int numArray[] = {4, 5, 1, 6, 7, 88, 92, 1999, -19};
    sortNumberList(numArray, 9);
    printf("{");

    for(int i = 0; i < 9; i++){
        printf("%d", numArray[i]);
        if(i != 8){
            printf(", ");
        }
    }

    printf("}\n");

    printf("The index of 4 in the above array is: %d\n", searchForIndex(numArray, 4, 9));
    printf("Since -5 does not exist in the above array, we get: %d\n", searchForIndex(numArray, -5, 9));

    printf("Type in a string! ");
    
    char* inputOne = userInputWithSpaces();

    printf("The string length for the cat breed is: %d\n", findStringLength(inputOne));
    char* inputTwo = userInputWithSpaces();
    printf("The difference between the two string is: %d", areStringsTheSame(inputOne, inputTwo));

    return 0;
}