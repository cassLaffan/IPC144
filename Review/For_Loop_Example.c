#include <stdio.h>
#include <string.h>

// Here we can see some familiar syntax!
// Again you'll notice that different syntax than my other
// file with a C string. C strings are quite flexible in how
// you declare them.

int main(){
    int len = 6;
    char example[] = {'H', 'e', 'l', 'l', 'o', '!'}; 

    for(int i = 0; i < len; i++){
        printf("%c", example[i]);
    }

    return(0);
}