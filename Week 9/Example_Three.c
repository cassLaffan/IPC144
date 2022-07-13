#include <stdio.h>

/*
* Here I have another example of what a character string
* might look like. Notice how it's an array of characters?
* Character strings! Wooo!
* I actually posted this code last week, but as an example
* for arrays. There is a lot of overlap between concepts!
*/

int main(){
    int len = 6;
    
    char example[] = {'H', 'e', 'l', 'l', 'o', '!'}; 

    // Notice again that while the length of the character
    // array is 6, we start indexing at 0 and end at i < length.
    for(int i = 0; i < len; i++){
        printf("%c", example[i]);
    }

    return(0);
}