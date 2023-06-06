#include <stdio.h>

// Here we have a nested loop!
// It's just a loop inside of a loop. Nothing spicy!

int main(){
    int len = 6;
    char example[] = {'H', 'e', 'l', 'l', 'o', '!'}; 
    char exampleTwo[] = {'W', 'o', 'r', 'l', 'd', '!'};

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            printf("%c", exampleTwo[j]);
        }
        printf("%c", example[i]);
    }

    return 0;
}