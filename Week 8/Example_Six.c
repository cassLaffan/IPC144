#include <stdio.h>
#include <stdlib.h>

/*
* This example is based off of your previous professor's examples.
* In this file, we create a car struct, along with a creation function
* and a helper function.
*/

struct Car {
    // Notice how I use character pointers here?
    // This allows for flexible character arrays of various sizes!

    // Why? It's because I've created a variable that contains an
    // address, no actual data. So when it's initialized, it gets placed
    // in memory at that location. This can be dangerous though! Sometimes
    // memory doesn't play nice.
    char* model;
    char* colour;
    float price;
    int doors;
};

// Unlike in many newer languages, C does not have classes but structs
// So a struct, like I have defined above, cannot have INNATE behaviour
// like a class in C++ or other languages would. Below, I create a few functions
// That assist this struct.

struct Car* createCar(char* name, char* color, float cost, int doorNum){
    // For smaller programs and structs, this line isn't necessary
    // but I recommend using it to start on the habit
    struct Car* car = malloc(sizeof(struct Car)); // allocates the memory necessary for the structure!

    car->model = name;
    car->colour = color;
    car->price = cost;
    car->doors = doorNum;

    return car;
}

// You can see here that we access the member variable
// for the struct and change it! Since we use pointers,
// we are editing it in memory, which allows our changes
// to persist outside of the function.
void paintCar(struct Car* car, char* newColour){
    car->colour = newColour;
}

int main() {
    // This is the format your instructor used previously!
    // This puts the civic on the stack. Generally, we will
    // want it on the heap, which is bigger and lasts for the 
    // whole program.
    //struct Car myCivic = {"Civic\0", "Blue\0", 15000.00, 4};

    struct Car* myCar = createCar("Civic\0", "Blue\0", 15000.00, 4);

    // You'll notice some new syntax! What is this arrow doing??
    // It simply replaces the syntax (*myCar).colour, which is how
    // you would generally access member variables.
    printf("%s\n", myCar->colour);

    // Notice that we feed in the pointer to the car object, as we have
    // defined above. That means we will be editing it where it's located
    // in memory (on the heap)
    paintCar(myCar, "Red\0");

    // Let's print it out again...
    printf("%s", myCar->colour);

    // Every time you use malloc, you should free the memory you've allocated.
    // Just something to keep in mind.
    free(myCar);
    return 0;
}