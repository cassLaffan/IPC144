#include <stdio.h>

// Just a review of types!
// Remember, you can define a C style string
// with a static array like on line 11. 

int main(){

    printf("Enter your name and your age!\n");

    char str[20];
    int num;

    scanf("%19s", str);

    scanf("%d", &num);

    printf("Your age is: %d.\n Your name is: %s.\n", num, str);

    return(0);
}