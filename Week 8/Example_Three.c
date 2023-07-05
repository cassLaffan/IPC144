#include <stdio.h>
#include <string.h>
#define LENGTH 20

/* This program demonstrates the basic stucture of a... struct.*/
/* Structs are used to define datatypes in C, kind of like defining an object.*/

struct exampleStruct{
    char title[LENGTH];
    int exampleID;
};

// This is called a constructor and it is the cleanest way to create
// a new instance of a struct.
struct exampleStruct constructor(char name[LENGTH], int id){
    struct exampleStruct constructedStruct;

    strcpy(constructedStruct.title, name);
    constructedStruct.exampleID = id;

    return constructedStruct;
}

int getID(struct exampleStruct aStruct){
    return aStruct.exampleID;
}

int main(){

    // Here is the first way you can declare a struct
    // you have the name and make it an empty variable.
    struct exampleStruct ex;
    // Then populate the struct's member variables one at a time.
    ex.exampleID = 1;
    strcpy(ex.title, "Cassandra\0");

    // Here is the second way. This is also a manual way to do it.
    struct exampleStruct exTwo = {"Tavis\0", 2};

    printf("Example ID is: %d\n", ex.exampleID);
    printf("Example title is: %s\n", ex.title);

    return 0;
}