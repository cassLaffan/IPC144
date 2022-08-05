#include "./Debugging.h"

void fizzBuzz(int a){
    if(a % 3 == 0 && a % 5 == 0){
        printf("fizz buzz\n");
    }
    else if(a % 3 == 0){
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
    return 100;
}

void aLoop(){
    int i = 0;
    while(!i){
        printf("Oh god it won't stop.\n");
        i++;
    }
    printf("Yay it stopped!\n");
}

char* makeString(){
    return "Hello, world!\0";
}

int main(){
    fizzBuzz(4);
    printf("isTrue Casting: %c\n", isTrue());
    aLoop();
    printf("MakeString: %s\n", makeString());

    return 0;
}
