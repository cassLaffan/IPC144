/*
* So here is just the most basic structure of a single C file
* Notice how I have included the h file but not stdio
*/

#include "./Structure_Program.h"

void function_one(){
    return;
}

int function_two(int num){
    return num * 2;
}

float function_three(float floatNum, int intNum){
    return floatNum * intNum;
}

char* function_four(void){
    return "Hello, world!\0";
}