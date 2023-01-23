#include <stdio.h>

/*This is an example of a switch statement.*/
/*A loop would work better in this context if you wanted to keep prompting the user.*/

int main(){
    int i;

    printf("Please input a number between 1 and 3.\n");
    scanf("%d", &i);

    switch(i){
        case 1:
        case 2:
        case 3:
            printf("%d is a good number.\n", i);
            break;
        default:
            printf("That's not between 1 and 3!\n");
    }

    return 0;
}