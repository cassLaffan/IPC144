#include "./File_Reading.h"

int main(){
    // Now let's create an array here that we can store
    // the file's ints in

    // Remember! Arrays are just pointers
    int arr[MAX];

    readFile(arr);

    for(int i = 0; i < MAX; i++){
        printf("The int on line %d is %d\n", i, arr[i]);
    }

    return 0;

}