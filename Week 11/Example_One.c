#include <stdio.h>

/*
* This is a basic program that allows for basic command line arguments.
* Remember the command line topics we went over for SSH! Similar concept.
* The first arguement, argc, is the number of arguments passed. Argv is
* an array of each argument fed to the program!
*/
int main(int argc, char *argv[] ){

    if(argc == 1){
        // There will always be exactly 1 command line argument if no arguments are provided.
        printf("There are no command line arguments!\n");
    }

    else{
        // You will get some weird output if you start at 0!
        for(int i = 1; i < argc; i++){
            printf("The command at position %d is %s\n", i, argv[i]);
        }
    }

    return 0;
}