#include <stdio.h>

int main(){
    printf("Enter a number so we can run the program! ");

    int i;
    scanf("%d", &i);

    if(i == 3){
        printf("Condition met!\n");
    }
    else if(i == 2){
        printf("A different condition met!\n");
    }
    else{
        //TODO: Add nested else with class as an example
        printf("Else is met!\n");
    }

    return(0);
}