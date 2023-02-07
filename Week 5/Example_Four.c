#include <stdio.h>

/*The purpose of this file is to give an introduction to C style strings.*/
/*Which are character arrays.*/

/*Always remember that you need the null character, \0, at the end of your character array!*/

int main(){

    //Here is a basic C style string:
    char exampleOne[] = "Hello World!\0";
    printf("Our first C string is: %s\n", exampleOne);
    
    //Now, let's pick out a specific character.
    char ch = exampleOne[3];
    printf("The fourth character in exampleOne is: %c\n", ch);

    return 0;
}