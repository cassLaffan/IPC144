#include <stdio.h>

int main(){

    printf("Enter your name and your age!\n");

    /*Let's scan an int and a char[]*/

    char str[20];
    int num;

    scanf("%19s", str);

    scanf("%d", &num);

    printf("Your age is: %d.\n Your name is: %s.\n", num, str);

    return 0;
}