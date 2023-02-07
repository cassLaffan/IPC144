#include <stdio.h>

// Let's look at a switch case!
// Switch cases are spicy if statements that streamline if
// statement logic.

void conditionA(int i){
    printf("%d is a good number.\n", i);
}

void conditionB(int i){
    printf("%d is not between 1 and 3!\n", i);
}

int main(){
    int i;

    do{
        printf("Please input a number between 1 and 3. 0 is exit. \n");

        scanf("%d", &i);
        switch(i){
            case 0:
                printf("Byebye~\n");
                break;
            case 1:
            case 2:
            case 3:
                conditionA(i);
                break;
            default:
                conditionB(i);
        }
        
    }while(i);

    return 0;
}