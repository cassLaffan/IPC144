#include "./Example_Header.h"

// Notice again how we don't include the .c file!
// Just the header file.

// IMPORTANT: If using the command line compiler, you must specify
// each .c file that must be compiled. For example, my command for
// compiling these files was "gcc main.c Example_Header.c"

int main(){
    printf("%d", exampleFunc(4.333));
    return 0;
}