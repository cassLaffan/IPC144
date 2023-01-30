#include <stdio.h>

int main(){
    int len = 6;
    // This line may be underlined in red in some text editors.
    // Fear not! This is just gcc complaining that you've created
    // an array with a variable length. Not that bad.
    int exampleNums[len];

    for(int i = 0; i < len; i++){
        exampleNums[i] = i + 1;
    }

    for(int i = len - 1; i >= 0; i--){
        printf("%d\n", exampleNums[i]);
    }

    return 0;
}