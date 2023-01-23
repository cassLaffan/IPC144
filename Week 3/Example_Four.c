#include <stdio.h>

int main(){

    int i = -1;

    while(i != 1){
        printf("Please enter an integer.\n");
        scanf("%d", &i);
    }

    printf("i is now %d\n", i);

    return 0;
}