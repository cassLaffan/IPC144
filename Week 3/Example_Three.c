#include <stdio.h>

int main(){

    int i;
    scanf("%d", &i);

    if(i == 3){
        printf("Condition met!\n");
    }
    else if(i == 2){
        printf("A different condition met!\n");
    }
    else{
        printf("Else is met!\n");
    }

    return 0;
}