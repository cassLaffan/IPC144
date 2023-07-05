#include <stdio.h>

/*This program will demonstrate the proper formatting for a small C program.*/

// Notice how my functions are named well
float multiplyByFloat(int exampleArgument){
    float ret = 5.2 * exampleArgument;
    return ret;
}

// You know exactly what they're supposed to be doing by just reading their names
// Notice how this function has two arguments?
int multiplyByInt(int exampleArgument, float secondExampleArgument){
    int ret = 5 * exampleArgument * secondExampleArgument;
    return ret;
}

int main(){
    float a = multiplyByFloat(3);
    float b = multiplyByFloat(4);

    int c = multiplyByInt(3, 3.3);
    int d = multiplyByInt(4, 3.1);

    printf("%f %f %d %d", a, b, c, d);
    return 0;
}