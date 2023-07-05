#include <stdio.h>
#include <stdlib.h>

/*
* This file will take a close look at various input/output
* related functions.
*
* An example of my own code using this kind of functionality
* can be found here: 
* https://github.com/cassLaffan/Minecraft_Pathfinding/blob/main/minecraft/suit/Utilities/UserInstructions.c
*/

// Let's exercise our use of structs!
struct stringStruct{
    char *stringEx;
};

// Something weird happens in this code!
// Can you pinpoint the problem and fix it?
int main(){


    char* input = malloc(sizeof(char*));
    printf("Let's get a string from our user!\n");
    scanf("%s", input);

    // Let's play with character pointers!
    printf("What does the string look like if we just print out the pointer? %s\n", input);

    // What happens if we use %p? We get the raw address!
    printf("'Our third C string is: %p\n", input);

    // Let's fiddle with a more classic c string
    char classicExample[10];

    // Oh ho! What is happening here? What does this 19 do?
    // Notice how we still don't need the &?
    scanf("%10s", classicExample);

    printf("Our second user input is: %s\n", classicExample);

    // We can also slice strings
    printf("The fourth character in exampleOne is: %c\n", classicExample[0]);

    // Finally, we can make a simple struct and see how adding a string works
    struct stringStruct exampleStruct;
    exampleStruct.stringEx = "This is our struct string!\0";

    printf("Our final string is: %s\n", exampleStruct.stringEx);

    return 0;
}