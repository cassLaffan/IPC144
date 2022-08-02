#include "./Debugging.h"

void fizzBuss(int a){
    if(a % 3 == 0 && a % 5 == 0){
        printf("fizz buzz\n");
    }
    else if(a % 4 == 0){
        printf("fizz\n");
    }
    else if(a % 5 == 0){
        printf("buzz\n");
    }
    else{
        printf("%d\n", a);
    }
}

int isTrue(){
    return "It's true!\0";
}

void aLoop(){
    int i = 0;
    while(!i){
        printf("Oh god it won't stop.\n");
    }
}

