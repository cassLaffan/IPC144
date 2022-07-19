#include "./String_Examples.h"
#include "./Function_Examples.h"

int main(){
    // Let's call some functions!
    // First, factorial
    printf("5! = %d\n", factorialExample(5));
    printf("10! = %d\n", factorialExample(10));
    printf("-1! will give us %d\n", factorialExample(-1));

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



    return 0;
}